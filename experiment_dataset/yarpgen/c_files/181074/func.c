/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181074
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
    var_10 = ((/* implicit */long long int) max((0), (773099106)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((min((-6256620235143923422LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (-(((/* implicit */int) max(((short)-712), (((/* implicit */short) (_Bool)0)))))))))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [i_0 + 1] [i_1] = max((((/* implicit */int) min((var_0), (min(((short)-712), ((short)711)))))), (max((var_2), (((/* implicit */int) var_6)))));
                    var_12 = ((/* implicit */unsigned long long int) (-(min((var_7), (((/* implicit */long long int) var_8))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] = (-(min((var_7), (((/* implicit */long long int) min((var_3), (var_3)))))));
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) max(((~(min((((/* implicit */long long int) var_3)), (var_7))))), (((/* implicit */long long int) (-((+(var_9))))))));
                                arr_15 [(short)5] [(short)5] [i_2 + 1] [i_3] [i_1] [i_3] [i_4] = ((/* implicit */short) min(((+(((/* implicit */int) max((var_8), (var_3)))))), (((/* implicit */int) min(((short)-741), ((short)-3871))))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    var_13 ^= ((/* implicit */short) (~(max((var_7), (((/* implicit */long long int) var_2))))));
                    arr_20 [i_5] = (+((-(((/* implicit */int) var_8)))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_0))));
                }
                for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 2) 
                    {
                        arr_27 [i_0 + 1] [i_1] [i_6] [i_6] = ((/* implicit */signed char) max((min((((/* implicit */int) var_6)), (var_9))), (((/* implicit */int) max((var_8), (var_8))))));
                        var_15 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (short)-714)))))))));
                        arr_28 [i_0] [i_0] [i_1] [i_6] [i_6] [i_6] = (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */short) var_6)))))))));
                        var_16 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_3)))))))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (-(max((var_1), (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+((+(var_2))))))));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(var_2))))));
                        }
                        arr_34 [i_0] [i_6] [(short)6] [i_0] [i_0 - 1] = max((max((var_9), (((/* implicit */int) min((var_8), (var_5)))))), (((/* implicit */int) max((var_8), (var_0)))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_20 = max(((short)-717), ((short)-707));
                            arr_38 [i_6] [i_6] [i_10] = ((/* implicit */long long int) max(((short)3855), ((short)3871)));
                        }
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 1) 
                    {
                        arr_41 [i_11] [i_6] [i_6] [i_0] = ((/* implicit */long long int) min((min((var_5), (max((var_0), (var_0))))), (var_4)));
                        /* LoopSeq 4 */
                        for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            arr_45 [i_12] [i_12] [i_6] [i_6] [i_6] [i_1] [i_0] = max((var_5), (((/* implicit */short) (!(((/* implicit */_Bool) (short)717))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((min(((+(((/* implicit */int) var_6)))), ((-(((/* implicit */int) var_3)))))), (min((var_2), (var_9))))))));
                        }
                        for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
                        {
                            arr_48 [i_0] [i_0] [i_0] [(short)4] [i_6] [(short)1] = ((/* implicit */short) max((((/* implicit */int) min(((short)-690), ((short)-741)))), (max((var_2), (max((var_9), (((/* implicit */int) var_6))))))));
                            arr_49 [i_0] [7ULL] [(signed char)10] [i_6] [i_0] = ((/* implicit */_Bool) min((min(((~(var_7))), (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))), (((/* implicit */long long int) max((((/* implicit */int) var_5)), (min((((/* implicit */int) var_5)), (var_9))))))));
                            arr_50 [i_13] [i_6] [i_6] [i_0] = ((/* implicit */_Bool) max(((-((+(((/* implicit */int) var_8)))))), (min((((/* implicit */int) max((var_3), (var_5)))), (var_9)))));
                        }
                        for (short i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            arr_54 [i_0] [i_0] [i_1] [i_0] [i_6] [i_14] [6] = (-(min((min((var_7), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) min((var_3), (var_5)))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((-(((/* implicit */int) var_5)))))))));
                            var_23 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) var_8)), (var_7)))));
                        }
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            arr_57 [(short)0] [(signed char)0] [i_6] [8] [i_6] [(signed char)0] [8] = var_1;
                            arr_58 [(short)0] [i_1] [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */short) min((min(((-(var_2))), (((/* implicit */int) max((var_5), (var_3)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        }
                        arr_59 [i_1] [i_6] [i_6] [i_11] = ((/* implicit */short) max((((/* implicit */long long int) max((var_2), (((/* implicit */int) var_0))))), (max((((/* implicit */long long int) var_9)), (var_1)))));
                    }
                    for (short i_16 = 1; i_16 < 9; i_16 += 3) 
                    {
                        arr_62 [i_0] [i_0 + 1] [i_0] [i_6] [(unsigned char)4] = ((/* implicit */unsigned long long int) min(((short)-736), ((short)741)));
                        arr_63 [i_6] [i_1] [i_6] [i_16 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)3853))));
                    }
                    var_24 += ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 618891483U))))), (max(((short)-715), ((short)-690)))))), ((-(((/* implicit */int) var_8))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_1))));
                    arr_64 [i_6] [1LL] [i_6] [i_6] = var_8;
                }
                for (short i_17 = 2; i_17 < 9; i_17 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        arr_70 [i_1] [i_18] = ((/* implicit */_Bool) min((min((var_7), (((/* implicit */long long int) var_3)))), (min((((/* implicit */long long int) var_6)), (var_7)))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max((((/* implicit */int) max((max((var_4), (var_8))), (var_3)))), (var_2))))));
                        arr_71 [i_0 - 1] [i_0 - 1] [i_17] [i_0 - 1] [i_17] [i_18] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                    }
                    var_27 += (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_1)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_74 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_1))))));
                        arr_75 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                    }
                }
                arr_76 [i_0] [10ULL] = (~(max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                /* LoopSeq 2 */
                for (short i_20 = 1; i_20 < 8; i_20 += 2) 
                {
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) max((max(((short)-731), ((short)740))), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_1))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_21 = 1; i_21 < 10; i_21 += 1) 
                    {
                        for (unsigned int i_22 = 2; i_22 < 7; i_22 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) max(((-(max((var_7), (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) max((((/* implicit */int) var_6)), (var_2))))));
                                arr_84 [i_20] [i_20] = ((/* implicit */signed char) max((max((min((var_1), (var_7))), (((/* implicit */long long int) max((((/* implicit */short) var_6)), (var_4)))))), (((/* implicit */long long int) max((max((((/* implicit */int) var_3)), (var_2))), ((+(var_2))))))));
                                arr_85 [(_Bool)1] [i_1] [i_20] [i_21] [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-3871)), (618891505U))))));
                                arr_86 [i_20] [i_20] [i_20] [i_0] = ((/* implicit */unsigned long long int) (+(var_1)));
                            }
                        } 
                    } 
                }
                for (signed char i_23 = 2; i_23 < 10; i_23 += 4) 
                {
                    var_30 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                    arr_91 [i_0 - 1] = var_2;
                    var_31 = ((/* implicit */unsigned int) min((max((-3784498873530047380LL), (((/* implicit */long long int) (short)-674)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4190653570369488826ULL)))))));
                    arr_92 [i_0] [i_0] = max((((/* implicit */long long int) var_2)), (max((((/* implicit */long long int) min((((/* implicit */int) var_6)), (var_2)))), (min((var_1), (((/* implicit */long long int) var_2)))))));
                }
                var_32 *= var_6;
            }
        } 
    } 
}
