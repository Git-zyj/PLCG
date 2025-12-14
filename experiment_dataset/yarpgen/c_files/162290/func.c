/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162290
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) (((+((+(var_1))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))));
        var_13 *= ((/* implicit */short) var_3);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [(unsigned short)9] [i_1] [i_0] [i_2] = (~((~(((/* implicit */int) (short)4352)))));
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((unsigned int) var_10)) : (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                    var_14 = ((/* implicit */unsigned int) ((signed char) ((unsigned int) ((1801971031) * (((/* implicit */int) (_Bool)1))))));
                    var_15 = ((/* implicit */unsigned char) var_5);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((var_7) % (var_5)))));
                            var_17 = ((/* implicit */unsigned char) (-(((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6))))))));
                            var_18 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((unsigned short) 512U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294966804U))));
                            arr_21 [i_3] [8U] [i_5] [i_6] [6U] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) * (var_4))))))) >> (((((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (var_4)))) - (1041839392ULL)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            arr_25 [i_3] [i_3] [15U] [i_5] [i_6] [4U] [i_8] &= ((/* implicit */short) min((((var_3) >> (((var_4) - (788777169U))))), (((/* implicit */unsigned long long int) ((int) var_4)))));
                            arr_26 [i_3] [i_4] [i_6] [i_8] = ((short) ((unsigned long long int) var_8));
                            var_19 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_10))))) / (((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (512U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
                        }
                        arr_27 [i_4] [i_5] [i_4] [i_3] = ((/* implicit */int) ((_Bool) ((((var_1) & (var_7))) >> (((var_2) - (17859001109650258270ULL))))));
                        var_21 += ((/* implicit */_Bool) (~(((min((var_0), (((/* implicit */unsigned int) var_9)))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        var_22 &= ((/* implicit */unsigned int) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (var_7))))))))));
                        var_23 = ((/* implicit */unsigned long long int) (((~(((unsigned int) var_2)))) * (((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) != (var_1)))))))));
                        arr_30 [i_9] [i_9] [i_3] [1] [1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) var_0))), (((var_4) << (((((/* implicit */int) var_11)) - (171)))))))) ? (((/* implicit */unsigned long long int) ((((var_7) << (((var_4) - (788777220U))))) >> (((((/* implicit */int) min((var_11), (var_11)))) - (179)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_8)))), (((((/* implicit */unsigned long long int) var_0)) * (var_2)))))));
                    }
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 2; i_11 < 15; i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_11] = ((int) (!(((/* implicit */_Bool) var_2))));
                            arr_37 [i_4] [i_4] [i_11] = ((/* implicit */int) ((_Bool) var_9));
                        }
                        for (unsigned int i_12 = 2; i_12 < 15; i_12 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned int) ((var_3) | (((/* implicit */unsigned long long int) var_1))))));
                            var_25 = ((/* implicit */unsigned long long int) var_10);
                        }
                        var_26 = ((/* implicit */signed char) min((((int) var_3)), (((/* implicit */int) ((short) var_6)))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_0))));
                        /* LoopSeq 3 */
                        for (int i_13 = 1; i_13 < 16; i_13 += 2) 
                        {
                            arr_43 [9U] [i_4] [i_5] [i_10] &= ((((/* implicit */_Bool) min((((var_4) << (((var_3) - (10031337520375719946ULL))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))))) ? (min((((/* implicit */unsigned int) var_11)), (min((((/* implicit */unsigned int) var_10)), (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
                            var_28 = ((/* implicit */short) (~(((unsigned long long int) var_8))));
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                            var_30 = ((/* implicit */unsigned char) ((min((4294966778U), (((/* implicit */unsigned int) (_Bool)1)))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((((unsigned short) var_7)), (((/* implicit */unsigned short) ((short) var_2)))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((short) max((var_6), (var_9)))))));
                        }
                        for (unsigned char i_15 = 1; i_15 < 17; i_15 += 1) 
                        {
                            var_33 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) var_0))) * (((((/* implicit */unsigned long long int) ((var_4) - (var_5)))) - (min((((/* implicit */unsigned long long int) var_8)), (var_2)))))));
                            arr_48 [i_3] [(signed char)15] [i_4] [(signed char)1] [i_5] [i_15] [i_15 + 1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) (+(((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        }
                    }
                    var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? ((~(-1066856261))) : (((/* implicit */int) (_Bool)1)))) + ((-(((/* implicit */int) ((var_1) >= (var_0))))))));
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        var_35 = (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_4)))));
                        var_36 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        /* LoopSeq 1 */
                        for (signed char i_17 = 3; i_17 < 16; i_17 += 3) 
                        {
                            arr_57 [i_16] [i_5] [i_17] [i_5] [i_17 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5))))))) >> (((var_1) - (1041839376U)))));
                            var_37 = ((((/* implicit */int) var_9)) >= ((-(((((/* implicit */int) var_10)) % (((/* implicit */int) var_9)))))));
                            var_38 = ((unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 3; i_18 < 16; i_18 += 3) 
                        {
                            arr_62 [i_3] [i_4] [(_Bool)1] [i_16] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_6)))));
                            var_39 += ((/* implicit */int) min((((/* implicit */signed char) ((_Bool) var_2))), (((signed char) ((((/* implicit */unsigned long long int) var_8)) / (var_3))))));
                            var_40 = ((/* implicit */int) ((min((((var_1) & (var_1))), (min((var_4), (var_4))))) >> (((((/* implicit */int) var_6)) - (10960)))));
                            arr_63 [i_3] [2ULL] [6U] [i_5] [i_18] &= ((((((unsigned long long int) var_4)) << (((((var_7) ^ (var_4))) - (3098289560U))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_3)))))));
                            var_41 = ((/* implicit */unsigned long long int) (((+((+(var_1))))) + (((/* implicit */unsigned int) ((((((int) var_8)) + (2147483647))) << (((var_8) - (2607880888U))))))));
                        }
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((-(var_0))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((var_3) - (10031337520375719964ULL))))))))) ? (max((var_7), (var_4))) : (var_0)));
                    }
                    for (unsigned int i_19 = 0; i_19 < 18; i_19 += 4) 
                    {
                        var_43 += ((/* implicit */short) var_7);
                        var_44 += ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) (!(((/* implicit */_Bool) 554425258635215866ULL))))));
                        arr_67 [(unsigned short)16] [(unsigned short)15] [i_5] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) var_10)), (var_5)))));
                        arr_68 [i_5] [i_4] = ((/* implicit */short) (~(var_7)));
                    }
                }
            } 
        } 
        var_45 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (((unsigned int) (unsigned char)13)) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (min((var_5), (((/* implicit */unsigned int) ((unsigned short) var_0)))))));
        var_46 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((int) 2147483647))))), (((((((/* implicit */_Bool) var_0)) ? (var_3) : (var_3))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_20 = 0; i_20 < 10; i_20 += 4) 
    {
        for (int i_21 = 0; i_21 < 10; i_21 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_22 = 3; i_22 < 8; i_22 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            {
                                var_47 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_6)))))), (((/* implicit */int) ((_Bool) max((var_1), (var_1)))))));
                                var_48 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_9)), (var_0)))));
                            }
                        } 
                    } 
                    arr_86 [i_20] [i_21] [5U] = ((/* implicit */unsigned int) min((((unsigned long long int) (-(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */unsigned long long int) var_8)) - (var_3))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (var_0))))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 1; i_25 < 7; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 1) 
                    {
                        {
                            var_49 &= (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_0)) ? (var_3) : (var_3))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_27 = 1; i_27 < 8; i_27 += 1) 
                            {
                                arr_93 [i_27] [i_27] = ((/* implicit */signed char) ((unsigned long long int) var_4));
                                var_50 += ((/* implicit */unsigned long long int) ((((((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? (((var_7) & (var_0))) : ((-(var_5))))) >> ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                            }
                        }
                    } 
                } 
                var_51 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_8)) % (min((((((/* implicit */_Bool) var_10)) ? (10559070590473446145ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19950))))), (((/* implicit */unsigned long long int) 1352563576U))))));
            }
        } 
    } 
}
