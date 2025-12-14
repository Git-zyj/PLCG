/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145175
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
    var_18 = ((/* implicit */unsigned int) var_16);
    var_19 &= ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) ((var_8) >> (((/* implicit */int) var_12))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10))))));
                }
                var_22 += ((/* implicit */short) max((max((((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (max((var_13), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_9)))))));
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17)))) != (((/* implicit */int) max((var_6), (var_0))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_6))))) ? (var_15) : (((/* implicit */unsigned long long int) ((var_12) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                /* LoopNest 2 */
                for (long long int i_3 = 4; i_3 < 18; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_11)) : (var_16))) | (((/* implicit */unsigned long long int) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
                                arr_13 [i_0] [i_5] = ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((var_8) - (13248827910640610390ULL)))))) * (var_11));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) (unsigned short)16921)) << (((/* implicit */int) (_Bool)1)))))))));
                            }
                            arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((max((2305843008676823040ULL), (2305843008676823040ULL))) >= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_3)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_6 = 3; i_6 < 20; i_6 += 4) 
                {
                    var_25 *= ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((var_13), (((/* implicit */unsigned long long int) var_7)))))) == (((((/* implicit */unsigned long long int) 29360128U)) ^ (18446744073709551615ULL))));
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max((max((var_16), (min((((/* implicit */unsigned long long int) var_10)), (var_13))))), (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_5))))) : (max((((/* implicit */unsigned long long int) var_0)), (var_16))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_8))));
                                var_28 ^= ((/* implicit */long long int) ((((((((/* implicit */_Bool) 3391863935U)) ? (18014261070528512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (var_10)))))) - (max((max((((/* implicit */unsigned long long int) var_6)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
                                var_29 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) >= (var_3))), (var_12))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_16)))));
                                arr_23 [i_0] [i_7] [i_6 + 1] [i_7] [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((2ULL), (10140409231460046906ULL))), (((/* implicit */unsigned long long int) (signed char)-24))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_2))))) + (max((var_16), (((/* implicit */unsigned long long int) var_6)))))) : (((((var_13) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_12)))))) : (var_15)))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_2))))) : (((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 2; i_10 < 19; i_10 += 3) /* same iter space */
                        {
                            arr_31 [i_9] &= ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (unsigned short)43526)) : (((/* implicit */int) (_Bool)1))))) & (((var_8) + (var_16))))), (((/* implicit */unsigned long long int) ((max((var_11), (((/* implicit */unsigned int) var_1)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                            arr_32 [i_10] [i_1] [i_6 + 1] [i_9] [i_10 - 2] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) var_5))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_14))))));
                            var_31 = ((/* implicit */signed char) var_8);
                            var_32 = ((/* implicit */_Bool) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_15))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_0)), (var_1)))))));
                        }
                        for (short i_11 = 2; i_11 < 19; i_11 += 3) /* same iter space */
                        {
                            arr_35 [i_9] [i_11] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17))))), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) (unsigned char)3)) ? (8275703523171341821LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))))))));
                            var_33 = ((/* implicit */long long int) (((((((_Bool)1) ? (((/* implicit */int) (short)-4937)) : (((/* implicit */int) (short)-4937)))) + (2147483647))) >> (((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                            var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (var_16)))));
                        }
                        arr_36 [i_1 + 1] [8U] [(unsigned short)11] [i_9] [i_0] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-3))))), ((signed char)-35)))), (min((((/* implicit */int) max(((unsigned short)33169), (((/* implicit */unsigned short) (signed char)3))))), (((((/* implicit */int) (unsigned short)65522)) + (((/* implicit */int) (unsigned short)65524))))))));
                        var_35 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) | (var_13))), (max((var_13), (((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-4937))))))))));
                        arr_37 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) var_17)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))), (((var_10) - (var_11))))))));
                        arr_38 [i_0] [i_0] [i_6] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_13)))) ? (max((((/* implicit */unsigned int) (signed char)4)), (2221532664U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */short) var_0))))))))) ? (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (max((((/* implicit */unsigned long long int) var_4)), (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)28407)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_13 = 3; i_13 < 17; i_13 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned int) (((_Bool)1) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) - (18446744073709551601ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_12)))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11)))));
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */int) var_17)) >> (((((/* implicit */int) var_7)) - (31750))))))));
                            arr_49 [i_0] [i_0] [i_0] [i_12] [i_12] [i_0] [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_13)))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_41 ^= ((/* implicit */unsigned char) var_6);
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)33500)) / (((/* implicit */int) (unsigned char)209)))))));
                            arr_52 [i_0] [i_1] [i_12] [i_12] [i_15] = var_13;
                        }
                        /* LoopSeq 2 */
                        for (signed char i_16 = 0; i_16 < 21; i_16 += 3) 
                        {
                            var_43 = ((/* implicit */_Bool) min((var_43), (var_12)));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8)));
                            arr_55 [i_12] [i_1 - 1] [i_6] [i_12] [i_0] [i_6 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)14499)) ? (((/* implicit */int) (short)4956)) : (((/* implicit */int) (_Bool)0))));
                            arr_56 [i_12] [i_12] [i_12] [(unsigned short)15] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((var_10) - (3623286336U)))));
                        }
                        for (unsigned int i_17 = 2; i_17 < 19; i_17 += 2) 
                        {
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) var_16))));
                            arr_59 [i_17] [i_12] [i_12] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) ? (var_13) : (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (var_3)));
                        }
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_13) : (var_8)));
                        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_13)));
                    }
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        arr_64 [i_18] [15ULL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (var_11)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)0)), (8275703523171341806LL)))) : (max((var_3), (var_15)))));
                        var_48 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (4332679928923133061LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (unsigned short)20438))));
                        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) var_16))))));
                        arr_65 [i_0] [i_1] [i_6] [(unsigned short)4] [(unsigned short)4] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))));
                        arr_66 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)6] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (unsigned short)45112)), (18446744073709551613ULL))), (var_8)));
                    }
                    for (signed char i_19 = 0; i_19 < 21; i_19 += 4) 
                    {
                        arr_70 [i_19] [i_6 - 2] [i_1 - 1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_13))))), (max((var_15), (var_15)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_20 = 0; i_20 < 21; i_20 += 4) 
                        {
                            var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */short) var_6))))), (var_15))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)37128)))))))));
                            arr_74 [i_20] [i_20] [i_20] [i_20] [(unsigned short)0] = max((min((var_13), (((/* implicit */unsigned long long int) var_1)))), (max((var_13), (((/* implicit */unsigned long long int) var_7)))));
                            var_51 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25729)) && (((/* implicit */_Bool) (short)-4937))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (var_11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_9))))) - (((/* implicit */int) max(((unsigned short)65528), ((unsigned short)65533))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4358630536071316977ULL)) ? (((/* implicit */long long int) 219433515U)) : (9223372036854775801LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_16))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11))))))));
                            var_52 ^= ((/* implicit */short) max((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_6)))), (max((((((/* implicit */int) var_9)) >> (((/* implicit */int) var_6)))), (((/* implicit */int) max((var_9), (((/* implicit */signed char) var_12)))))))));
                        }
                        arr_75 [i_0] [i_0] [i_0] [i_0] &= ((((/* implicit */_Bool) max((var_3), (var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_12)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)116))))))) : (max((((/* implicit */unsigned long long int) var_17)), (var_3))));
                    }
                }
            }
        } 
    } 
}
