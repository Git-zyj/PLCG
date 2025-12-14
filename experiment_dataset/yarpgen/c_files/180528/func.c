/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180528
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_14)) ? (var_9) : (var_9))))))));
                var_17 ^= ((/* implicit */int) (~(var_3)));
            }
            for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) var_1))));
                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_0))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned short i_5 = 4; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))))));
                            var_22 = ((/* implicit */unsigned long long int) var_6);
                        }
                    } 
                } 
            }
            for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14)))))));
            }
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))));
                            var_25 ^= ((/* implicit */signed char) var_15);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (unsigned short)31660)) : (((/* implicit */int) (unsigned short)31669)))))))));
        }
        var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))))));
        var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3)))));
    }
    /* LoopSeq 2 */
    for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
    {
        var_29 = ((/* implicit */unsigned short) var_9);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (14943227413189316564ULL))))));
            /* LoopSeq 4 */
            for (signed char i_12 = 2; i_12 < 17; i_12 += 3) 
            {
                arr_33 [i_10] [i_11] [i_11] [(signed char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14))));
                /* LoopSeq 4 */
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
                    arr_37 [i_10] [i_11] [i_12 + 1] [i_13] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))));
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (+(var_6))))));
                }
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
                {
                    var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_12));
                    var_34 *= (!(((/* implicit */_Bool) var_10)));
                }
                for (unsigned char i_15 = 2; i_15 < 16; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2)))))));
                        var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))));
                        var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
                        arr_46 [6] [i_11] [i_11] [i_11] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15))))) ? ((-(var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                    }
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
                }
                for (int i_17 = 0; i_17 < 18; i_17 += 1) 
                {
                    arr_49 [i_11] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    arr_50 [i_11] [i_11] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (var_9)))));
                }
                arr_51 [i_10] [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) var_14);
            }
            for (unsigned short i_18 = 0; i_18 < 18; i_18 += 1) 
            {
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) var_8))));
                arr_56 [i_10] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                var_40 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_7))))));
            }
            for (unsigned char i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned char i_20 = 1; i_20 < 16; i_20 += 1) /* same iter space */
                {
                    var_41 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))));
                    /* LoopSeq 3 */
                    for (unsigned char i_21 = 0; i_21 < 18; i_21 += 4) 
                    {
                        arr_66 [i_11] [i_11] [i_19] [i_20] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-86)))))));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5468303270401579854LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_0))));
                    }
                    for (signed char i_22 = 4; i_22 < 14; i_22 += 1) 
                    {
                        var_43 = ((/* implicit */signed char) var_3);
                        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))));
                        arr_69 [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                        var_45 *= ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                    }
                    for (short i_23 = 1; i_23 < 17; i_23 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned short) var_3);
                        arr_72 [i_23 - 1] [i_11] [i_19] [i_11] [i_23] [i_11] [i_19] = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                    }
                }
                for (unsigned char i_24 = 1; i_24 < 16; i_24 += 1) /* same iter space */
                {
                    var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))));
                    /* LoopSeq 1 */
                    for (int i_25 = 0; i_25 < 18; i_25 += 3) 
                    {
                        arr_77 [i_24] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))));
                        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)31666)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-23574)))))));
                    }
                    var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) var_7))));
                    var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))));
                }
                for (unsigned char i_26 = 1; i_26 < 16; i_26 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_27 = 0; i_27 < 18; i_27 += 3) 
                    {
                        arr_83 [i_10] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)94))));
                        var_51 = (+(21));
                    }
                    var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (signed char)-4)))))));
                    var_53 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))));
                    var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                }
                arr_84 [i_11] [i_11] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6)));
            }
            for (unsigned char i_28 = 0; i_28 < 18; i_28 += 1) /* same iter space */
            {
                var_55 *= ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                var_56 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))));
                var_57 = ((/* implicit */unsigned short) max((var_57), (var_1)));
            }
            var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12)));
        }
        var_59 = ((/* implicit */unsigned short) max((var_59), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (short)23566)) : (((/* implicit */int) var_2)))))));
    }
    for (int i_29 = 1; i_29 < 20; i_29 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_30 = 0; i_30 < 21; i_30 += 1) 
        {
            for (unsigned short i_31 = 0; i_31 < 21; i_31 += 1) 
            {
                {
                    var_60 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_12)))));
                    arr_97 [i_29] [i_30] [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6)))) ? (var_9) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    arr_98 [i_30] = ((/* implicit */signed char) var_13);
                }
            } 
        } 
        var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) var_9))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
        var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6)))));
        var_63 *= ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
    }
    var_64 = ((/* implicit */short) min((var_64), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))) ? (var_6) : (((((/* implicit */_Bool) var_14)) ? (var_12) : (var_12))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))))));
    var_65 ^= ((/* implicit */int) var_13);
    var_66 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))))));
}
