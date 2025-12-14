/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174703
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1]))) : (18446744073709551615ULL))))))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0] [i_0 + 1])) + (2147483647))) << (((((((unsigned int) var_4)) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))))) - (186U)))));
            var_14 *= ((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_1]);
        }
        for (int i_2 = 3; i_2 < 23; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned char)3))))))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_0 + 2] [i_0 + 3]), (arr_7 [i_0 - 1] [i_0 + 3]))))) <= (((long long int) arr_7 [i_0 + 3] [i_0 - 1]))));
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (arr_4 [i_0] [i_0]))))));
            arr_8 [i_0] [i_0] [i_0] = ((var_4) << (((((((/* implicit */_Bool) (unsigned char)6)) ? (min((arr_3 [i_2]), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) arr_6 [i_2 - 1] [i_2 - 3])))) - (9554163804261255596ULL))));
        }
        for (long long int i_3 = 4; i_3 < 24; i_3 += 3) 
        {
            var_18 *= max((arr_5 [i_0] [i_0 + 3] [i_0]), (arr_5 [i_0] [i_0 - 2] [i_0]));
            var_19 = ((/* implicit */long long int) (short)-12270);
        }
        for (unsigned short i_4 = 4; i_4 < 23; i_4 += 4) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_4 - 1])) - (((/* implicit */int) var_7))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                var_21 = ((/* implicit */int) arr_10 [i_0 + 3]);
                arr_18 [i_5] [i_0] [i_5] = ((/* implicit */unsigned int) ((max((arr_11 [i_0 + 2]), (((/* implicit */unsigned long long int) (short)-12259)))) != (arr_11 [i_5])));
            }
        }
        /* LoopNest 3 */
        for (unsigned short i_6 = 2; i_6 < 24; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((unsigned char) arr_17 [i_0]));
                        arr_27 [i_0 - 2] [i_0 - 2] [i_7] [i_8 + 1] [i_0 - 2] [i_8] = ((/* implicit */unsigned long long int) (-(0LL)));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_6))));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_8 + 1] [i_7] [i_6 - 1])) ? (((long long int) arr_21 [i_7] [i_7] [i_7])) : (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5463))) : (-1LL)))))) : (((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) arr_11 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [i_6] [i_6])), (var_9)))))))));
                            arr_30 [i_0] [i_7] [i_7] [i_8 + 1] [i_9] [i_9] [i_9] = ((/* implicit */int) (_Bool)1);
                        }
                        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_23 [i_0] [i_0 - 1] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_23 [i_0] [i_0] [i_0 + 2]))), (((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                            var_26 = ((/* implicit */unsigned long long int) arr_23 [i_6 - 1] [i_8 + 1] [i_10]);
                            var_27 += ((/* implicit */unsigned short) ((arr_9 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_0 - 1]))))));
                        }
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6 - 2])) ? (((/* implicit */int) (!(arr_28 [i_6])))) : (((/* implicit */int) (unsigned short)44356))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10))))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */int) (unsigned char)12);
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) arr_13 [i_0]);
    }
    for (long long int i_11 = 3; i_11 < 9; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-3169886103954249221LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_33 [i_11 - 1] [i_11] [i_12] [i_13] [i_14] [i_14] [i_15]) : (((/* implicit */unsigned int) var_0))))))))) : (arr_43 [i_15] [i_13] [i_13] [i_14])));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (unsigned char)0))));
                        }
                        for (long long int i_16 = 0; i_16 < 10; i_16 += 1) /* same iter space */
                        {
                            var_32 *= ((/* implicit */unsigned char) ((unsigned long long int) arr_24 [i_11] [i_11] [i_11] [i_11]));
                            arr_50 [i_11 + 1] [i_12] [i_13] [i_13] [i_13] = arr_32 [i_11] [i_11] [i_11] [i_11];
                        }
                        for (long long int i_17 = 0; i_17 < 10; i_17 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_14] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_13] [i_12])) && (((/* implicit */_Bool) arr_22 [i_11] [i_11 + 1] [i_11 + 1])))))) : (arr_17 [i_11 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) == (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_0 [i_11] [i_13])) + (8375)))))))))))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((long long int) arr_17 [i_17])))));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8881))) : (5673017936776211490LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((961104227483639629LL) < (((/* implicit */long long int) 410497722U)))))) : (arr_40 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_17])));
                        }
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (+(((long long int) arr_4 [i_11 + 1] [i_14])))))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_11 - 2]))))) ? (((((/* implicit */_Bool) arr_37 [i_13])) ? (((/* implicit */int) arr_37 [i_12 - 1])) : (((/* implicit */int) arr_37 [i_11])))) : (((((/* implicit */_Bool) arr_37 [i_11 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_37 [i_12 - 1])))))))));
                        var_38 = ((/* implicit */int) ((unsigned int) var_3));
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            var_39 += ((/* implicit */_Bool) min(((~(((/* implicit */int) (short)-8891)))), (((((/* implicit */_Bool) ((signed char) var_8))) ? ((~(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) var_9))))));
                            arr_58 [i_19] [i_19] [i_13] [i_18] [i_11 - 2] [i_19] [i_18] = ((/* implicit */_Bool) min((min((((924265703430613629LL) >> (((((/* implicit */int) arr_37 [i_11])) - (85))))), (((/* implicit */long long int) arr_52 [i_13] [i_13] [i_13] [i_11] [i_11 - 2] [i_11 - 1] [i_11])))), (((/* implicit */long long int) arr_13 [i_18]))));
                        }
                        for (unsigned int i_20 = 2; i_20 < 9; i_20 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_5) ? (var_0) : (((/* implicit */int) arr_14 [i_11 - 2] [i_13] [i_13]))))), (var_10)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_46 [i_13])) ? (((/* implicit */int) (short)12263)) : (((/* implicit */int) (unsigned char)244)))), (((((/* implicit */_Bool) arr_59 [i_11] [i_12] [i_13] [i_13] [i_18] [i_18])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)55))))))) : (((10555011378012400625ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_61 [i_11] [i_11] [i_11] [i_11 - 1] = ((/* implicit */unsigned short) var_1);
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_20])) ? (((((/* implicit */_Bool) ((long long int) -1460885383))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_6)) ? (arr_57 [i_11 - 2] [i_18] [i_11 - 2] [i_18] [i_20] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_11 - 2] [i_13]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_11] [i_12] [i_20 + 1]))) : (3856805013291270393LL)))) ? (((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)14721)))) : (((/* implicit */int) var_8)))))));
                        }
                        arr_62 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_55 [i_18] [i_11] [i_12 - 1] [i_11])) & (-836252326)));
                    }
                    arr_63 [i_11] [i_11] [i_13] = ((/* implicit */int) arr_29 [i_11] [i_11] [i_11 - 3] [i_11 + 1] [i_12 - 1] [i_12 - 1]);
                }
            } 
        } 
        var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) var_10))));
    }
    var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) var_11))));
    /* LoopSeq 2 */
    for (long long int i_21 = 1; i_21 < 19; i_21 += 4) /* same iter space */
    {
        var_44 &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 264221045U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_21 - 1] [i_21 + 1] [i_21]))) : (var_10)))) & (((((/* implicit */_Bool) (unsigned char)248)) ? (arr_32 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21]) : (((/* implicit */unsigned long long int) 2295041693U)))))));
        var_45 = ((unsigned short) 4194176);
    }
    for (long long int i_22 = 1; i_22 < 19; i_22 += 4) /* same iter space */
    {
        arr_70 [i_22 - 1] [i_22 - 1] = ((/* implicit */unsigned char) max((((/* implicit */short) min((arr_16 [i_22 - 1] [i_22 + 1]), (arr_1 [i_22 - 1] [i_22 + 1])))), (max(((short)465), (((/* implicit */short) arr_1 [i_22 - 1] [i_22 + 1]))))));
        var_46 = ((/* implicit */unsigned int) min((var_46), (min((((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_8))), (((1460885383) % (((/* implicit */int) var_6))))))), (((((1460885383) >= (((/* implicit */int) (unsigned char)12)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_22] [i_22] [i_22] [i_22] [i_22]))) - (var_10))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_22] [i_22])))))))))));
    }
}
