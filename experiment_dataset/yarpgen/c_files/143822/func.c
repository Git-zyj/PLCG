/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143822
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)93)) ? (arr_0 [i_0]) : (var_11)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-26838))));
        var_19 = ((_Bool) 2210924618U);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1]))) ? (((/* implicit */int) (short)26838)) : (((/* implicit */int) var_6))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_7 [i_1] [i_2] [i_2] = ((/* implicit */short) ((unsigned int) 4239626700U));
            var_21 = ((/* implicit */unsigned long long int) (short)4249);
        }
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)-30361)) ? (arr_9 [i_1] [i_1] [i_4]) : (arr_9 [i_1] [(_Bool)1] [16ULL])));
                var_23 ^= ((/* implicit */int) ((unsigned int) var_13));
                var_24 = ((long long int) var_11);
                arr_14 [(unsigned char)2] [i_1] [i_4] = ((/* implicit */_Bool) (+(arr_8 [i_1] [i_3] [i_1])));
            }
            for (unsigned int i_5 = 2; i_5 < 23; i_5 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [(_Bool)1] [(short)15])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2084042673U))))) : (((/* implicit */int) var_9))));
                var_26 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
                var_27 = ((unsigned char) var_5);
                arr_17 [i_1] [i_1] [i_5 - 2] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))) : (5870763947619242410ULL)));
            }
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(arr_13 [i_6] [i_6] [i_6] [i_1]))))));
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3613038186U)) ? (((/* implicit */int) (short)12484)) : (((/* implicit */int) (unsigned char)52)))))));
            }
            var_30 ^= ((/* implicit */unsigned long long int) ((_Bool) arr_15 [i_3] [i_3] [i_3]));
            var_31 += ((unsigned int) (!(((/* implicit */_Bool) 2210924618U))));
        }
        for (short i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (5715398985783407346ULL) : (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_7]))));
            arr_22 [i_7] [i_1] [i_1] = arr_2 [i_1] [i_1];
        }
        arr_23 [(short)12] [i_1] = ((/* implicit */int) arr_21 [i_1]);
    }
    var_33 &= ((/* implicit */unsigned int) var_15);
}
