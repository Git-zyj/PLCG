/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107123
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
    var_13 = ((/* implicit */int) var_9);
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
    var_15 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)31514))))) : (min((((/* implicit */unsigned int) (unsigned char)146)), (1419276000U))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        var_16 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)22762)) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) (unsigned char)202))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34021)) ? (((/* implicit */int) (unsigned short)22762)) : (((/* implicit */int) (short)-7976))))) ? ((-(arr_1 [i_0]))) : (((/* implicit */int) arr_2 [i_0 + 3] [i_0 - 4]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)256))) : (var_11))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(short)4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-50))))), (arr_0 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (max((arr_1 [(short)4]), (var_12))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_1)), (max((((/* implicit */signed char) var_1)), (var_9)))))) ? (max((((/* implicit */int) max((((/* implicit */short) var_0)), ((short)17847)))), (((((/* implicit */int) var_4)) & (((/* implicit */int) var_1)))))) : (((/* implicit */int) min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))))));
        var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (-1) : (((/* implicit */int) (unsigned short)61195))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11)))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)61199)))) : (max((((/* implicit */int) var_0)), (var_12)))))) : ((-(max((var_11), (((/* implicit */unsigned int) var_8))))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_21 |= ((/* implicit */unsigned int) var_9);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) var_3);
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (long long int i_4 = 4; i_4 < 22; i_4 += 4) 
            {
                {
                    arr_16 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_21 [i_2] [i_3] [i_4 + 2] [i_2] = ((/* implicit */int) (+(arr_13 [i_2] [i_3] [i_4 - 4] [i_5])));
                        var_22 = ((int) arr_13 [i_2] [i_3] [i_4 - 2] [i_4 - 1]);
                        arr_22 [i_2] = ((/* implicit */long long int) arr_20 [i_2] [(signed char)21] [i_4] [(signed char)21] [i_4 + 1]);
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_12)) & (arr_19 [i_4 - 1] [i_4])));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_6])) ? (var_12) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) 1303709528)) : (125829120U)))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) var_4);
                            var_26 = ((/* implicit */_Bool) var_0);
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_4 - 2])) || (((/* implicit */_Bool) var_10))));
                            arr_27 [i_6] [i_6] [i_6] [i_6] [i_2] = ((/* implicit */_Bool) ((arr_14 [i_4 - 4] [i_2] [i_4]) - (arr_14 [i_4 - 4] [i_2] [i_4])));
                            arr_28 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-44)))));
                        }
                        for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_3)))))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(((/* implicit */int) arr_23 [i_2])))))));
                            var_30 = ((/* implicit */short) var_2);
                            var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2254000054898036312LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))) : ((-(-4841441737607652007LL)))));
                        }
                        arr_31 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_23 [i_2]);
                    }
                    var_32 += ((/* implicit */unsigned long long int) ((signed char) ((signed char) arr_17 [i_2] [i_2] [i_4] [i_3] [i_4] [i_4])));
                    arr_32 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4 - 4] [i_4 - 1] [i_4 + 2] [i_4 - 4] [i_4 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 - 3] [(signed char)16] [i_4 - 2]))) : (arr_20 [i_4 - 4] [i_4 - 2] [i_4 - 2] [(short)15] [i_4 - 4])));
                }
            } 
        } 
    }
}
