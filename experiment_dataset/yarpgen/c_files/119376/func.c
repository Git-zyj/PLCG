/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119376
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_2))));
                    var_10 = ((/* implicit */int) min((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -407928937497706711LL)) ? (407928937497706711LL) : (-407928937497706711LL))))))));
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((int) max((var_7), (var_7))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 3; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_23 [i_3] [i_5] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((((/* implicit */_Bool) ((var_0) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) var_9)) : (min((var_7), (var_7)))))));
                                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(407928937497706710LL))), (((/* implicit */long long int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21589))) : ((~(13972643925438708097ULL)))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((var_0) ? (var_5) : (var_5)))) : (((var_2) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9))))) : (((/* implicit */long long int) (-(((var_2) ? (((/* implicit */int) var_0)) : (var_5)))))))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_4)) : (var_8)))) ? (((var_0) ? (var_4) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((int) var_3)))));
                    var_14 = ((/* implicit */signed char) ((int) ((unsigned int) var_3)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 15; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_9))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((+(((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_5)) : (var_4))))));
                    var_16 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
        arr_30 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) var_9);
    }
    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        arr_33 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) : (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) var_4))))));
        /* LoopSeq 2 */
        for (int i_10 = 1; i_10 < 23; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_11 = 4; i_11 < 21; i_11 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    arr_44 [i_9] [i_10 + 1] [i_10] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) var_9))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
                for (int i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_5)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4))))));
                    arr_49 [i_13] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (-(var_9)));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_19 *= ((/* implicit */unsigned char) var_2);
                    var_20 = (+(((/* implicit */int) var_6)));
                    arr_54 [i_9] [i_14] [i_11 + 1] [i_10 + 2] [i_9] [i_9] = ((/* implicit */signed char) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4)));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)));
                    arr_55 [i_9] [i_9] [i_11] [i_14] = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) var_5)));
                }
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) -391212150)) ? (((/* implicit */int) (short)-1768)) : (((/* implicit */int) (short)1767)))))));
                var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8))))));
                var_24 = ((/* implicit */long long int) var_0);
            }
            /* LoopNest 2 */
            for (signed char i_15 = 1; i_15 < 22; i_15 += 3) 
            {
                for (int i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        /* LoopSeq 2 */
                        for (int i_17 = 3; i_17 < 23; i_17 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned char) ((signed char) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) var_8)))))))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_0))) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_0)))))))))));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 2) 
                        {
                            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_5)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))))))));
                            var_29 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7)))) ? (((/* implicit */long long int) max((((unsigned int) var_1)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                            arr_65 [2ULL] [i_10 - 1] [i_9] [i_16] [(unsigned char)2] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(var_2))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((short) var_5)))))) ? (((var_0) ? (((/* implicit */long long int) var_4)) : (var_9))) : (((/* implicit */long long int) ((unsigned int) var_8)))));
                            arr_66 [i_9] [(unsigned short)5] [i_9] [i_16] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (var_5)))));
                            arr_67 [i_9] [i_9] [i_15] [(unsigned char)20] [(signed char)15] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) ? ((+((-(18446744073709551615ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (var_4)))) ? (((unsigned long long int) var_0)) : (var_1)))));
                        }
                    }
                } 
            } 
        }
        for (int i_19 = 1; i_19 < 23; i_19 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_20 = 0; i_20 < 25; i_20 += 1) 
            {
                for (short i_21 = 2; i_21 < 23; i_21 += 2) 
                {
                    {
                        arr_77 [i_9] [i_9] [i_9] [i_20] [i_20] [i_9] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) min((var_1), (((/* implicit */unsigned long long int) (+(var_9)))))))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))) : (((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned long long int) var_8)) : (var_1)))));
                    }
                } 
            } 
            arr_78 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_4))))))) ? (var_9) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (short)-1768)) : (((/* implicit */int) (short)-1971)))))))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_22 = 0; i_22 < 15; i_22 += 1) 
    {
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4)));
        arr_81 [i_22] [i_22] = ((/* implicit */long long int) var_4);
        /* LoopNest 2 */
        for (int i_23 = 2; i_23 < 14; i_23 += 2) 
        {
            for (unsigned short i_24 = 0; i_24 < 15; i_24 += 3) 
            {
                {
                    arr_86 [14] [i_23] [14] [i_22] |= ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) var_4)))) : (var_7)));
                    arr_87 [i_22] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_5)) : (var_8)));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(var_5)))), ((~(((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
}
