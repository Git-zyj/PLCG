/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109074
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 17ULL);
                            arr_13 [i_1] = ((/* implicit */int) (!(((arr_1 [i_2] [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1])))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = max((18446744073709551599ULL), (((/* implicit */unsigned long long int) arr_11 [3ULL] [i_1 + 4])));
                /* LoopSeq 2 */
                for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        arr_22 [(_Bool)1] [16ULL] [i_4] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_4] [i_5])) >> (((var_3) + (858772554)))));
                        arr_23 [i_5] [i_1 - 4] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_17 [i_5] [i_5 + 2] [i_5 + 3] [i_0]), (18446744073709551599ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5] [i_5 + 1] [i_5 + 1] [i_0])) ? (((/* implicit */unsigned long long int) 1196130448)) : (arr_17 [i_5 - 2] [i_5 + 1] [i_5] [i_5]))))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 2) /* same iter space */
                    {
                        arr_27 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */signed char) 254846698U);
                        arr_28 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned char) 15ULL);
                        arr_29 [i_1] = ((/* implicit */_Bool) 17102546967630759683ULL);
                        arr_30 [i_0] [i_6] [i_4] [i_4] [i_0] = ((/* implicit */short) var_10);
                    }
                    for (unsigned char i_7 = 2; i_7 < 21; i_7 += 2) /* same iter space */
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (max((((/* implicit */unsigned long long int) arr_18 [i_0] [i_1])), (18446744073709551599ULL)))))) != (arr_8 [i_0] [i_1 + 2] [i_4] [i_7])));
                        arr_34 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (1344197106078791955ULL)))) || (((/* implicit */_Bool) arr_31 [i_0] [i_1 - 4] [i_4 + 2] [i_4 + 2] [i_7])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) (+(14ULL)))) && (((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) var_8))))))))));
                        arr_35 [i_4] [i_4 + 2] [(signed char)7] [i_1] = ((/* implicit */unsigned long long int) -1);
                        arr_36 [i_0] [i_1] [i_4] [i_7] [i_7 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))) >= (arr_15 [i_0] [5ULL] [22ULL]))) ? (((var_11) * (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) var_1))))) ? (17102546967630759683ULL) : (((/* implicit */unsigned long long int) -114284812))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 2; i_8 < 22; i_8 += 2) 
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(arr_37 [i_1 + 2] [i_1] [i_8 + 2])));
                        arr_42 [i_1] [(unsigned char)5] [i_4] = ((/* implicit */unsigned long long int) -4810884911138663233LL);
                    }
                    arr_43 [i_1] = ((/* implicit */unsigned long long int) -589835960);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_46 [i_0] [i_0] [i_1] [(_Bool)1] = ((((/* implicit */_Bool) (unsigned char)111)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_1] [17] [i_0] [i_0])) ? (12ULL) : (3238638228590529752ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        for (short i_11 = 1; i_11 < 23; i_11 += 2) 
                        {
                            {
                                arr_51 [i_11 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_18 [i_1 - 2] [i_1 - 1]))))));
                                arr_52 [i_11] [i_1] [i_1] [5ULL] [23ULL] [(unsigned char)12] [i_10] = ((/* implicit */long long int) var_7);
                                arr_53 [i_0] [i_1] [i_1] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((min((arr_25 [i_0] [i_1] [(signed char)9] [i_10] [i_11 + 1] [i_10]), (((/* implicit */unsigned long long int) arr_50 [i_0] [i_0] [i_1])))) != (arr_26 [i_0] [i_9] [i_10])));
                                arr_54 [i_0] [(_Bool)1] [(unsigned char)20] [i_1] [i_10] [i_10] [i_11] = ((/* implicit */short) ((var_0) || (((/* implicit */_Bool) (unsigned char)119))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    arr_58 [i_1] [i_12] [11ULL] [i_1] = ((/* implicit */unsigned long long int) var_9);
                    arr_59 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_12] [i_1]);
                }
            }
        } 
    } 
    var_12 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_1)), (var_5))), (max((var_5), (6125482121823998726ULL)))));
    var_13 = ((/* implicit */unsigned long long int) var_10);
    var_14 = ((/* implicit */unsigned long long int) -605850641);
}
