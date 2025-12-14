/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123096
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
    var_18 = var_14;
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_15))));
                    var_20 &= ((/* implicit */signed char) arr_0 [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_2 [i_0 - 1] [i_0 - 2] [i_0])), ((unsigned char)183)))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (var_0)))) ? (arr_7 [19U] [i_2] [i_2] [i_2 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (unsigned char)162))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((short) var_7)), (((/* implicit */short) ((signed char) var_9))))))) : (((16804418910195740106ULL) | (((/* implicit */unsigned long long int) (~(933489452U))))))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : (var_2)))) : (var_7)))) ? (min((((/* implicit */unsigned int) ((_Bool) var_0))), (min((2277076757U), (((/* implicit */unsigned int) (unsigned char)73)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22444))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) 1091525170002120196LL);
                        var_25 = ((/* implicit */unsigned long long int) (unsigned short)37449);
                        var_26 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_2] [i_4] [i_4]);
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 66846720)), (min((((/* implicit */long long int) var_2)), (var_16)))));
                        var_28 += ((/* implicit */int) (!(((/* implicit */_Bool) (-(((int) 36028792723996672ULL)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22444))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_3 [i_6]))))) : (var_16)));
        var_30 = ((/* implicit */unsigned char) var_10);
    }
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 2; i_8 < 17; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                {
                    var_31 *= ((/* implicit */unsigned short) ((int) var_10));
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) arr_9 [i_8] [i_8 + 1]))));
                }
            } 
        } 
        var_33 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6195))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))));
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_11 = 2; i_11 < 15; i_11 += 3) 
            {
                var_34 &= ((/* implicit */unsigned int) arr_3 [i_10]);
                arr_37 [i_7] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31624))) & (((unsigned int) arr_34 [i_10] [i_10] [i_10] [i_11 + 2]))));
            }
            /* LoopNest 3 */
            for (unsigned short i_12 = 3; i_12 < 17; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_47 [i_7] [i_7] [i_7] [i_13] [i_14] [i_10] = ((/* implicit */_Bool) min((((var_5) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((arr_20 [i_7] [i_10]), (((/* implicit */unsigned short) (unsigned char)152))))))), (((/* implicit */int) var_12))));
                            arr_48 [i_7] [i_13] [i_10] = min((((/* implicit */unsigned long long int) ((max((arr_12 [i_14] [i_14] [i_14] [i_14]), (4294967293U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_7] [i_13] [i_12] [i_10] [i_7]))))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [(unsigned char)9] [i_10] [(unsigned char)9] [i_13] [i_13])) ^ (((/* implicit */int) var_8))))) | (16804418910195740106ULL))));
                            arr_49 [i_10] [i_14] = ((/* implicit */unsigned short) ((1091525170002120203LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133)))));
                            var_35 = ((/* implicit */_Bool) 3361477843U);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)44581)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-103519514746302608LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18524)))))));
                var_37 *= (!(((/* implicit */_Bool) (unsigned short)40846)));
            }
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_38 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22959))) : (min((((/* implicit */unsigned int) (unsigned short)20954)), (var_6)))));
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 3; i_17 < 16; i_17 += 4) 
            {
                for (unsigned short i_18 = 0; i_18 < 18; i_18 += 1) 
                {
                    {
                        arr_62 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (3067162334U)));
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) (short)7821)), (arr_59 [i_18]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_7] [(signed char)6] [(unsigned short)10])) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_51 [i_7] [i_16] [0] [i_18])))))))) ? (min(((-2147483647 - 1)), (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (short)-19844)) : (-1359643714))))) : (((((/* implicit */_Bool) (unsigned short)34449)) ? (((/* implicit */int) arr_54 [i_17 + 2])) : (((/* implicit */int) arr_32 [i_17] [i_17] [6LL]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_19 = 1; i_19 < 17; i_19 += 3) 
                        {
                            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) -1580569186)) ? (((/* implicit */unsigned long long int) 3321449779U)) : (216172782113783808ULL)));
                            var_41 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -6131191932614791993LL)) ? (-6903117814177847718LL) : (((/* implicit */long long int) 1580569186)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned short)46656)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                            var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) arr_34 [i_19 - 1] [(short)10] [(short)10] [i_16])))));
                            arr_65 [(_Bool)1] [i_16] [(_Bool)1] [i_18] [11] [i_19] = ((/* implicit */signed char) var_17);
                        }
                        for (unsigned short i_20 = 0; i_20 < 18; i_20 += 1) 
                        {
                            var_43 = ((((/* implicit */int) (short)3584)) | (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_15)) ? (1078562235) : (((/* implicit */int) (short)30244)))) : (((/* implicit */int) arr_46 [i_17 + 2] [i_17] [i_17 - 3] [i_17 + 2] [i_17 - 1])))));
                            var_44 = ((/* implicit */signed char) arr_28 [i_7]);
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-6903117814177847743LL)))), (-5859194551754497508LL))) : (((/* implicit */long long int) min((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)88)))), (((/* implicit */int) var_15)))))));
                        }
                    }
                } 
            } 
            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)97)) + (var_17)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) arr_21 [i_7]))));
            var_47 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65280)) : (min((0), (-1580569179)))))), (var_0)));
        }
    }
    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 1) 
        {
            for (unsigned char i_23 = 0; i_23 < 11; i_23 += 3) 
            {
                {
                    arr_76 [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) ((_Bool) min((arr_75 [i_21]), (((/* implicit */int) var_10)))));
                    var_48 = ((/* implicit */int) arr_35 [i_21 - 1]);
                    /* LoopNest 2 */
                    for (signed char i_24 = 0; i_24 < 11; i_24 += 1) 
                    {
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */short) min((((long long int) var_7)), (((/* implicit */long long int) var_14))));
                                var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16419))) : (arr_35 [i_22])))) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)-18534))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36512))) | (18446744073709551599ULL)))))) ? (((/* implicit */long long int) max((((unsigned int) 16ULL)), (((/* implicit */unsigned int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) : (-3092241929461288872LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_51 = ((/* implicit */long long int) min((((/* implicit */signed char) ((((((/* implicit */_Bool) arr_46 [i_21] [(unsigned short)7] [(unsigned char)7] [i_21] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (6709852477641067110ULL))) > (((/* implicit */unsigned long long int) var_2))))), (arr_52 [i_21] [i_21] [i_21])));
    }
}
