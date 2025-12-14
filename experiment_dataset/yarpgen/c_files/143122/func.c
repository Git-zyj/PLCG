/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143122
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((/* implicit */unsigned char) var_8);
    var_12 = ((/* implicit */short) var_8);
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (10483495535384386386ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (max((((/* implicit */unsigned long long int) var_8)), (8525426344567082393ULL))) : (((/* implicit */unsigned long long int) var_3))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (-(-2063414407)))) ? (((/* implicit */int) var_5)) : (arr_0 [i_0]));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1 + 3] [i_2] [i_0] [i_3 - 3]))));
                        arr_9 [i_3] = ((/* implicit */signed char) (-(arr_4 [i_0] [i_1] [i_0])));
                    }
                } 
            } 
        } 
    }
}
