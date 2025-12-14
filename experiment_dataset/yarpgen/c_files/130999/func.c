/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130999
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
    var_11 += ((/* implicit */unsigned int) var_9);
    var_12 = ((/* implicit */_Bool) 4294967295U);
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_7))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) 0U))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_10))));
                }
            } 
        } 
        var_16 -= ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
        var_17 = ((/* implicit */short) var_1);
        var_18 += var_4;
        var_19 |= var_7;
    }
    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), ((unsigned char)192)));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (unsigned short i_5 = 4; i_5 < 10; i_5 += 4) 
            {
                {
                    var_21 -= ((/* implicit */signed char) var_8);
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 3; i_6 < 11; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) var_7)), (10129118134483613212ULL))))))));
                        arr_22 [i_3] [i_4] [i_3] [i_4] = ((/* implicit */int) var_9);
                        var_23 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) var_0))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_24 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)207)) ? (4294967295U) : ((+(var_2)))));
                                var_25 -= (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                            }
                        } 
                    } 
                    var_26 *= ((/* implicit */signed char) var_4);
                    var_27 += ((/* implicit */short) var_7);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 12; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 1) 
                    {
                        var_28 |= ((/* implicit */_Bool) var_9);
                        var_29 |= ((/* implicit */short) var_5);
                        var_30 = ((/* implicit */_Bool) min((var_30), ((!(((/* implicit */_Bool) var_7))))));
                    }
                    for (unsigned int i_13 = 2; i_13 < 13; i_13 += 2) 
                    {
                        var_31 += ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) var_3))));
                        /* LoopSeq 4 */
                        for (unsigned int i_14 = 1; i_14 < 14; i_14 += 3) /* same iter space */
                        {
                            arr_42 [(short)2] [(short)2] [i_9] [5] [i_14 - 1] = ((/* implicit */short) var_10);
                            arr_43 [i_9] [i_10 + 3] [i_11] [i_13] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6978390306925151300LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            var_33 += ((/* implicit */_Bool) var_8);
                        }
                        for (unsigned int i_15 = 1; i_15 < 14; i_15 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -420856429)) ? (131071U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                            var_35 += ((/* implicit */long long int) var_10);
                            var_36 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))) : (var_1)));
                        }
                        for (unsigned int i_16 = 1; i_16 < 14; i_16 += 3) /* same iter space */
                        {
                            var_37 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                            var_38 -= ((/* implicit */unsigned long long int) var_6);
                        }
                        for (unsigned int i_17 = 1; i_17 < 14; i_17 += 4) 
                        {
                            var_39 += ((/* implicit */unsigned long long int) var_4);
                            var_40 = ((/* implicit */_Bool) var_1);
                        }
                        var_41 |= ((/* implicit */unsigned int) var_5);
                    }
                    var_42 -= ((/* implicit */unsigned char) (-(4294967292U)));
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 15; i_19 += 1) 
                        {
                            {
                                arr_57 [i_9] [(unsigned char)6] |= ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_4))))));
                                arr_58 [i_9] [i_9] [(signed char)10] [(_Bool)1] [(signed char)3] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                                var_43 += ((/* implicit */short) var_8);
                                var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (15U) : (((((/* implicit */_Bool) 4294967282U)) ? (4294967292U) : (4U))))))));
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) (+(var_1))))));
                    /* LoopNest 2 */
                    for (short i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                                var_47 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))));
                                var_48 = ((/* implicit */unsigned char) var_6);
                                var_49 -= ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 15; i_22 += 3) 
        {
            for (unsigned char i_23 = 0; i_23 < 15; i_23 += 4) 
            {
                {
                    var_50 = ((/* implicit */unsigned short) var_3);
                    var_51 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) (_Bool)1)) : (420856438)));
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 0; i_24 < 15; i_24 += 3) 
                    {
                        for (long long int i_25 = 1; i_25 < 12; i_25 += 4) 
                        {
                            {
                                var_52 = ((/* implicit */unsigned char) var_6);
                                arr_75 [i_9] [i_22] [i_9] [i_24] [i_25] = ((/* implicit */signed char) 420856429);
                                var_53 = ((/* implicit */unsigned int) var_5);
                                var_54 = ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                    var_55 -= ((/* implicit */_Bool) var_5);
                }
            } 
        } 
        var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)107)))))));
    }
    var_57 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) var_10)), ((short)-9995))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) : (max((((/* implicit */int) var_0)), ((~(((/* implicit */int) var_0))))))));
}
