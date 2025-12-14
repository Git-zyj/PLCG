/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184463
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
    var_10 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (short i_3 = 3; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned char)142))));
                        var_11 = ((/* implicit */long long int) arr_0 [i_1]);
                        arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) max(((unsigned char)144), (var_5))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) arr_13 [i_0] [i_4]);
                                var_13 -= ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) arr_3 [i_0 - 1] [i_0 + 1]))), ((~(((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) (unsigned char)101);
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            arr_26 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(var_1)));
                            var_15 = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) (signed char)-72)))));
                            var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) (signed char)72)), (arr_25 [i_0] [i_9] [i_9] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))))))) : ((~(133693440U)))));
                        }
                        arr_27 [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) var_1);
                        var_17 = ((/* implicit */signed char) ((long long int) max(((short)-27245), (((/* implicit */short) (unsigned char)255)))));
                        arr_28 [i_0] [i_4] [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) (~(var_6)));
                        arr_29 [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))) : ((-(var_8)))))) ? (((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((long long int) (unsigned short)18867))))));
                    }
                    for (short i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 1; i_11 < 11; i_11 += 4) 
                        {
                            var_18 = arr_6 [i_11 + 1] [i_0 + 1];
                            var_19 = ((/* implicit */short) (~(((long long int) var_9))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)28706))))), (var_9))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (short)(-32767 - 1)))));
                            var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4]))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                        {
                            var_23 = min((max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)255)))), (arr_7 [i_0] [i_0 - 1]));
                            arr_38 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (unsigned char)247);
                            arr_39 [i_0] [i_0] [i_0] [i_4] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), ((short)9787)))))))) ? (arr_32 [i_4] [i_0] [i_0] [i_0] [i_4]) : (max((((/* implicit */long long int) var_4)), (arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 1]))));
                            var_24 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_2))))));
                        }
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) var_3);
                            arr_43 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] |= ((/* implicit */short) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (unsigned int i_14 = 3; i_14 < 10; i_14 += 4) 
                        {
                            var_26 = min((((/* implicit */long long int) (short)15)), (min((((/* implicit */long long int) var_3)), (min((var_1), (((/* implicit */long long int) var_7)))))));
                            arr_46 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) min((((unsigned int) (+(((/* implicit */int) var_2))))), (min(((-(var_7))), (((/* implicit */unsigned int) arr_5 [i_0] [i_0]))))));
                            arr_47 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) max(((+(-5858703091606169748LL))), (((long long int) (short)-27215))));
                        }
                        /* LoopSeq 1 */
                        for (short i_15 = 2; i_15 < 11; i_15 += 4) 
                        {
                            arr_50 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                            var_27 = ((/* implicit */short) (~(var_7)));
                        }
                        var_28 = var_6;
                    }
                    for (short i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (short)32763))))));
                        var_30 = ((((/* implicit */_Bool) (~(var_8)))) ? (max((((/* implicit */long long int) var_5)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_34 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 1])))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_18 = 0; i_18 < 12; i_18 += 3) 
                        {
                            arr_58 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) arr_54 [i_0] [i_0]))))));
                            var_31 = ((/* implicit */long long int) var_4);
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_49 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_49 [i_0] [i_0] [i_5] [i_5] [i_0] [i_5]))));
                            var_33 ^= ((/* implicit */unsigned short) ((unsigned char) var_6));
                        }
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) arr_54 [i_0] [i_0]))));
                        arr_59 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (-((-(arr_22 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_4])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_19 = 1; i_19 < 11; i_19 += 3) 
                    {
                        arr_62 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */signed char) var_5);
                        arr_63 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) (~(var_8)));
                    }
                    for (unsigned char i_20 = 0; i_20 < 12; i_20 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 4) /* same iter space */
                        {
                            arr_71 [i_4] = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))));
                            var_35 = (short)-27245;
                        }
                        for (unsigned short i_22 = 0; i_22 < 12; i_22 += 4) /* same iter space */
                        {
                            var_36 = min((9179949733103223446LL), (((/* implicit */long long int) var_8)));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (-(((/* implicit */int) var_2)))))));
                            arr_74 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (short)-3428);
                        }
                        for (short i_23 = 3; i_23 < 11; i_23 += 3) 
                        {
                            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_4] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)181))))) ? ((~(arr_22 [i_0 + 1] [i_0 + 1] [i_5] [i_5] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_39 *= ((/* implicit */short) var_5);
                            arr_77 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned long long int) (-(var_6))));
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                        {
                            var_40 -= ((/* implicit */short) var_9);
                            var_41 = ((((/* implicit */_Bool) max((arr_7 [i_0 - 2] [i_0 - 1]), (arr_7 [i_0 - 1] [i_0 - 1])))) ? (var_9) : (var_1));
                            var_42 = ((/* implicit */short) var_9);
                            arr_81 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = max((min((((/* implicit */long long int) (short)511)), (var_1))), (((/* implicit */long long int) max(((~(var_8))), (((/* implicit */unsigned int) (signed char)-1))))));
                            var_43 = ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), ((unsigned char)247)))) ? (max((((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 + 1])), (var_1))) : (arr_79 [i_0] [i_0] [i_4] [i_0] [i_0]));
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                        {
                            arr_84 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */signed char) var_2);
                            var_44 = ((/* implicit */short) arr_79 [i_0] [i_0] [i_4] [i_0] [i_0]);
                        }
                        for (unsigned short i_26 = 0; i_26 < 12; i_26 += 4) 
                        {
                            arr_87 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) arr_20 [i_5] [i_5]);
                            var_45 |= ((/* implicit */short) max((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_8)) : (var_1))), (((/* implicit */long long int) arr_45 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1])))), (max((max((var_9), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (short)-32763))))));
                        }
                        /* vectorizable */
                        for (short i_27 = 0; i_27 < 12; i_27 += 4) 
                        {
                            arr_90 [i_4] [i_4] = ((/* implicit */unsigned short) var_2);
                            arr_91 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */long long int) arr_14 [i_5]);
                            var_46 = (~(arr_11 [i_0 - 1] [i_0 - 1]));
                            var_47 = ((/* implicit */unsigned short) var_0);
                            arr_92 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_0 - 1] [i_0 - 1] [i_4] [i_0 - 1] [i_0 - 1])) ? (arr_56 [i_0 - 2] [i_4] [i_4] [i_4] [i_27]) : (arr_56 [i_0 + 1] [i_4] [i_4] [i_4] [i_4])));
                        }
                    }
                }
            } 
        } 
    }
    var_48 = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))), (min((var_7), (var_0))))));
    var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((~(var_0)))));
}
