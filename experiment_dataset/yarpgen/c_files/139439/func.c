/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139439
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
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1))), ((+(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_9)), (5))))))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)97))));
                                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned char)158)))) ? (4095478010U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                                arr_15 [i_4] [i_2] [i_0] [i_0] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_7 [i_0 + 1] [i_1] [i_2] [i_3])))) ? ((~(arr_7 [i_0 + 1] [(unsigned short)4] [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) != (((/* implicit */long long int) arr_7 [i_0 - 3] [(unsigned char)2] [i_4] [i_3]))))))));
                                arr_16 [i_0] [i_0] [i_0] [8] [8] [i_0] = ((/* implicit */long long int) max((((unsigned int) (short)5061)), (((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)90))))), (((short) (unsigned char)158)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 7; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */int) arr_2 [i_0]);
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_12 [i_0] [6ULL] [i_2] [i_2])))))) ? ((-(arr_17 [i_2]))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) arr_0 [i_0 - 4])))), (((/* implicit */int) var_7))))))))));
                        arr_19 [i_0] [i_5] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
                        arr_20 [i_0 + 1] [i_0 + 2] [i_0] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)50285)) / (((/* implicit */int) (unsigned char)143))))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) var_7)))));
                    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_11))) <= (((/* implicit */int) (unsigned char)255))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 1; i_7 < 7; i_7 += 1) 
                    {
                        var_19 *= ((/* implicit */unsigned int) (~((~(var_11)))));
                        var_20 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4849718019777516947LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3668809914U)));
                    }
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) (signed char)45)))) : (((/* implicit */int) (!(var_6))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_4 [i_0 + 1] [i_1] [i_8])))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((min((((((/* implicit */int) var_6)) >> (((((/* implicit */int) (unsigned char)255)) - (230))))), ((+(((/* implicit */int) (unsigned char)158)))))), ((+((-(((/* implicit */int) arr_1 [i_0] [i_0 - 4])))))))))));
                }
                for (unsigned char i_9 = 2; i_9 < 7; i_9 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (5991552888201573193LL))))));
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) (_Bool)1);
                        var_27 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (arr_25 [i_0] [i_0] [i_9 + 2] [i_10])))) ? (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967288U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        arr_35 [i_0] [i_0] = ((/* implicit */unsigned short) min((min(((+(((/* implicit */int) var_3)))), (var_0))), (max((arr_3 [i_0] [i_1]), (arr_3 [i_0 + 2] [i_0 + 2])))));
                    }
                    for (short i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((unsigned short) (_Bool)0));
                            var_29 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)120)));
                            var_30 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (signed char i_13 = 1; i_13 < 7; i_13 += 2) 
                        {
                            var_31 *= ((/* implicit */unsigned int) arr_28 [i_11] [i_1] [i_1]);
                            arr_45 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((unsigned long long int) arr_12 [i_0] [i_1] [i_11] [i_13 + 2])) : (max((((/* implicit */unsigned long long int) -4065828399999641203LL)), (0ULL))))) >= (((/* implicit */unsigned long long int) ((long long int) var_7)))));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(3569754640U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)143)), ((unsigned short)27560))))))) ? (((/* implicit */int) ((arr_36 [i_0 - 1] [i_0 - 4] [i_0] [i_9 - 1] [i_13 + 1] [i_13 + 2]) != (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_9 + 3] [i_9 + 3] [i_0 - 2] [i_13 - 1]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)0)), (((unsigned short) var_7)))))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            arr_49 [i_0] [i_1] [i_9 + 3] [(short)8] [(short)5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)98)) : (var_0)))))));
                            var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_14] [i_1] [(short)2]))) : (204809466U)));
                            arr_50 [i_0] [i_0] [i_0] [i_11] [i_14] [i_11] [(short)4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_9 + 1] [i_0 + 2] [i_0])) - (((/* implicit */int) arr_9 [i_9 + 3] [i_0 - 1] [i_0 + 2]))))), (min((var_8), (((/* implicit */long long int) var_0))))));
                            var_34 = ((/* implicit */unsigned short) var_2);
                            var_35 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_14 [i_0] [0LL] [i_9 + 3] [i_11] [i_11] [i_0]))))) ? (((/* implicit */int) ((unsigned char) arr_30 [i_0]))) : ((-(((/* implicit */int) var_5)))))) >> (((((/* implicit */int) ((unsigned char) var_4))) - (144)))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            arr_53 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 3]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))) ? (min((((/* implicit */long long int) var_12)), (max((((/* implicit */long long int) (_Bool)1)), (var_8))))) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (0))))));
                            arr_54 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (+(arr_25 [(unsigned char)9] [(signed char)0] [i_11] [(signed char)0])))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12)))))));
                        }
                        arr_55 [i_0] [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_29 [i_0] [i_9] [i_11]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) var_2))))) : (arr_46 [i_0 - 1])))));
                    }
                    var_36 = ((/* implicit */unsigned long long int) (~((~((~(arr_36 [i_0] [i_0] [i_0] [i_9] [i_9] [i_0 - 1])))))));
                }
                arr_56 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) (signed char)-53))))) : (min((arr_29 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) var_3)))))), (min((((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)4] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_48 [i_0] [i_0] [i_0 - 2] [i_1] [i_1] [i_0 - 2] [i_1]))), (((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))) : (1890802541U)))))));
                arr_57 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), (var_6)))) < ((~(((/* implicit */int) (unsigned short)960))))))) / (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1] [(unsigned char)9])) ? (arr_43 [i_0 - 1] [i_1] [i_0] [i_1] [i_0 - 4] [i_1]) : ((~(((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
    var_37 = ((/* implicit */int) var_7);
    var_38 = ((/* implicit */short) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (2337864944U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (min((var_8), (((/* implicit */long long int) var_12))))))));
}
