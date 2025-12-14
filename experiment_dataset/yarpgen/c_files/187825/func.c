/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187825
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
    var_10 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_0)))))) : (min((var_9), (var_9))))), (((/* implicit */long long int) ((short) max((var_7), (((/* implicit */long long int) var_0))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_5)))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (((var_4) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 3LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32750))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 763085771)) && (((/* implicit */_Bool) (unsigned char)0))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 4 */
            for (int i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                var_12 = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) (_Bool)0))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) == (((/* implicit */int) var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (signed char)112)) ? (-2891562597440170533LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67)))))));
                    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (var_9) : (var_3))) != (((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        arr_17 [i_5] [i_4 - 1] [i_3 + 2] [i_2 + 2] [i_0 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3)))));
                        arr_18 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */int) var_0))))) ? (((int) var_6)) : ((+(((/* implicit */int) var_0))))));
                    }
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((unsigned int) var_6));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_2)))))));
                        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) <= (((/* implicit */int) var_2)))))) : (((long long int) var_9))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
                        arr_23 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) & (((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) | (var_3))))));
                    }
                    for (signed char i_8 = 4; i_8 < 12; i_8 += 2) /* same iter space */
                    {
                        var_20 *= ((/* implicit */unsigned int) ((int) 18446744073709551606ULL));
                        arr_26 [i_0 - 1] [i_0] [i_4 - 2] [i_2 + 1] [i_8 - 3] = ((/* implicit */unsigned int) ((((var_3) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (3446488165905536757LL)))));
                        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) % (((long long int) var_0))));
                    }
                    for (signed char i_9 = 4; i_9 < 12; i_9 += 2) /* same iter space */
                    {
                        arr_30 [i_9 - 2] [i_9 - 3] [i_4 - 2] [i_4] [i_3] [i_2 - 2] [i_0 + 1] = ((/* implicit */short) (((~(var_3))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (var_6))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)6674)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_23 ^= ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))));
                        var_24 = ((/* implicit */unsigned char) (~(1016970803U)));
                        arr_31 [i_0 + 1] [i_2 + 2] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (unsigned short)41415)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))));
                    }
                }
            }
            for (int i_10 = 1; i_10 < 14; i_10 += 2) /* same iter space */
            {
                var_25 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) 8269900030070666848ULL))));
                arr_34 [i_10] = ((/* implicit */int) (((~(((/* implicit */int) (unsigned char)95)))) != ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            }
            for (int i_11 = 1; i_11 < 14; i_11 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_12 = 1; i_12 < 14; i_12 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_8))));
                    var_27 ^= ((/* implicit */short) (!((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)138))))));
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_13 = 1; i_13 < 14; i_13 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) min((var_29), (((var_3) * (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        var_30 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (((unsigned long long int) var_5)));
                    }
                    for (int i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) var_5);
                        arr_45 [i_0] [i_2 - 2] [i_11 + 1] = ((/* implicit */signed char) var_3);
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-32741)) * (((/* implicit */int) (unsigned char)95)))))));
                        var_33 = ((((/* implicit */_Bool) var_9)) ? ((~(var_7))) : (((var_9) % (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                    }
                    for (unsigned short i_15 = 1; i_15 < 14; i_15 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_6)) ? (var_3) : (var_9)))));
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((var_3) <= (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))))));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_0))))))));
                        arr_48 [i_11] [i_11] [i_11 - 1] [i_11] [i_11] [i_11 - 1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (var_9)))));
                        var_37 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)11442)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) 4225073046U))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_52 [i_0 + 1] [i_2 - 1] [i_11] [i_12 + 1] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_7)));
                        arr_53 [i_11 + 1] [i_0 - 1] [i_11] [i_12 - 1] [i_16] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_5)))) : (var_6)));
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_2)))) : (((/* implicit */int) (!((_Bool)1)))))))));
                        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((unsigned int) var_3)))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_40 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (((unsigned long long int) var_4))));
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) % (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)36567)))))))));
                        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_8)) ? (var_7) : (var_7)))));
                    }
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_43 = ((/* implicit */short) ((var_6) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (var_6)))));
                    var_44 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                }
                var_45 = ((/* implicit */signed char) ((((long long int) var_1)) - (var_7)));
                var_46 *= ((/* implicit */short) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_4))));
                arr_60 [i_0 + 1] [i_2 + 2] [i_2] [i_11] = ((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132))) : (3759765508U));
                arr_61 [i_11 - 1] [i_2 - 1] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_1))) != (((/* implicit */int) var_4))));
            }
            for (int i_19 = 1; i_19 < 14; i_19 += 2) /* same iter space */
            {
                arr_64 [i_0 - 1] [i_2 + 2] [i_19] = ((/* implicit */unsigned short) var_7);
                arr_65 [i_0 - 1] [i_2 + 2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) & (((var_4) ? (((/* implicit */long long int) var_6)) : (var_3)))));
            }
            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) var_0))));
            arr_66 [i_0] = var_5;
        }
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 4; i_20 < 11; i_20 += 2) 
        {
            for (unsigned short i_21 = 2; i_21 < 12; i_21 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_22 = 0; i_22 < 15; i_22 += 2) 
                    {
                        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned short)65529))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((unsigned long long int) var_9))));
                        arr_75 [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))));
                    }
                    var_49 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)228))))))), ((!(var_2)))));
                }
            } 
        } 
        var_50 = ((/* implicit */unsigned int) var_0);
        var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)47), ((unsigned char)255))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (var_0)))) ? (min((var_3), (((/* implicit */long long int) var_6)))) : (max((var_9), (((/* implicit */long long int) var_0))))))));
    }
    var_52 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)33472)))))))));
}
