/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136388
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
    var_14 = ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 &= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)32))));
        arr_2 [i_0] = arr_1 [i_0];
        arr_3 [1] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (var_11)));
        var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_12);
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_10))))))))));
        var_19 ^= ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 2]))) - (var_10))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16383)) >= (((/* implicit */int) (short)28)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) > (((((/* implicit */int) arr_8 [i_2])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) > (255ULL))))))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (signed char i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    {
                        var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_5])) || (((/* implicit */_Bool) var_5))))), (min((arr_17 [i_2]), (arr_5 [i_5])))))) ? ((~(arr_15 [i_5 + 2] [i_5 + 3] [i_5] [i_5 + 3]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) arr_17 [(short)12]))))))))));
                        var_21 *= ((/* implicit */unsigned short) (~(max((arr_15 [i_5 + 2] [i_5] [i_5 - 1] [i_5 + 2]), (((/* implicit */unsigned long long int) arr_4 [i_5 - 1]))))));
                        var_22 = ((/* implicit */long long int) var_2);
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) var_2);
}
