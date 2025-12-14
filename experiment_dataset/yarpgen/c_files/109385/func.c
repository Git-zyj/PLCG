/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109385
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_15 += ((/* implicit */unsigned int) (-(var_8)));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        arr_11 [i_3] [i_1] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)27428)) ? (16225767222026639451ULL) : (((/* implicit */unsigned long long int) 1473290234))));
                    }
                    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_13))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */unsigned char) var_12);
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_12)) : ((+(var_1)))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) (-(var_14)));
                            var_22 = ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) var_13)));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_14))));
        }
        var_24 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
    }
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_12)) : (var_8)))) ? (((/* implicit */unsigned long long int) var_6)) : ((-(var_8)))));
                            arr_33 [i_10] [i_9] [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) var_9);
                        }
                    } 
                } 
                var_26 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                var_27 = ((/* implicit */signed char) var_10);
            }
        } 
    } 
    var_28 = (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_12)) : (var_1))));
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        for (unsigned int i_13 = 0; i_13 < 13; i_13 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 13; i_15 += 1) /* same iter space */
                    {
                        var_30 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_0)))) ? ((-(((/* implicit */int) var_13)))) : (((var_13) ? (var_6) : (var_6)))));
                        var_31 &= (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (var_7))));
                        var_32 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_3))))));
                    }
                    for (int i_16 = 0; i_16 < 13; i_16 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) : (var_1)));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (-(((/* implicit */int) var_5)))))));
                            var_35 = ((/* implicit */int) min((var_35), ((-(var_14)))));
                        }
                        var_36 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11750)) ? (-9083801319192813624LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17764)))))) ? ((-(((/* implicit */int) var_5)))) : ((-((+(((/* implicit */int) var_5))))))));
                        var_37 -= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : ((-(var_3))))) : ((-(((/* implicit */int) (unsigned short)21431))))));
                    }
                }
                for (unsigned short i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    var_39 = ((/* implicit */long long int) (-(((var_13) ? (var_14) : (var_12)))));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(1940172760)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : ((-(var_2)))));
                    /* LoopSeq 4 */
                    for (short i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        var_41 = ((/* implicit */int) (!((!(((/* implicit */_Bool) -460171230))))));
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)245))))) : (((((/* implicit */_Bool) var_2)) ? (var_0) : (var_0)))));
                    }
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */int) min((var_43), ((+((+(var_6)))))));
                        arr_59 [i_20 - 1] [i_20 - 1] [i_20] [i_20] [(short)11] [(short)11] = ((((/* implicit */_Bool) 2147483647)) ? (4073799011U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)255))));
                    }
                    /* vectorizable */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned int) max((var_44), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2)))));
                        var_45 ^= ((/* implicit */_Bool) var_0);
                    }
                    /* vectorizable */
                    for (int i_22 = 4; i_22 < 12; i_22 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                        /* LoopSeq 2 */
                        for (int i_23 = 1; i_23 < 12; i_23 += 2) 
                        {
                            var_47 = ((/* implicit */int) (+(var_0)));
                            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0)))))));
                        }
                        for (int i_24 = 0; i_24 < 13; i_24 += 2) 
                        {
                            var_49 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                            var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (var_6))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (unsigned int i_25 = 0; i_25 < 13; i_25 += 4) 
                {
                    for (short i_26 = 0; i_26 < 13; i_26 += 3) 
                    {
                        for (signed char i_27 = 0; i_27 < 13; i_27 += 3) 
                        {
                            {
                                var_51 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_4))))));
                                var_52 = ((/* implicit */_Bool) (-((+((+(-1940172761)))))));
                                var_53 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */int) var_11))))))));
                                var_54 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 13; i_28 += 2) 
                {
                    for (int i_29 = 0; i_29 < 13; i_29 += 3) 
                    {
                        {
                            var_55 = ((/* implicit */int) max((var_55), (var_14)));
                            var_56 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) var_11)))) : ((-(var_3)))))));
                            var_57 = ((/* implicit */unsigned short) min((var_57), (((/* implicit */unsigned short) (-((+(((/* implicit */int) var_11)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
