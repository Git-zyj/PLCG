/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138260
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
    var_20 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [4ULL]))))));
            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) 2265965141U)) && (((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_1])))) ? (((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_0]))) : (((/* implicit */int) ((14033295224519122833ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
            arr_6 [i_0 + 1] [i_0 + 1] |= var_11;
        }
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_10 [i_2] = ((int) var_15);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                arr_13 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)227)) ? (arr_5 [i_3]) : (((/* implicit */int) arr_4 [i_0]))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_2 [i_0] [i_2 + 1] [i_2 + 1])) : (var_7)));
                var_24 ^= ((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_0] [(signed char)14]) << (((arr_12 [i_3] [i_3] [i_3]) - (2350049769U)))));
                arr_14 [i_2] [2] [i_2] [5ULL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (14563729231863325703ULL)));
            }
        }
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((int) (unsigned char)48)))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */int) ((var_11) < (((/* implicit */unsigned long long int) arr_3 [i_4] [i_4]))));
        arr_18 [i_4] = ((var_0) ? (arr_12 [i_4] [i_4] [i_4]) : (arr_12 [(unsigned short)4] [i_4] [i_4]));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 1) 
            {
                {
                    arr_23 [i_4] [i_4] = ((/* implicit */unsigned long long int) (((~(arr_9 [i_5]))) >> (((((/* implicit */int) arr_11 [i_4] [i_4] [10U])) + (8007)))));
                    arr_24 [7ULL] [i_5] [3LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_6 - 1])) ? (arr_8 [i_6 - 4]) : (arr_8 [i_6 - 4])));
                    arr_25 [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_6 + 1] [i_6 - 3] [i_6 + 1])) ? (((/* implicit */int) var_17)) : (arr_5 [i_6 + 2])));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (14563729231863325703ULL)));
                }
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        arr_28 [i_7] [i_7] = ((unsigned int) ((((((/* implicit */_Bool) arr_1 [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5350))) : (arr_9 [(unsigned short)20]))) > (arr_12 [i_7] [i_7] [(unsigned char)13])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (-1))))))));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (arr_8 [i_7])));
        }
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) arr_30 [i_7] [4ULL]))));
        var_30 = var_2;
    }
}
