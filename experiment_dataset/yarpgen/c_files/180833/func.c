/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180833
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
    var_13 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_12)), (((unsigned long long int) var_3)))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_4))))))));
    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_1 [i_0] [(signed char)8])) - (var_8)));
        arr_3 [(short)2] |= ((/* implicit */unsigned int) (~(arr_1 [(_Bool)1] [i_0])));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_7 [i_0]))), (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_3])) ? ((~(arr_7 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))))))));
                        arr_14 [i_0] = ((/* implicit */_Bool) var_5);
                    }
                } 
            } 
        } 
    }
}
