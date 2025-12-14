/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15426
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
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_1), (var_1))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 4; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */int) 1659464470166948143ULL);
                            arr_14 [i_4] [i_2] [i_1] [i_1] [i_4] [i_2] = ((/* implicit */int) arr_12 [i_2] [i_4]);
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_3 - 4] [i_0] [10U] [i_1] = ((/* implicit */unsigned int) ((signed char) arr_15 [i_1 + 1] [(signed char)6] [i_3 - 4] [i_3 - 1] [i_3 - 1] [i_3 + 1]));
                            arr_18 [i_1] [i_2] [i_1] = ((/* implicit */short) ((int) var_16));
                            arr_19 [i_0] [i_0] [i_2] [i_2] [i_0] [i_1] = var_2;
                            arr_20 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 - 1] [i_3 - 4] [i_3 - 2] [i_3 - 3])) ? (((/* implicit */int) arr_11 [i_1] [i_1 - 2] [i_1 - 1] [i_2] [i_3 - 4] [i_3 - 2])) : (((/* implicit */int) arr_11 [i_1] [i_0] [i_1 - 3] [i_2] [i_3 - 2] [i_3]))));
                        }
                        arr_21 [(signed char)0] [i_1 - 1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_0] [i_0] [i_3 + 1] [0ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) 1078033282)) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (((/* implicit */long long int) 181807589)) : (arr_4 [i_3])))))) : (min((min((((/* implicit */unsigned long long int) arr_12 [i_1 - 3] [i_2])), (arr_16 [i_2] [i_1 - 3] [i_2]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_16 [i_0] [i_0] [i_2])))))));
                    }
                    for (signed char i_6 = 4; i_6 < 13; i_6 += 2) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) min((((unsigned int) (~(181807589)))), (((/* implicit */unsigned int) (unsigned short)50112))));
                        arr_25 [i_1] [i_2] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_0] [i_6 - 1] [(signed char)10]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_28 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_1 [i_1 - 1]))))));
                        arr_29 [i_1] = ((/* implicit */int) ((long long int) 0LL));
                        arr_30 [i_1] [i_1 + 1] [(_Bool)1] = ((/* implicit */int) ((unsigned char) ((((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2])) ^ (arr_10 [i_7] [i_7] [i_2] [i_1] [i_0]))) * (((/* implicit */int) ((-1078033282) >= (((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_2] [i_2]))))))));
                        arr_31 [i_0] [i_1 - 3] [i_0] [i_1] = ((/* implicit */int) ((_Bool) ((int) max((arr_3 [i_0] [(unsigned short)8]), ((short)30163)))));
                        arr_32 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1 + 1] = ((/* implicit */unsigned short) max((max((((/* implicit */int) (unsigned short)50112)), (((((/* implicit */_Bool) -1411805996)) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_2] [i_1])) : (((/* implicit */int) arr_22 [i_0] [i_0])))))), ((+(((/* implicit */int) max((arr_8 [(unsigned short)13] [(unsigned short)13] [i_2] [(unsigned short)13]), (((/* implicit */unsigned short) (short)-29485)))))))));
                    }
                    for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        arr_35 [i_0] [i_1 - 2] [i_1] [i_1] [7] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_8 - 1] [i_8 + 1])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (arr_4 [i_1]) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_13), (arr_7 [i_1 + 1] [2LL]))))))));
                        arr_36 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_8 - 1] [i_1 - 1])) ? (3367780133254509987ULL) : (((/* implicit */unsigned long long int) arr_15 [i_0] [(unsigned short)2] [i_1 - 2] [(unsigned char)10] [i_0] [i_8 - 1]))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (unsigned short)24270)) - (((/* implicit */int) arr_6 [i_0] [i_1] [13LL])))))));
                        arr_37 [i_1] = 2147483647;
                        arr_38 [i_0] [i_0] [i_2] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                    {
                        arr_42 [i_2] = ((/* implicit */unsigned char) arr_11 [i_0] [i_1 - 1] [i_2] [i_9 + 1] [i_9] [i_2]);
                        arr_43 [i_0] [i_2] [i_2] = ((/* implicit */signed char) var_16);
                        arr_44 [i_9] [i_0] [i_1] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned short)42997))) ? ((+(arr_16 [i_1 - 1] [(unsigned char)10] [(unsigned char)10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_2] [i_1]))) : (1LL))))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 1; i_11 < 11; i_11 += 2) 
                        {
                            arr_50 [i_0] [i_1 - 3] [i_2] [i_10] [i_0] = ((_Bool) var_3);
                            arr_51 [i_1] [i_1 - 3] [i_2] [i_1 - 3] [i_1] = ((/* implicit */short) ((unsigned long long int) (+(arr_10 [i_11 - 1] [i_10] [i_2] [i_1] [i_0]))));
                            arr_52 [i_0] [(unsigned char)10] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (~(arr_45 [i_1] [i_2] [i_1] [i_2] [i_10 + 1] [i_11 + 2])));
                            arr_53 [i_0] [i_1 - 3] [i_1 - 3] [i_2] [i_10] [i_0] [i_0] = ((/* implicit */unsigned short) arr_27 [i_1] [i_1 - 3] [i_0]);
                            arr_54 [i_1] [i_10 + 1] [i_2] [i_10 + 1] [i_2] [i_1] [i_11] = ((/* implicit */short) (+((~(((/* implicit */int) var_13))))));
                        }
                        arr_55 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_14);
                    }
                    arr_56 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2147483647)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_2))));
    var_22 |= ((/* implicit */unsigned char) var_12);
}
