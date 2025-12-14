/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182290
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
    var_10 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    arr_8 [i_0 - 1] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) var_2);
                    var_11 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_1)) ? (var_1) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                    arr_9 [i_0 + 1] [i_0 + 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1473107991U)) ? (3380484129145579452ULL) : (3380484129145579452ULL)))) ? (3380484129145579429ULL) : (((((/* implicit */_Bool) 3380484129145579435ULL)) ? (15066259944563972186ULL) : (((/* implicit */unsigned long long int) 0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                    var_12 = ((/* implicit */unsigned long long int) var_2);
                }
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    /* LoopSeq 4 */
                    for (int i_4 = 1; i_4 < 16; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_0 + 1] [i_3] [i_3] = min((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (max((var_5), (var_9))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            var_14 = ((/* implicit */unsigned int) var_6);
                            var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
                        }
                        for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (var_5)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_4))))) ? (((int) var_3)) : ((+(((/* implicit */int) var_2)))))) : (((/* implicit */int) ((unsigned char) var_1)))));
                            arr_21 [i_1] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0))))))) ? (((((/* implicit */_Bool) max((var_8), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (max((var_1), (((/* implicit */unsigned long long int) var_6)))))) : (((unsigned long long int) min((var_8), (((/* implicit */unsigned long long int) var_0)))))));
                            var_17 -= ((/* implicit */unsigned char) var_5);
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 2; i_7 < 16; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((unsigned long long int) var_7))))));
                            arr_25 [i_7] [i_4] [i_3] [i_1] [i_7] |= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9))));
                            var_19 = ((/* implicit */unsigned char) var_8);
                        }
                        for (int i_8 = 3; i_8 < 17; i_8 += 4) 
                        {
                            arr_29 [i_0] [i_1] [i_3] [i_4 - 1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((unsigned char) var_6))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (var_6)))))))));
                            arr_30 [i_3] = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9))), (var_1)))));
                        }
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_0)) : (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        arr_31 [i_0 + 1] [i_1 - 2] [i_3] [i_4] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_4)) : (var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (max((var_5), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : ((+(var_5))));
                    }
                    for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) var_3);
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8)))) ? (var_8) : (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((int) var_6))))) : (var_8)));
                            var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_9), (var_5)))) ? (((((/* implicit */_Bool) var_3)) ? (var_8) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                            arr_38 [i_0] [i_0] [i_3] [i_9] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_3))))) ? (var_5) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) var_6)))))))) ? (((/* implicit */int) ((unsigned short) var_2))) : (var_0));
                        }
                    }
                    for (short i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        arr_42 [i_11] [i_1] [i_1] [i_0] |= ((/* implicit */int) var_7);
                        arr_43 [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((unsigned int) var_6))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((+(var_5)))))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */unsigned long long int) (+(var_7)))) : (max((var_5), (((/* implicit */unsigned long long int) min((var_0), (var_0))))))));
                    }
                    for (unsigned long long int i_12 = 4; i_12 < 18; i_12 += 2) 
                    {
                        var_25 = var_4;
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_13 = 4; i_13 < 18; i_13 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_9) : (var_9)));
                            var_27 = ((/* implicit */unsigned int) var_1);
                        }
                        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            var_28 = ((/* implicit */int) min((min((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) var_4)))), (var_5))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (min((var_5), (((/* implicit */unsigned long long int) var_4))))))));
                            var_29 = ((/* implicit */int) min(((+(var_5))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_7)) ? (var_8) : (var_9)))))));
                            var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned int) var_0)), (var_7)))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (int i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (var_8)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((unsigned long long int) var_8))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 3) 
                        {
                            var_32 |= ((/* implicit */unsigned char) ((int) ((int) var_0)));
                            arr_59 [i_3] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) var_4)) ? (var_8) : (var_5))) : (min((((/* implicit */unsigned long long int) var_4)), (var_8))))));
                        }
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 3380484129145579452ULL))) ? (((((/* implicit */_Bool) var_7)) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))))) : (((/* implicit */unsigned long long int) var_0))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 19; i_17 += 2) /* same iter space */
                    {
                        arr_63 [i_17] [i_3] [i_3] [i_0 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 2; i_18 < 18; i_18 += 2) 
                        {
                            var_34 = ((/* implicit */int) var_1);
                            var_35 = ((/* implicit */int) ((unsigned char) var_7));
                        }
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 0; i_19 < 19; i_19 += 1) 
                        {
                            arr_69 [i_0] [i_3] = ((/* implicit */unsigned char) (+(var_7)));
                            var_37 = ((/* implicit */int) var_9);
                        }
                        for (int i_20 = 0; i_20 < 19; i_20 += 2) 
                        {
                            var_38 *= ((/* implicit */short) var_0);
                            var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_2))))) ? (var_0) : (((/* implicit */int) var_3)));
                            var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_5) : (var_9)));
                            var_41 = ((/* implicit */unsigned int) var_5);
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((int) var_6)) : ((-(var_0)))));
                        }
                        var_43 = ((/* implicit */int) var_9);
                    }
                    for (int i_21 = 0; i_21 < 19; i_21 += 2) /* same iter space */
                    {
                        arr_75 [i_21] [i_21] [i_3] [i_3] [(unsigned short)10] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) var_7))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (var_4)))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (max((var_5), (var_8)))))));
                        var_44 = ((/* implicit */unsigned char) ((unsigned int) var_6));
                        var_45 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) : (max((var_9), (((/* implicit */unsigned long long int) var_6))))));
                    }
                }
                var_46 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (var_1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (var_0)))) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_0)) : (var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) : ((+(((/* implicit */int) var_2))))));
                var_48 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))), (min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_0)) ? (var_9) : (var_5)))))));
                var_49 = (+(((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))))));
            }
        } 
    } 
}
