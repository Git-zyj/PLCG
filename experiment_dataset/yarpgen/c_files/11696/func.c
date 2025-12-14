/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11696
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_4 [i_1 + 1] [i_1 - 1])))) ? (max((arr_4 [i_1 + 1] [i_1 - 1]), (((/* implicit */long long int) 628492298)))) : ((-(arr_4 [i_1 + 1] [i_1 - 1])))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_9 [i_3] [i_0] [i_0] [i_0] = arr_1 [i_1 + 1];
                        var_17 = ((/* implicit */_Bool) var_12);
                    }
                    var_18 = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -296731276)) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1))))))) : (min((max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (arr_1 [i_2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)88)))))))));
                        arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_4] [i_1 - 1] [i_0] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_1 + 1]))))) || (((/* implicit */_Bool) (signed char)-6))));
                        var_20 *= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_10 [8] [i_4] [i_1 + 1] [i_1 - 1] [i_1 + 1] [8])) & (((/* implicit */int) arr_10 [4LL] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [4LL]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (+(2116020057126102447LL)));
                            var_22 = ((/* implicit */short) (-((+(arr_1 [i_5])))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_2 [i_2] [i_1 - 1]))) / ((+(-2147483646)))));
                            arr_17 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_6 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 2])));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1 - 1] [(unsigned char)3] [i_2])) && (((((/* implicit */_Bool) 2147483643)) && (((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_2] [i_4] [i_4] [i_6])))))))));
                            arr_22 [i_0] [i_1] = ((/* implicit */signed char) arr_0 [8]);
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(-2147483643))))));
                            var_26 = ((/* implicit */unsigned short) arr_4 [i_6] [i_6 - 2]);
                        }
                        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            arr_27 [i_0] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (signed char)-123);
                            var_27 = ((/* implicit */int) arr_1 [i_0]);
                        }
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_28 -= ((/* implicit */signed char) max(((((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_4 [(signed char)12] [(signed char)12])) : (var_14))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_15 [i_8] [i_4] [i_0] [i_1 + 1] [i_0])))))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)-6)), ((short)15754))))));
                            var_29 += ((/* implicit */short) arr_19 [i_4] [i_2] [i_1 - 1] [i_0]);
                        }
                    }
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_1 + 1] [i_1] [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_1])) ? (((((/* implicit */_Bool) -2147483643)) ? (arr_29 [i_1 + 1] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_29 [i_1 + 1] [i_1 - 1] [i_0] [i_1] [i_0] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_29 [i_1 - 1] [i_1] [i_0] [11ULL] [i_0] [i_1] [i_1])) ? (arr_29 [i_1 + 1] [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]) : (arr_29 [i_1 - 1] [i_1] [i_0] [i_1 + 1] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_31 |= ((/* implicit */int) (unsigned char)62);
}
