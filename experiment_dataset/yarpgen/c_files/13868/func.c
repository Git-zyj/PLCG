/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13868
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
    var_12 = var_9;
    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (unsigned short)26468)))));
    var_14 = ((/* implicit */int) 18446744073709551615ULL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                            {
                                var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)21] [i_0 - 2])) ? ((+(arr_2 [i_4] [i_0 - 1]))) : ((+(arr_2 [i_3] [i_2])))));
                                arr_16 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((arr_5 [i_3] [i_1]) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)39068))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_17 [i_5] [8LL]))));
                                arr_20 [i_0 - 2] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_5 [i_0 - 1] [i_1]))))) : (3ULL)));
                                arr_21 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [18U] = ((/* implicit */long long int) 0U);
                                arr_22 [i_0] [i_1] [i_1] [i_0] [i_0] [i_5] |= ((/* implicit */unsigned int) ((((_Bool) ((-1877783465650140524LL) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) ((5030408960565653667LL) | (arr_18 [i_2] [i_2] [i_5] [i_3] [i_5] [i_2] [i_5])))) ? (1ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)222)))))))));
                            }
                            /* LoopSeq 3 */
                            for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 1) 
                            {
                                arr_25 [i_2] [i_1] [i_3] [i_6] [(unsigned short)13] = ((/* implicit */_Bool) 507593849);
                                arr_26 [i_1] [i_1] [i_2] [i_2] [(_Bool)1] = ((((/* implicit */_Bool) ((((4294426349U) <= (var_0))) ? ((-(((/* implicit */int) arr_10 [i_1] [i_1] [(unsigned char)1] [i_2] [(unsigned char)1] [i_1])))) : (((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_6]))))))) ? ((+(var_11))) : (((/* implicit */unsigned long long int) 4294426348U)));
                                arr_27 [i_0 - 1] [i_1] [i_2] [i_3] [i_0] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) 2556340201U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (4224273474U))), (((/* implicit */unsigned int) arr_4 [(signed char)15] [i_1] [i_2]))));
                                arr_28 [i_0 - 2] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_19 [i_3] [i_3])) ? (((/* implicit */int) ((18U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)127)))))) : (((/* implicit */int) arr_11 [21U] [i_1] [i_2]))))));
                                var_17 *= ((/* implicit */signed char) arr_24 [i_0 - 1] [i_1] [i_0 - 2] [i_3] [i_2] [i_2]);
                            }
                            for (int i_7 = 1; i_7 < 23; i_7 += 2) /* same iter space */
                            {
                                arr_32 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1752884669)))))) > (max((((/* implicit */long long int) 596133539U)), (((((/* implicit */_Bool) var_9)) ? (-5497698811452213094LL) : (arr_8 [i_1]))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned char) arr_5 [i_0] [i_0])), ((unsigned char)75))))) ? (((/* implicit */long long int) var_3)) : (max((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (var_4) : (((/* implicit */long long int) arr_1 [i_3] [i_1])))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_11 [i_2] [i_1] [i_1])), (arr_12 [i_0] [i_7] [i_2] [i_3] [i_7 - 1])))))))))));
                                arr_33 [(unsigned char)3] [i_1] [(unsigned char)3] [i_3] [i_1] = ((/* implicit */unsigned int) max(((~(((-11) & (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((unsigned short) arr_5 [11ULL] [i_1])))));
                            }
                            /* vectorizable */
                            for (int i_8 = 1; i_8 < 23; i_8 += 2) /* same iter space */
                            {
                                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_3] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 2] [i_1] [i_0 - 2] [i_3] [i_8 + 2]))) : (0LL)));
                                arr_37 [i_0] [i_1] [i_2] [i_3] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_4 [i_8 - 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0] [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8]))));
                                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_8 + 2] [i_0] [i_8 + 2] [i_3] [i_0 - 1])) || (((/* implicit */_Bool) arr_31 [i_8 - 1] [i_0] [i_0] [i_8 - 1] [i_0 + 1]))));
                                var_21 ^= ((/* implicit */long long int) ((((2445582733U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (+(0))))));
                                arr_38 [i_1] [i_2] [i_2] [i_1] [3LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)24198))));
                            }
                            /* LoopSeq 1 */
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                arr_41 [7LL] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)43479)))))));
                                var_22 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((_Bool) 0)) ? (max((var_4), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((arr_12 [4LL] [i_1] [4LL] [4LL] [i_9]) - (709263983U)))))))))));
                                arr_42 [i_1] [i_1] [i_1] [i_1] [i_9] [i_1] [(_Bool)1] = min((max((((/* implicit */long long int) (+(arr_35 [i_9] [i_9] [i_9] [i_9] [7ULL])))), (((((/* implicit */_Bool) var_10)) ? (4398046511103LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [(_Bool)1] [(_Bool)1] [(signed char)21]))))))), (min((max((((/* implicit */long long int) -1856557792)), (-7398656794103248634LL))), ((+(arr_18 [i_0 + 1] [21U] [i_1] [i_1] [i_0 + 1] [i_0] [i_2]))))));
                                arr_43 [i_0 - 2] [i_1] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1460486284344126217ULL)) ? (var_0) : (((/* implicit */unsigned int) 0))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 22; i_10 += 3) 
                {
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        {
                            arr_50 [i_11] [i_1] [(unsigned char)2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((arr_2 [i_0] [i_0 - 1]) / (-1787228675)))));
                            /* LoopSeq 2 */
                            for (signed char i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                            {
                                arr_54 [i_1] [i_1] [i_10 - 1] [i_1] [i_0] = min((((var_1) + (arr_1 [i_10 - 1] [i_0 + 1]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_51 [i_1] [i_1] [i_10 + 1] [i_11] [i_0 - 2] [i_1] [(unsigned short)8])), (min((var_6), (((/* implicit */unsigned short) (unsigned char)130))))))));
                                var_23 += ((/* implicit */long long int) arr_23 [i_12] [i_11] [(short)1] [i_1] [i_10 + 2] [i_1] [i_0 + 1]);
                            }
                            for (signed char i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) -5428803047193108686LL)) ? (((arr_17 [i_0] [i_1]) ^ (arr_15 [i_0] [i_1] [i_0] [i_11] [(signed char)3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)168))))) || (((/* implicit */_Bool) (-(var_11))))))))));
                                arr_57 [i_13] [i_1] [i_10 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)47)) % (((/* implicit */int) (_Bool)1))));
                            }
                        }
                    } 
                } 
                arr_58 [i_0] [i_1] [3U] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_45 [i_0 + 1] [i_1] [i_1] [i_0])) <= (((/* implicit */int) (unsigned char)224)))) ? (arr_30 [i_0] [i_0] [(unsigned char)15] [(short)12] [6U] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                arr_59 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_47 [i_1] [i_1] [i_0 + 1] [i_0 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_0] [(unsigned short)24] [i_0 + 1] [i_0 + 1])) << (((((/* implicit */int) arr_47 [i_1] [i_1] [i_0 - 1] [i_0 - 1])) - (44798))))))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 2; i_15 < 23; i_15 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_36 [i_15 - 2])) ? (((/* implicit */int) arr_36 [i_15 + 1])) : (((/* implicit */int) (unsigned char)224)))))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_16 = 0; i_16 < 25; i_16 += 4) 
                            {
                                var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_23 [i_16] [i_1] [24] [i_1] [i_16] [i_16] [i_15])) : (((/* implicit */int) (unsigned short)9288))))) <= (((long long int) 0ULL))))), (max((((((/* implicit */_Bool) var_3)) ? (var_1) : (var_1))), (((/* implicit */unsigned int) min(((unsigned char)12), (((/* implicit */unsigned char) var_8)))))))));
                                arr_70 [i_14] [i_14] |= ((/* implicit */signed char) var_3);
                            }
                            for (unsigned int i_17 = 0; i_17 < 25; i_17 += 3) 
                            {
                                arr_74 [i_17] [i_15] &= ((/* implicit */unsigned long long int) ((long long int) arr_60 [i_0] [i_1]));
                                arr_75 [i_0] [i_0 - 2] [i_1] [i_14] [i_14] [i_15] [i_17] = ((/* implicit */unsigned char) (signed char)-101);
                                arr_76 [i_17] [i_15 - 2] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_40 [i_0] [i_0] [i_1] [i_1] [i_15] [i_17]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 += ((/* implicit */unsigned short) ((((/* implicit */long long int) var_3)) ^ (((long long int) ((((/* implicit */_Bool) 1240042134U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)160)))))));
}
