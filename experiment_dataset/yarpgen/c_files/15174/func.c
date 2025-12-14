/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15174
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
    var_11 = var_5;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) * (arr_1 [i_0] [i_1])))) / (min(((-(var_3))), (((/* implicit */long long int) arr_1 [i_1] [i_1]))))));
                var_13 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)112)) || (((/* implicit */_Bool) var_8)))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((~(arr_5 [i_1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))), (var_7)));
                    arr_8 [i_0] [(signed char)5] [i_2] = var_0;
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (+(1514520825U)))), (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                            var_16 = ((/* implicit */_Bool) arr_10 [(short)6] [i_2] [(short)6] [i_4 + 2]);
                            arr_13 [i_4] [21LL] [i_2] [5U] [21LL] = ((/* implicit */unsigned short) var_7);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((unsigned int) arr_0 [i_5] [i_1]))) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] [i_5])), (arr_6 [i_5] [i_1] [i_1] [i_1])))))))));
                            var_18 = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) (signed char)11)))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [i_1] [i_3])))))), (((((/* implicit */unsigned long long int) 854405386)) / (555842367592980871ULL)))))));
                        }
                        var_20 = ((/* implicit */unsigned short) (-(min(((-(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) arr_11 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] [i_0]))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) (short)-23933);
                        arr_18 [i_0] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-3621)))))) < (arr_4 [i_0] [i_1] [i_2]))))) : (((var_2) + (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) (unsigned char)191)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((1514520825U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            arr_25 [i_0] [i_0] [i_2] [i_7] [i_8] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-23933)) + (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [(unsigned char)12] [i_1])))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_17 [i_0] [i_0])))))));
                        }
                        for (unsigned long long int i_9 = 3; i_9 < 22; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_9 + 1] [i_9] [7ULL])) ? (var_7) : (arr_26 [i_0] [11U] [i_9 + 1] [(unsigned short)6] [i_9])));
                            arr_28 [i_7] [i_7] = ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(signed char)12] [(signed char)12] [i_1] [i_1]))) * (arr_1 [i_2] [i_2])));
                        }
                        var_24 = ((/* implicit */unsigned long long int) ((4611686018427387904LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_25 = ((/* implicit */unsigned char) ((((-714043051531030544LL) + (9223372036854775807LL))) >> (((var_9) + (1425360458)))));
                    }
                }
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_1))))))) : (((((/* implicit */long long int) (~(((/* implicit */int) var_1))))) / (((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
}
