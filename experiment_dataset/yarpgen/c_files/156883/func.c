/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156883
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1]))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */int) (short)2047)) < (((/* implicit */int) (unsigned char)49))));
                        arr_13 [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_9 [i_1] [i_2] [(short)1] [i_1]), (((/* implicit */unsigned long long int) min(((unsigned char)49), (((/* implicit */unsigned char) (_Bool)1)))))))) || ((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (var_3))))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            arr_21 [1ULL] [i_1] [(unsigned short)7] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) << (((1048575U) - (1048558U)))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1919437420)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))) : (arr_9 [i_1] [i_2 + 1] [(unsigned short)6] [i_2])));
                            arr_22 [i_0] [i_0] [i_1] [i_4] [(unsigned short)8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_3 [i_2]) : (((/* implicit */int) arr_12 [3] [i_1] [i_1] [i_4] [i_4]))))) ? ((+(4293918720U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-13870))) | (4294967295U)))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [1LL] [i_2 + 2] [i_2 + 2] [i_4] [i_5]))) + (9007199254740991ULL))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) >> ((((-(var_16))) - (7313551099860278620LL)))));
                        }
                        var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_8 [i_0] [i_1] [i_1]) ? (max((arr_3 [i_0]), (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_4] [i_4])) / (arr_14 [i_1] [5LL])))))), (min((4294967274U), (((/* implicit */unsigned int) arr_19 [i_2 + 2] [i_2] [i_2] [2U] [i_2 + 1] [2U] [i_2 + 1]))))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_14);
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) >= (18437736874454810624ULL)));
    var_27 = ((/* implicit */unsigned short) (~(0U)));
}
