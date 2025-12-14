/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185082
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_1 + 1] [i_2] [i_3] = ((/* implicit */_Bool) max((max((arr_1 [i_1 - 3] [i_1]), (((/* implicit */unsigned long long int) arr_10 [i_1 - 1] [i_3] [i_2 + 2] [i_3 + 1])))), (((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1 - 1]))));
                        arr_12 [i_3] [i_1] [i_1 - 1] [i_1 - 2] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_3] [i_3 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (unsigned char)64))))))) ? (min((((/* implicit */int) arr_4 [(_Bool)1] [2])), (var_9))) : (((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_7 [i_3 - 1] [i_2 + 1] [i_2 - 2] [i_1 - 2]))))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */int) arr_6 [i_1] [i_1] [i_3])), (var_9))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_3 + 1] [i_2 - 1]))));
                    }
                    for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 16037682551307969706ULL)) ? (((/* implicit */unsigned long long int) 2687940505957925050LL)) : (arr_1 [i_4] [i_2])))))) | (max((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_2 + 2] [12LL]))))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18905))) : (12952188160855633046ULL)))))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_5 [i_0] [(unsigned short)1]))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        arr_17 [i_0] [(signed char)14] [(unsigned char)15] [(unsigned short)17] [(unsigned short)17] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (arr_10 [4LL] [i_2] [i_2 - 1] [i_5])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 2780883049U)) : (0ULL)))));
                        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_5])) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_1]))) : (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_5]))))));
                    }
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_13 [i_1 - 2] [i_1 - 3] [i_2 - 3] [i_2 - 1]), (arr_4 [i_1] [i_1 - 2])))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 4 */
                    for (signed char i_6 = 3; i_6 < 16; i_6 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned int) ((13249437069212764257ULL) / (13354597308975580597ULL)));
                        arr_21 [i_0] [i_1] [i_2 - 4] [i_2] [i_2 - 4] [i_2 - 4] &= ((/* implicit */unsigned int) var_11);
                        var_21 = max((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_19 [i_0] [(_Bool)1] [i_1] [(_Bool)1] [i_2] [(unsigned short)15])), (var_5)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (18446744073709551612ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) -3571402970292947286LL))) ? (arr_20 [i_0] [i_6] [i_2] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155)))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((max((var_10), (((/* implicit */long long int) 1785744061U)))), (((/* implicit */long long int) arr_16 [i_1 - 1] [i_1 - 2])))))));
                    }
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_23 = ((unsigned short) ((int) (_Bool)1));
                        var_24 = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) ((arr_7 [i_0] [i_1 - 2] [i_2 - 2] [6ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))) : (arr_1 [i_1] [i_2]))))), (var_9)));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) 845452582U))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        arr_29 [i_8] [i_1] [i_8] [i_2] [i_2] = max((max((((/* implicit */int) var_2)), (((1221907734) % (((/* implicit */int) (unsigned char)87)))))), (2147483647));
                        var_26 = ((/* implicit */_Bool) 0ULL);
                    }
                    for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        arr_32 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (8769071395944075060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))))) & (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)155))))))));
                        var_27 = ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
                        var_28 *= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) 3726664034516316592LL)) | (arr_1 [i_2 - 4] [i_2 - 4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_2] [i_9]) ? (((/* implicit */int) arr_9 [i_0] [i_9] [i_9] [i_9])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)163)))))) : (((((/* implicit */_Bool) var_10)) ? (arr_20 [i_0] [i_2] [(short)4] [i_9]) : (((/* implicit */long long int) var_9)))))))));
                        var_29 = ((/* implicit */unsigned int) 3ULL);
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */short) min((((/* implicit */int) var_14)), (((((var_10) >= (((/* implicit */long long int) var_1)))) ? (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (_Bool)1))))))));
    var_31 = ((/* implicit */int) ((unsigned short) ((unsigned short) 18446744073709551597ULL)));
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 3; i_11 < 16; i_11 += 4) 
        {
            {
                var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (560441649)))) ? (max((min((arr_34 [i_10] [i_10]), (((/* implicit */unsigned long long int) arr_35 [i_10] [i_10] [i_10])))), (((/* implicit */unsigned long long int) (signed char)-25)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (-1964163371) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_5)) ? (arr_34 [i_11] [i_11]) : (((/* implicit */unsigned long long int) arr_35 [i_10] [i_10] [i_10]))))))));
                var_33 &= ((/* implicit */unsigned short) arr_36 [i_10] [i_11 - 1]);
                arr_37 [(unsigned short)7] [i_11] [i_10] &= ((/* implicit */long long int) max((((8769071395944075046ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (-297101799))))));
                var_34 *= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
