/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130726
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0 + 1] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((_Bool) var_8));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((var_2), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_2 [i_0 + 3] [12LL])), ((unsigned short)37585)))))))));
        var_15 ^= ((/* implicit */int) var_6);
        var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned short)58751)) : (((/* implicit */int) (unsigned short)37560))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)27953)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535))))), (min((var_12), (var_12)))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) var_8))), ((-(((/* implicit */int) arr_5 [i_1]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */int) arr_1 [i_1]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [i_1] [i_2] [i_2]) >> (((((/* implicit */int) (unsigned short)37595)) - (37578)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27982)))))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27976))) : (arr_1 [i_1])))) ? (3550060906U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2)))));
                    arr_18 [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) (unsigned short)27950);
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_19 *= ((/* implicit */unsigned char) (-(var_2)));
                        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) 268427264)) : (var_1)));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)37583)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (unsigned short)37573)) : ((+(var_9))))))));
                        arr_21 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_4])))));
                    }
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_24 [i_1] [i_2] [i_3] [i_6] |= ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                    arr_25 [i_1] [i_1] [i_6] [i_6] |= ((/* implicit */_Bool) arr_3 [i_3] [i_3]);
                }
                var_22 = ((/* implicit */unsigned char) (-(((int) 9223372036854775807LL))));
            }
            for (int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) % (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34521))) : (((((/* implicit */_Bool) arr_9 [i_8] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27949))) : (var_2)))));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((var_9) >= (((/* implicit */int) (unsigned short)37587)))))));
                }
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    arr_36 [i_9] [i_9] [i_7] [i_2] [i_9] [i_1] = ((/* implicit */_Bool) (unsigned short)37544);
                    var_25 = (unsigned short)27966;
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((int) arr_30 [i_7] [i_1 + 3] [i_1 + 1])))));
                    arr_37 [i_1 + 3] [i_1] [i_2] [i_9] [i_7] [i_7] = ((_Bool) ((int) var_10));
                    var_27 = ((/* implicit */unsigned short) (~((~(arr_16 [i_9] [i_9] [i_9] [i_9] [i_1])))));
                }
                for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((unsigned long long int) arr_15 [i_1] [i_1] [i_7])))));
                    arr_40 [i_1] [i_2] [i_10] = ((/* implicit */unsigned short) (_Bool)1);
                }
                arr_41 [i_1] |= ((/* implicit */long long int) ((_Bool) 1029138611U));
            }
            for (int i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
            {
                arr_44 [i_1] [i_11] [i_1 - 1] [i_1 + 3] = ((((/* implicit */_Bool) 4611686001247518720ULL)) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1])) : (2147483647));
                var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
            }
            arr_45 [i_1] [i_2] [i_2] &= ((/* implicit */_Bool) ((((_Bool) var_5)) ? (((/* implicit */int) var_11)) : (var_8)));
        }
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            arr_49 [i_1] = ((/* implicit */unsigned long long int) ((long long int) (-((+(var_2))))));
            /* LoopSeq 2 */
            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_14 = 2; i_14 < 13; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        {
                            arr_61 [i_15] [i_14 - 2] [i_13] [i_12] [i_12] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)240)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)20518)) : (((/* implicit */int) arr_6 [i_1 + 3]))))));
                            var_30 = ((/* implicit */unsigned short) (+(var_0)));
                        }
                    } 
                } 
                arr_62 [i_1] [i_12] = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1] [i_12] [i_13]))))))), (((/* implicit */long long int) arr_23 [i_1 - 1] [i_1 - 1] [i_12] [i_12] [i_12] [i_12]))));
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 15; i_16 += 3) 
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)27953))))) : ((~(min((var_6), (((/* implicit */unsigned long long int) (signed char)-113))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)37585))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))));
                        var_33 ^= (unsigned short)24743;
                    }
                    for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-1)) : ((((_Bool)0) ? (arr_65 [i_1 + 2] [i_1 + 2] [i_1 + 2] [(_Bool)1]) : (((/* implicit */int) (_Bool)1))))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)7)) ^ (var_8)))), (var_13))) : ((~(max((((/* implicit */long long int) (unsigned short)37572)), (8876489087098538324LL))))))))));
                        var_35 = ((/* implicit */int) (+((~(var_2)))));
                        var_36 &= ((/* implicit */unsigned short) ((((_Bool) max(((unsigned short)46851), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38888))))) : (((/* implicit */int) (short)12584))));
                    }
                }
            }
            for (unsigned int i_19 = 0; i_19 < 15; i_19 += 3) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_23 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 2]), (arr_23 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 2]))))));
                var_38 = ((/* implicit */unsigned short) (((((~(var_3))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))))) ? ((+(var_2))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65508)) : ((-2147483647 - 1)))))));
            }
            var_39 += (((+(((((/* implicit */_Bool) arr_50 [i_1] [i_12] [i_1 + 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27942))) : (var_2))))) | (((/* implicit */long long int) ((1048448U) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_10 [i_12] [i_12] [i_1]))))))));
        }
        for (unsigned char i_20 = 4; i_20 < 14; i_20 += 1) 
        {
            arr_78 [i_20 - 4] [i_1 - 1] = ((/* implicit */_Bool) (+(var_9)));
            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) 2217543027697373603LL))));
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 15; i_21 += 1) 
            {
                for (short i_22 = 0; i_22 < 15; i_22 += 2) 
                {
                    for (unsigned char i_23 = 0; i_23 < 15; i_23 += 2) 
                    {
                        {
                            arr_87 [i_1 + 3] [i_20] [i_21] [i_22] [i_22] [i_23] = min((((/* implicit */long long int) var_5)), (var_13));
                            arr_88 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned short) var_11)), (arr_84 [i_1 + 3] [i_1 + 1]))));
                            arr_89 [i_1 - 1] [i_20] [i_21] [i_21] [i_21] [i_22] [i_23] &= (+(min((((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))), (((-1385073400) + (2147483631))))));
                            var_41 = ((/* implicit */short) var_5);
                        }
                    } 
                } 
            } 
        }
        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)12584))))), (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)48))))))) ? (((/* implicit */int) max((((/* implicit */signed char) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38402)))))), ((signed char)16)))) : ((~(((int) (signed char)60))))));
        arr_90 [i_1 + 1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(1048448U)))), (arr_28 [i_1 + 2])));
    }
    var_43 = (-(min((min((var_10), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_9) : (((/* implicit */int) var_5))))))));
    var_44 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (((4293918866U) / (((/* implicit */unsigned int) -1441217552))))))), (((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)11))))) : (var_1)))));
}
