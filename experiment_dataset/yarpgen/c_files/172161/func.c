/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172161
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (signed char)10)))), (min((((/* implicit */int) (unsigned short)23263)), (arr_2 [i_0])))))) ? (((long long int) 18446744073709551608ULL)) : (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1)))) : (arr_0 [i_0])))));
        arr_4 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_14 = ((/* implicit */unsigned char) var_12);
    }
    for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((int) min((arr_6 [i_1 - 1]), (arr_6 [i_1 + 1])))))));
                    var_16 &= ((/* implicit */_Bool) min(((+(arr_12 [i_1] [i_3 - 1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */long long int) 1565103765)) == (arr_12 [i_1] [i_3 - 1] [i_1]))))));
                    arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) ((int) -1));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        for (signed char i_5 = 4; i_5 < 20; i_5 += 4) 
                        {
                            {
                                arr_21 [i_2] [i_4] [i_3] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2] [(signed char)4] [i_2])) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) arr_18 [i_1] [(_Bool)1])) : (((/* implicit */int) var_9))))) : (2727380341U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5)) ? (((/* implicit */int) arr_16 [i_2] [0ULL] [0ULL] [i_2] [i_2])) : (-1063113733))))))))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_4 + 1] [i_5 + 1])) - (arr_15 [i_1] [8ULL] [i_1] [12] [16])))) ? (max((266338304U), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 14U))))))) | (((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 1] [i_4 - 1] [i_5 - 1])) ? (9223372036854775807LL) : (-999839658563964456LL))))))));
                                var_18 += ((/* implicit */unsigned char) 578686642);
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((((/* implicit */_Bool) ((int) arr_17 [i_4] [i_4] [i_3] [i_5] [i_5 + 2]))) ? (-7311571869698738302LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5140201930641380256LL)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1]))))))))))))));
                                arr_22 [i_2] [i_3] [i_3 + 1] [i_4] [(short)6] = ((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) 2147483647))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [i_1] [i_1] = ((/* implicit */int) var_11);
    }
    var_20 |= ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) 2727380341U))));
}
