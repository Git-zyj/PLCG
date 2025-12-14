/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15766
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((((-1286260924) - (((/* implicit */int) (short)10541)))) | (var_14))) / (((/* implicit */int) (signed char)-1)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), ((unsigned char)226)));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_4 [i_0 + 1] [(signed char)5]))));
                        /* LoopSeq 2 */
                        for (short i_4 = 4; i_4 < 12; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */int) min((var_19), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (-1)))));
                            var_20 = max((-938150480), (((/* implicit */int) (_Bool)0)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (9362587966729617740ULL)));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (max((((((/* implicit */_Bool) var_7)) ? (arr_13 [i_1] [i_1 + 3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((arr_8 [i_0] [(unsigned short)2] [i_2] [i_3 - 2]) - (var_14)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (528630722)))) ? ((-(((/* implicit */int) (signed char)47)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (unsigned char)234)))))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13958))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_0] [i_5] [i_2] [i_3] [i_0]) != (((/* implicit */int) arr_6 [i_5] [(unsigned short)12] [i_2])))))) + (((var_15) >> (((var_5) + (253808043097644707LL)))))))));
                            var_24 = ((/* implicit */unsigned char) var_4);
                        }
                    }
                    /* vectorizable */
                    for (short i_6 = 3; i_6 < 10; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) arr_3 [i_1] [i_6]);
                        var_26 = ((/* implicit */unsigned int) ((((arr_15 [i_0] [i_6] [i_2] [i_2] [i_6]) / (((/* implicit */int) (unsigned char)15)))) - (((/* implicit */int) var_3))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13958)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15628))) : (692500287214727093LL)));
                    }
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) 987932141U))));
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 1; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) max(((((+(((/* implicit */int) (short)13962)))) - (arr_7 [i_0] [i_0] [(_Bool)1] [i_7]))), (((/* implicit */int) min((arr_12 [i_8 + 1]), (arr_12 [i_8 - 1])))))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_21 [i_0] [i_1 - 2] [i_2] [i_8 + 2])))) / ((+(((unsigned int) var_14))))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [i_0 + 3] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)13987)) - (-1057379877)))) : (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 - 1] [i_7] [i_1 - 1])), (arr_3 [i_0 + 2] [i_1 - 2])))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */int) max((var_32), (max((((/* implicit */int) (short)8192)), (1134928819)))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_4)) ? (arr_24 [i_0 - 1] [i_0 - 3] [i_0] [i_0 - 1] [i_0 - 1] [i_0]) : (arr_7 [i_1 - 2] [i_1 + 1] [i_1 + 3] [i_1 + 1])))))));
                            var_34 = ((/* implicit */unsigned short) ((((var_2) && (arr_18 [i_9] [i_9 - 1] [i_9] [(short)9] [i_9]))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_18 [i_9 - 1] [i_9 - 1] [(short)9] [i_9] [i_9]))));
                        }
                    }
                    for (unsigned char i_10 = 4; i_10 < 11; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4995)) ? (arr_32 [i_0] [i_0] [i_1 + 3] [12U] [i_10] [12U] [i_11]) : (((/* implicit */unsigned int) -75393841))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)102)) >= (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) arr_12 [i_0])) ? (var_5) : (var_5)))))) ? ((((+(-1LL))) - (((arr_26 [i_0 - 1] [i_0 - 1] [i_2] [i_1] [i_0 - 1]) | (((/* implicit */long long int) ((/* implicit */int) (short)15))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_8 [i_11] [i_0] [i_0] [i_0]))) ? (arr_25 [i_11] [i_10] [i_2] [i_1] [i_0]) : ((-(var_0))))))));
                            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) arr_21 [10U] [i_1] [i_1] [(signed char)2]))));
                        }
                        var_37 = ((/* implicit */unsigned char) arr_24 [0LL] [(_Bool)1] [i_2] [i_1] [(_Bool)1] [i_1 + 1]);
                    }
                    var_38 = ((/* implicit */_Bool) max((arr_13 [2] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) >> (((/* implicit */int) var_1)))) < (arr_7 [i_0 + 1] [i_2] [i_0 + 1] [i_1]))))));
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned int) max(((short)1943), (((/* implicit */short) arr_1 [i_0]))));
    }
}
