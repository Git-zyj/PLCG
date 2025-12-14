/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129726
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
    var_10 -= ((/* implicit */short) ((4095U) << (((349833360) - (349833333)))));
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -349833333))));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)245)), (max((((/* implicit */int) var_0)), (-1068617066))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    arr_10 [i_0] = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (16069219581504210076ULL) : (((/* implicit */unsigned long long int) 3797304986U))))))));
                    var_13 = ((/* implicit */unsigned int) var_1);
                    arr_11 [i_0] [i_1] [i_1] = -1163085345;
                }
                for (long long int i_3 = 3; i_3 < 19; i_3 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_16 [i_0] [i_3] [i_3 + 1] [i_3 + 2] [i_3]) + (9223372036854775807LL))) << (((arr_13 [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3 + 2]) - (7933412888306615720ULL)))))) ? (((/* implicit */unsigned long long int) var_8)) : (arr_13 [i_0] [i_1] [i_3] [i_4])));
                        var_15 = ((/* implicit */unsigned int) (~(-1315738063)));
                        arr_18 [i_0] [i_0] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_1] [i_0]), (arr_9 [i_0] [i_1] [i_3 + 3])))) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_3 - 2] [i_1] [i_4])) : (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [0] [i_4])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_3 - 3]))) / (16069219581504210063ULL))) : (max((11733742719886652471ULL), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)0] [i_4]))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_17 [i_0] [i_1] [i_1]))));
                            var_17 = ((/* implicit */short) ((((((/* implicit */int) arr_5 [i_0] [i_0] [i_3])) + (2147483647))) << (((((2377524492205341543ULL) << (((1793458491U) - (1793458452U))))) - (6367442810508935168ULL)))));
                            arr_21 [13U] [i_1] [i_4] [i_1] [13U] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3 - 3]))));
                            var_18 ^= ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
                            var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_5] [i_0] [i_4] [i_3 - 1])) ? (arr_16 [i_1] [i_1] [(unsigned char)8] [i_4] [i_3 - 1]) : (arr_16 [i_0] [i_1] [i_1] [i_3] [i_3 - 1])));
                        }
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_20 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (((((var_3) * (var_5))) << (((arr_8 [i_0] [i_3 + 2] [(_Bool)1]) + (3543697139228584713LL)))))));
                            arr_25 [i_6] [i_1] [i_6] [i_6] [i_6] [i_3 + 2] [i_4] = ((/* implicit */short) ((((/* implicit */int) var_6)) << (((((/* implicit */int) max((((/* implicit */short) arr_0 [(_Bool)1])), (arr_24 [i_0] [i_1] [i_3 - 1] [i_3] [i_3] [i_4] [i_6])))) - (2503)))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                    {
                        arr_28 [i_0] [i_1] [i_1] [i_3 - 1] [i_7] [i_7] = ((/* implicit */_Bool) (+(var_5)));
                        arr_29 [i_0] [i_1] [i_1] [i_3] [i_7] = ((/* implicit */unsigned long long int) ((int) ((((min((-349833326), (-1466325657))) + (2147483647))) << (((((((/* implicit */_Bool) arr_4 [i_7] [i_3 - 3])) ? (((/* implicit */long long int) 4154510214U)) : (arr_8 [i_0] [i_1] [i_7]))) - (4154510214LL))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_3 + 2] [6ULL] [19LL] [i_8] [i_0] [i_3 + 2] [i_0])) ? ((-((~(((/* implicit */int) (unsigned char)5)))))) : (((((min((var_8), (((/* implicit */int) var_9)))) + (2147483647))) << (((((var_8) + (768796281))) - (18))))))))));
                        arr_33 [i_0] [i_1] [12U] [i_0] = ((/* implicit */long long int) ((unsigned long long int) 2147483647));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4716191136864553954ULL) : (((/* implicit */unsigned long long int) 2465655717U))));
                        arr_34 [i_0] [i_1] [i_0] [i_8] [3ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1093453818) << (((9992503777780621282ULL) - (9992503777780621282ULL)))))) ? ((~(((var_2) << (((var_5) - (3534536135U))))))) : (((((((arr_2 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (6))))) << (((arr_6 [i_0] [i_0]) - (16528245853061989558ULL)))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_23 ^= ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_9] [i_1] [i_9] [i_9])) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (signed char)-87)))))) << (((((/* implicit */int) var_7)) - (13439)))));
                            var_24 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_17 [i_3 + 1] [i_9] [i_10])) << (((arr_35 [i_3 - 1] [i_3 + 3] [i_3 + 2] [i_3 - 3] [i_3 + 1] [i_3]) - (387769559))))), (((((/* implicit */_Bool) arr_9 [i_3 + 3] [i_3 + 3] [i_3 - 2])) ? (((/* implicit */int) arr_17 [i_3 + 3] [i_3] [i_10])) : (((/* implicit */int) arr_17 [i_3 + 3] [i_3 + 3] [i_3 + 3]))))));
                        }
                        for (int i_11 = 0; i_11 < 22; i_11 += 3) 
                        {
                            arr_43 [i_0] [i_11] [1U] [i_11] [i_11] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_9 [i_9] [i_3 - 2] [i_1])) ? (2185030849377179751LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))))), (((/* implicit */long long int) (short)32760))));
                            arr_44 [i_0] [i_0] [i_11] [i_11] [i_11] = ((/* implicit */short) (_Bool)1);
                            var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_7 [i_11])) ? (((/* implicit */unsigned int) arr_35 [i_3] [i_1] [i_3] [0] [i_11] [i_3])) : (var_3))) : ((~(var_3)))))));
                            var_26 -= max((arr_19 [i_3 - 3] [i_3 + 1] [i_3 - 3] [i_3 + 3]), (min((var_0), (arr_19 [i_3 - 1] [i_3 - 3] [i_3 + 2] [i_3 - 1]))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_8)))))) ? (((((/* implicit */_Bool) arr_17 [i_3] [i_3 + 2] [i_3])) ? (((/* implicit */long long int) (~(var_5)))) : (max((4861538038832877896LL), (((/* implicit */long long int) -557121793)))))) : (var_2)));
                        }
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            var_28 = ((unsigned int) ((((/* implicit */_Bool) arr_42 [i_0] [i_1] [i_3 + 3] [i_9] [i_12] [i_12] [i_0])) ? (arr_42 [i_0] [i_1] [i_3 + 1] [i_9] [i_12] [i_1] [(short)17]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196)))));
                            arr_47 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_3 - 2] [i_3 + 3] [i_3 + 1] [i_3] [i_3 + 2]))))) ? ((-(-349833354))) : (((/* implicit */int) ((unsigned char) (short)-7134)))));
                        }
                        /* LoopSeq 1 */
                        for (short i_13 = 1; i_13 < 20; i_13 += 2) 
                        {
                            var_29 ^= (((~((~(((/* implicit */int) arr_26 [i_9] [i_9] [i_3 - 3] [(unsigned char)21] [i_13 + 2] [(signed char)0])))))) << (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) << (((((((/* implicit */int) (unsigned char)5)) << (((((/* implicit */int) (short)18805)) - (18800))))) - (135))))));
                            arr_50 [i_0] [(_Bool)1] [2ULL] [i_9] [i_13] = ((/* implicit */int) var_3);
                        }
                    }
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)36636)) : (((/* implicit */int) (_Bool)1))));
                    var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((311520651U), (((/* implicit */unsigned int) (short)6359))))) ? ((+(((/* implicit */int) (short)29937)))) : (var_8)));
                    arr_51 [i_0] [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((arr_3 [i_0] [i_1]) << (max((((/* implicit */int) (_Bool)1)), (-349833360))))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [(unsigned char)21] [i_1] [i_1] [(short)18] [(unsigned char)21])) ? (arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-18807)) + (2147483647))) << (((3233343439947170715ULL) - (3233343439947170715ULL))))))))) ? ((-(max((var_8), (((/* implicit */int) (unsigned short)31660)))))) : (((/* implicit */int) var_7))));
                }
                var_33 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [7] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3))))) << (((max((min((((/* implicit */unsigned int) arr_38 [(short)9] [(short)9] [i_1] [i_1] [i_0])), (arr_20 [i_0] [i_1] [i_1] [i_1] [i_0]))), (((/* implicit */unsigned int) arr_0 [i_0])))) - (4294967187U)))));
            }
        } 
    } 
}
