/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134498
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [(short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0])) && (((/* implicit */_Bool) arr_3 [(unsigned short)2] [i_0 + 1] [(unsigned short)2])))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (1343967177U)))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (short)10135);
                arr_9 [i_0 + 3] [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) - (((/* implicit */int) (short)-10143)))) == (((/* implicit */int) min((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) (short)10135))))))) ? (var_14) : (arr_5 [i_1] [i_0 + 3] [i_0 + 1])));
                arr_10 [6ULL] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) arr_6 [i_0 + 3] [i_1] [i_1])))), (((((/* implicit */int) arr_3 [11ULL] [i_0] [i_0])) % (((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_1]))))));
                arr_11 [0] [(signed char)10] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_5 [(_Bool)1] [i_1] [(_Bool)1]) << (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10149))) / (var_1)))))) && (((/* implicit */_Bool) max((arr_5 [(unsigned char)0] [i_0 + 3] [i_0 + 2]), (((/* implicit */long long int) arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 3])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            {
                arr_19 [i_2] = min((((/* implicit */int) arr_15 [i_2] [i_3])), (min((((/* implicit */int) arr_16 [i_2] [i_2])), (((((/* implicit */int) arr_15 [i_2] [(unsigned short)10])) - (((/* implicit */int) (signed char)0)))))));
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_23 [i_2] [(signed char)16] [i_2] = arr_22 [2] [2] [i_4];
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_31 [(_Bool)1] [i_3] [i_3] [i_2] [i_6] = ((/* implicit */long long int) (~(var_2)));
                                arr_32 [i_2] [i_2] [i_3] [i_3] [i_4] [4] [i_6] = (short)-10119;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (short i_8 = 1; i_8 < 18; i_8 += 1) 
                        {
                            {
                                arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) arr_40 [i_8 - 1] [i_3] [i_2] [i_7] [i_8 - 1])) ^ (((/* implicit */int) arr_40 [i_8 + 2] [i_3] [i_2] [i_3] [i_4])))) != (((/* implicit */int) arr_40 [i_8 + 2] [i_8 + 2] [i_2] [i_8 + 2] [i_8]))));
                                arr_42 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((-8807978376408797672LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-10159)) + (10222)))));
                            }
                        } 
                    } 
                    arr_43 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_2] [i_3] [i_4])) % (((/* implicit */int) arr_36 [i_2] [i_2] [i_3] [i_2]))))) > (max((((/* implicit */unsigned long long int) 886396696U)), (8235796562536168762ULL)))))) != (((((/* implicit */_Bool) arr_29 [i_2] [1ULL] [i_4] [1ULL] [i_4] [i_4])) ? (((/* implicit */int) arr_26 [11LL] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (signed char)0))))));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_47 [12] [i_3] [12] [12] = ((/* implicit */unsigned char) arr_45 [i_3] [i_3]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 3; i_10 < 16; i_10 += 3) 
                    {
                        arr_52 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_3] [i_9] [i_10] [i_2])) - (((/* implicit */int) arr_36 [i_10] [i_10] [i_10] [i_2]))));
                        arr_53 [i_2] [i_3] [i_9] [i_2] [(unsigned char)12] = ((/* implicit */unsigned short) arr_28 [i_3] [(signed char)3] [i_9] [i_10] [i_9] [i_3] [i_3]);
                        arr_54 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_10 + 4] [i_10 - 3])) ? (((/* implicit */unsigned long long int) var_12)) : (((7336809052180265656ULL) << (((3014783145849644081ULL) - (3014783145849644052ULL)))))));
                        arr_55 [i_2] [0U] [i_2] [i_2] [(signed char)6] [i_2] = ((/* implicit */unsigned short) arr_35 [i_10] [i_10 - 3] [i_10] [i_10] [2LL] [i_10 + 4]);
                        arr_56 [(unsigned char)0] [i_9] [i_3] [i_3] [i_2] [(unsigned char)0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)10159)) && (((/* implicit */_Bool) (short)(-32767 - 1)))));
                    }
                }
                for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    arr_60 [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [(short)9] [i_3] [i_11] [i_11] [i_2] [(short)9])) || (((/* implicit */_Bool) arr_58 [i_2] [i_2] [i_2]))))), (arr_58 [i_2] [i_3] [i_11])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_12 = 1; i_12 < 19; i_12 += 2) 
                    {
                        arr_64 [i_2] [i_11] [i_2] [i_12 - 1] [i_3] = ((/* implicit */unsigned short) arr_59 [(_Bool)1] [i_12 - 1] [(signed char)16] [i_12 - 1]);
                        arr_65 [i_2] [i_2] [i_2] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_12 + 1] [i_2] [i_11] [i_2])) && (((/* implicit */_Bool) arr_24 [i_11] [i_11] [i_11] [i_2] [i_2] [i_11]))));
                        arr_66 [i_2] [i_2] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) (short)10127)) > (((((/* implicit */_Bool) arr_63 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_37 [i_2] [i_3])) : (((/* implicit */int) (short)-17584))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        arr_70 [i_2] [i_2] [i_3] [i_11] [i_11] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10116))) + (arr_12 [i_11] [i_11])))) ? (((((/* implicit */_Bool) arr_46 [i_2] [i_2] [i_2])) ? (arr_25 [i_3] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (short)-10135))))) : (((arr_24 [i_2] [i_2] [i_2] [i_2] [i_11] [i_13]) / (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_2] [i_3] [i_11] [i_13])))))));
                        arr_71 [i_2] [i_2] [i_11] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_2])) << (((((/* implicit */int) arr_33 [i_2])) - (15724)))));
                        arr_72 [i_2] [i_2] [i_3] [i_11] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_3] [i_11] [i_3] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12419)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_2] [i_3] [i_2] [i_3]))) : (arr_51 [i_2] [i_3] [5ULL] [i_13] [i_13]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        arr_75 [(_Bool)1] [(_Bool)1] [i_2] = ((((/* implicit */_Bool) (short)-10135)) ? (((/* implicit */int) arr_37 [(signed char)6] [i_3])) : (((/* implicit */int) arr_33 [i_2])));
                        arr_76 [i_2] [(_Bool)1] [i_3] [i_11] [i_14] [i_14] = ((/* implicit */long long int) (signed char)-43);
                    }
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        arr_79 [10] [i_2] [i_11] [i_11] [i_2] = ((/* implicit */unsigned short) arr_51 [i_15] [i_11] [i_3] [i_2] [i_2]);
                        arr_80 [i_2] = ((/* implicit */_Bool) arr_51 [i_2] [i_3] [i_11] [i_15] [(signed char)2]);
                        arr_81 [i_15] [(unsigned short)0] [i_3] [(unsigned short)0] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)10158)) / (745898349))) + (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)49)), ((short)10116)))) ? (arr_34 [i_2] [16LL] [i_2] [14LL]) : (((/* implicit */int) (signed char)0))))));
                    }
                }
                arr_82 [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_2] [i_2] [i_3] [i_3] [i_2] [i_3])) && (((/* implicit */_Bool) arr_36 [i_2] [i_2] [i_2] [i_2])))))))) ? (((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_2] [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_2]))) : (min((((/* implicit */long long int) (short)-10121)), (arr_24 [i_2] [i_2] [i_3] [i_2] [i_2] [i_3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_2] [i_3] [i_3])) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)25)) && (((/* implicit */_Bool) (unsigned short)54532)))))))));
                arr_83 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_2] [i_2]), (arr_15 [i_2] [i_3]))))) != (((((/* implicit */_Bool) (short)-10151)) ? (arr_59 [i_2] [i_2] [i_2] [i_2]) : (arr_12 [i_2] [i_3])))));
            }
        } 
    } 
}
