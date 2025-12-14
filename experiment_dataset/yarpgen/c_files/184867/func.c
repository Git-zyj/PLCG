/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184867
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_3 [i_0 - 3]))) ? (arr_3 [i_0 - 3]) : (((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (arr_3 [i_0 - 3]) : (arr_3 [i_0 - 3])))));
            arr_5 [i_0 + 3] [i_0 + 3] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
            arr_6 [i_0] [7LL] = ((/* implicit */short) arr_3 [12ULL]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) - (-8554213471544227819LL)));
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (~(arr_0 [i_0 + 1] [i_0 + 1])));
            arr_11 [i_0] = ((/* implicit */long long int) (short)-31480);
        }
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_16 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_8 [i_0] [i_3 + 1] [i_0 - 2])), (((unsigned int) arr_15 [i_3 + 1]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_22 [i_0 + 4] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */short) max((((signed char) (!(((/* implicit */_Bool) arr_18 [i_0]))))), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_17 [i_3 - 1] [i_3]))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (-8554213471544227840LL))))))))));
                                arr_23 [i_5] [2ULL] [i_0] [i_5] = arr_18 [i_0];
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        arr_27 [i_3] [i_3] [i_3] [i_0] [i_3 - 1] [(_Bool)0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) ((_Bool) arr_26 [i_0])))) ^ (1274665865U)));
                        arr_28 [i_0] [i_3] [(signed char)6] [i_7] = ((/* implicit */short) var_0);
                    }
                    arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) min(((_Bool)0), (((((/* implicit */_Bool) arr_1 [i_0 + 4])) || (((/* implicit */_Bool) arr_2 [i_0 + 4]))))));
                }
            } 
        } 
    }
    for (unsigned char i_8 = 2; i_8 < 22; i_8 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_9 = 1; i_9 < 24; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    {
                        arr_42 [i_9] [i_9] [i_8] [(unsigned char)16] [i_9] [i_9 + 1] |= ((/* implicit */short) arr_36 [i_10] [i_9 + 1] [i_8]);
                        arr_43 [i_9] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_9] [i_10] [i_9]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_12 = 3; i_12 < 23; i_12 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    arr_51 [i_13] = ((/* implicit */signed char) arr_45 [i_12 - 3]);
                    arr_52 [i_8] [i_9] [i_12] [i_13] = ((unsigned char) var_0);
                }
                arr_53 [i_9] [i_9] [i_12] [(_Bool)1] = ((/* implicit */_Bool) ((short) arr_44 [i_8] [i_9] [i_8 + 3] [i_8 + 3]));
                /* LoopSeq 3 */
                for (long long int i_14 = 4; i_14 < 23; i_14 += 2) 
                {
                    arr_56 [10U] [i_9] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551600ULL)) || ((_Bool)0)));
                    arr_57 [i_9] [i_8 - 1] = ((/* implicit */short) (+(var_3)));
                }
                for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    arr_60 [(short)10] [i_9] [(short)10] = arr_59 [i_8] [i_9] [i_9] [i_15];
                    arr_61 [i_9] = arr_48 [i_8 - 1] [i_8 - 1] [i_9] [i_15];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        arr_64 [i_8] [i_9 + 1] [i_9] [i_9] [i_9] = ((/* implicit */int) var_0);
                        arr_65 [i_9] [1U] = ((/* implicit */unsigned char) var_5);
                        arr_66 [i_16] [i_12] [i_12] [i_16] [i_9] = ((/* implicit */unsigned char) arr_35 [(unsigned char)11]);
                        arr_67 [i_12] [i_9] [i_12] [i_9] [i_16] = ((/* implicit */long long int) arr_41 [i_8 - 2] [i_9]);
                    }
                    arr_68 [i_8 - 1] [i_9] [i_12] [i_9] = ((/* implicit */unsigned char) arr_59 [i_12] [i_9] [i_9] [10ULL]);
                    arr_69 [12ULL] [i_9] [i_12] [i_8] = ((/* implicit */int) arr_38 [i_8] [i_9] [i_12] [i_8]);
                }
                for (unsigned int i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    arr_74 [i_9] [i_9] = ((((/* implicit */_Bool) arr_45 [i_8 + 3])) && (((/* implicit */_Bool) arr_45 [i_8 + 3])));
                    arr_75 [i_9] [5] [i_9] [i_12 - 1] [i_17] [i_17] = ((/* implicit */long long int) arr_32 [i_8]);
                }
            }
            for (unsigned char i_18 = 3; i_18 < 23; i_18 += 3) /* same iter space */
            {
                arr_78 [i_9] [i_9] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_8])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_59 [i_9] [i_9 + 1] [i_9] [i_9])))) ? (((/* implicit */int) ((unsigned short) var_6))) : (arr_70 [i_8] [i_18] [i_9] [i_18 + 2] [i_18 + 2] [i_18]));
                arr_79 [i_8] [i_9] [i_18] [i_8] = ((unsigned long long int) arr_50 [i_8 - 2] [i_8] [i_8 + 1] [i_8]);
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_20 = 1; i_20 < 24; i_20 += 4) 
                    {
                        arr_85 [(_Bool)1] [i_9] [i_8] [i_8] [i_8] = arr_34 [i_9] [i_18 + 1] [i_19];
                        arr_86 [i_9] [i_18] [i_8] [i_8 + 1] = ((/* implicit */unsigned char) arr_62 [i_8 - 2] [i_18 - 1] [i_9] [9] [i_20 + 1]);
                        arr_87 [i_19] [i_9 + 1] [i_9] [i_19] [i_9] = ((/* implicit */long long int) (+(((/* implicit */int) arr_45 [i_8 + 1]))));
                    }
                    arr_88 [i_9] [i_18] = ((/* implicit */short) (signed char)0);
                }
            }
            arr_89 [i_9] [i_9] = ((/* implicit */int) arr_54 [i_8] [i_9] [(unsigned char)12] [i_9]);
        }
        arr_90 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_70 [i_8] [i_8] [i_8] [i_8] [i_8 + 1] [i_8])) ? (((/* implicit */int) arr_50 [i_8 + 1] [i_8] [(short)1] [i_8])) : (((/* implicit */int) (short)3810))))), (arr_72 [i_8] [i_8] [i_8])))) & (((((8554213471544227839LL) & (arr_47 [i_8] [i_8 + 1]))) | (((/* implicit */long long int) ((/* implicit */int) max(((short)-26542), (((/* implicit */short) (_Bool)1))))))))));
    }
    for (short i_21 = 0; i_21 < 19; i_21 += 3) 
    {
        arr_93 [i_21] = ((/* implicit */int) min((((arr_70 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]) == (arr_70 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]))), (((arr_70 [8] [8] [i_21] [i_21] [i_21] [i_21]) != (((/* implicit */int) (signed char)0))))));
        arr_94 [i_21] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_71 [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */int) arr_71 [i_21] [i_21] [i_21] [i_21])) : (((/* implicit */int) arr_76 [i_21] [i_21] [i_21])))), (min((((((/* implicit */_Bool) var_2)) ? (262241377) : (((/* implicit */int) (signed char)51)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)80)) == (((/* implicit */int) (_Bool)1)))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 4) 
    {
        for (unsigned int i_23 = 4; i_23 < 14; i_23 += 1) 
        {
            {
                arr_99 [i_23] [(short)5] [1ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_7 [i_23] [i_23]))))) ? (((/* implicit */unsigned int) arr_55 [i_22] [i_22] [i_23])) : (arr_83 [i_23] [i_23 - 4] [i_23] [i_23] [i_23] [i_23 - 4]))) % (((((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_22] [i_22] [i_23] [i_23]))))) ? (((/* implicit */unsigned int) var_3)) : (max((((/* implicit */unsigned int) arr_26 [i_23])), (1243548731U)))))));
                arr_100 [i_23] = ((((/* implicit */int) var_0)) / (min(((((_Bool)1) ? (((/* implicit */int) arr_38 [i_23] [(unsigned short)11] [(unsigned short)11] [i_23])) : (((/* implicit */int) arr_32 [i_23])))), (((((/* implicit */int) arr_62 [i_23] [i_22] [i_23] [i_22] [i_22])) - (((/* implicit */int) (unsigned short)38424)))))));
                arr_101 [i_22] [i_23] = ((/* implicit */int) arr_34 [i_22] [i_22] [i_23]);
                arr_102 [i_23] = ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((((/* implicit */unsigned int) (_Bool)1)), (arr_12 [(signed char)5]))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) arr_0 [i_22] [i_23])) != (arr_34 [i_22] [(unsigned short)2] [i_23]))))))));
                arr_103 [i_23] [(signed char)10] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (18446744073709551615ULL) : (1875475902595142960ULL)));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & (var_6))))))) ? (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241)))));
    var_13 = ((/* implicit */unsigned char) (short)-19163);
}
