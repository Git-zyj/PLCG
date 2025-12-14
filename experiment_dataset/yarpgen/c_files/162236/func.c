/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162236
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) 15266204810936790426ULL))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_17 = max((((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) var_8)))))), (((((unsigned long long int) var_3)) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)14)) <= (((/* implicit */int) (unsigned char)14)))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_2] [i_1]) : (arr_1 [i_0] [i_1])))) ? (((unsigned int) 10073178728139254282ULL)) : (((/* implicit */unsigned int) arr_1 [i_0] [i_1]))));
                        var_19 = ((int) (unsigned char)14);
                    }
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        arr_12 [11U] [(unsigned char)11] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 525499001)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)71))));
                        var_20 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_2]);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */unsigned char) arr_16 [i_5]);
        var_21 += ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_15)) ? (arr_15 [4U]) : (2147483637))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-116)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
        {
            arr_22 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_15 [12ULL]) : (arr_15 [8ULL])));
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    arr_27 [i_8] [i_7] [i_7] [i_7] [i_7] = var_5;
                    arr_28 [6] [i_8] [i_8] [i_8] [i_6] = ((/* implicit */int) ((unsigned char) var_9));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) arr_21 [i_8] [i_9])) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) arr_15 [i_9])) ? (18150854184513617359ULL) : (0ULL)))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18150854184513617359ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_8])) && (((/* implicit */_Bool) arr_13 [i_6] [i_8])))))) : (arr_18 [i_6 + 2] [i_8])));
                }
                var_24 = ((unsigned long long int) (+(13870865834845774548ULL)));
                var_25 = (-(((((/* implicit */_Bool) arr_24 [i_6] [8ULL] [i_8])) ? (((/* implicit */unsigned long long int) arr_26 [i_6] [i_6 - 1] [i_6] [i_6] [i_8])) : (2522410482332173815ULL))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) var_7);
                            arr_35 [i_8] [(unsigned char)13] [i_8] [i_8] [10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [i_8]))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6 - 1] [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_8])) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) 295889889195934258ULL))))) : (((var_8) >> (((arr_31 [i_6] [i_7] [10U] [i_11]) + (575414444)))))));
                        }
                    } 
                } 
            }
            for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((arr_31 [i_12] [i_7] [14ULL] [i_6]) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_29 [12])) && (((/* implicit */_Bool) var_10))))) - (1))))))));
                var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_6 + 2] [i_6 + 2]))));
                var_30 = ((/* implicit */unsigned long long int) arr_16 [i_12]);
            }
            for (signed char i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                arr_43 [i_6] [9ULL] [i_13] = arr_41 [(signed char)9] [1ULL];
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) 10543036870748536616ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6 + 2]))) : (arr_13 [10ULL] [i_13])));
                arr_44 [i_6] [i_6 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_6] [i_6] [i_6] [i_6] [i_6 + 2])) ? (arr_34 [i_6] [i_6] [i_6 - 2] [i_6] [i_6 + 2]) : (arr_34 [i_6] [i_6] [i_6] [i_6] [i_6 + 2])));
            }
        }
        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */int) ((unsigned long long int) arr_13 [i_6 - 1] [i_15]));
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-12)) ? (295889889195934271ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10)))));
            }
            for (unsigned int i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
            {
                var_34 = ((/* implicit */signed char) ((unsigned int) arr_39 [i_6 + 1] [i_16] [i_16]));
                arr_53 [i_6] [(unsigned char)6] [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_6 + 2] [i_6 - 2] [i_6 - 2] [i_6]))));
            }
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-96)))) : ((-(((/* implicit */int) (signed char)10))))));
            arr_54 [i_6 - 1] = ((/* implicit */unsigned char) arr_30 [i_6] [8ULL] [i_6]);
            arr_55 [i_6] [8ULL] [i_14] = ((/* implicit */signed char) arr_26 [i_6] [i_6 + 1] [i_6] [(unsigned char)2] [14]);
        }
        arr_56 [i_6] = (+(((((/* implicit */_Bool) var_5)) ? (arr_52 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1]) : (((/* implicit */unsigned long long int) arr_46 [i_6] [i_6 - 1])))));
    }
    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((-(var_10))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 4131058984U)) ? (var_7) : ((-2147483647 - 1)))))))))));
    var_37 = ((/* implicit */int) var_15);
}
