/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186009
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_3 [i_0]), (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))))))))));
            arr_9 [i_0] [i_0] = ((/* implicit */int) (((~(min((((/* implicit */unsigned long long int) var_0)), (287667426198290432ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                arr_18 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                arr_19 [i_3] = ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) (unsigned short)0)));
                /* LoopSeq 4 */
                for (short i_4 = 4; i_4 < 7; i_4 += 2) 
                {
                    arr_22 [i_0] = ((/* implicit */_Bool) (unsigned short)38656);
                    arr_23 [i_4 - 3] [i_3] [i_3] [i_3] [i_0] = ((((/* implicit */_Bool) 17435674281367219828ULL)) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_2] [i_3] [i_2] [i_4])) ? (((/* implicit */int) (unsigned short)16368)) : (((/* implicit */int) var_4)))) : (var_12));
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((+(2302945656U)))));
                    arr_25 [i_4 + 1] [i_4 - 4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */int) arr_1 [i_0] [i_4 - 1]);
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_2]);
                }
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    arr_30 [i_3] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_12 [i_5] [i_2]);
                    arr_31 [i_2] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                    arr_32 [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)248))))));
                }
                for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    arr_37 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned short) arr_35 [i_0] [i_6] [i_0 - 1] [i_0 - 1] [i_0]));
                    arr_38 [i_0 + 1] [i_0] [i_3] [i_6] = ((/* implicit */unsigned short) var_11);
                }
                for (short i_7 = 1; i_7 < 8; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        arr_44 [i_0] [i_0] [i_7] [i_7] [i_0] = ((/* implicit */int) ((arr_41 [i_8] [i_7] [i_2] [i_0 - 1]) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))));
                        arr_45 [i_0 + 1] [i_3] [i_3] [i_7 + 1] [(unsigned short)4] &= ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)248)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) > (((/* implicit */int) (unsigned short)26879))))) : (((/* implicit */int) arr_33 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                    }
                    for (short i_9 = 1; i_9 < 9; i_9 += 2) 
                    {
                        arr_48 [i_0] [i_0] [i_0] [i_0] [i_9 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_0 + 1])) ^ (((/* implicit */int) arr_20 [i_0 - 1]))));
                        arr_49 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) arr_35 [i_0 - 1] [i_7 - 1] [i_9 + 1] [i_9 - 1] [i_3]);
                        arr_50 [i_9 - 1] [i_9] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))));
                    }
                    arr_51 [i_0] [i_0] [i_3] [i_2] [i_0] = ((/* implicit */short) (_Bool)1);
                    arr_52 [i_0] = ((/* implicit */_Bool) 4294967295U);
                }
                arr_53 [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14524)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) + (18159076647511261184ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned short i_10 = 3; i_10 < 9; i_10 += 2) 
            {
                arr_56 [i_0 + 1] [(signed char)8] [i_0] = 0U;
                arr_57 [i_0] [i_10] [i_0] [i_0] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */int) (unsigned short)26879)) ^ (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2047) : (((/* implicit */int) (unsigned short)14524)))));
                arr_58 [i_0] [8] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) != (var_9)));
            }
            /* LoopNest 2 */
            for (long long int i_11 = 1; i_11 < 7; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    {
                        arr_66 [i_0] [i_0] [(_Bool)0] [i_11] [i_11 + 2] [i_0] = ((/* implicit */unsigned short) (-(arr_64 [i_0 + 1] [i_2] [i_12])));
                        arr_67 [i_0 - 1] [(unsigned char)8] = ((/* implicit */unsigned int) ((18159076647511261184ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)49168)) : (2047))))));
                        arr_68 [i_0] [i_2] [(unsigned short)4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)30304)) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1293084434))))));
                    }
                } 
            } 
            arr_69 [i_0 - 1] [6U] [8U] &= ((/* implicit */_Bool) ((arr_43 [i_0] [i_0] [i_0 - 1] [i_0] [i_2] [i_2]) ? (((/* implicit */unsigned long long int) -2048)) : (arr_1 [(unsigned short)0] [i_2])));
            arr_70 [i_0] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) arr_42 [i_0] [i_2] [i_0] [i_2] [i_2] [i_2])) <= (3146394447U))))));
            arr_71 [i_0] [(unsigned short)8] &= 0ULL;
        }
        arr_72 [i_0] [i_0] = ((((/* implicit */int) ((arr_14 [i_0] [i_0 - 1] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_0] [i_0] [i_0 + 1] [i_0])))))) >> (((max((((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (281662907) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (_Bool)0)))) - (281662885))));
        arr_73 [i_0] = ((/* implicit */unsigned int) 9223372036854775807LL);
    }
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 17; i_13 += 2) 
    {
        for (unsigned short i_14 = 2; i_14 < 15; i_14 += 3) 
        {
            {
                arr_78 [i_13] [i_14] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) arr_75 [i_14 - 1])), (((5306021743564745394ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 4; i_15 < 16; i_15 += 3) 
                {
                    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 1) 
                    {
                        {
                            arr_83 [i_15] [i_14] [i_15] [i_15 - 2] = ((/* implicit */int) 10054506197575538678ULL);
                            arr_84 [i_15] [i_15] [i_15 - 3] [i_16] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_82 [i_13] [i_14 - 1] [i_14] [i_15 - 4] [i_16])) ? (9223372036854775807LL) : (((/* implicit */long long int) max((56U), (((/* implicit */unsigned int) (unsigned short)18170)))))))) > (max((max((arr_76 [i_13]), (((/* implicit */unsigned long long int) arr_75 [i_13])))), (((/* implicit */unsigned long long int) (unsigned char)0))))));
                            arr_85 [i_13] [i_14] [i_15] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_74 [i_15] [i_14 + 2]), (arr_74 [i_14 - 2] [i_14 + 2])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0))))) : (min((((/* implicit */unsigned long long int) arr_77 [i_16] [i_15] [i_13])), (arr_76 [i_15])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min(((-(min((var_12), (((/* implicit */int) var_5)))))), ((+((-(-281662907)))))));
}
