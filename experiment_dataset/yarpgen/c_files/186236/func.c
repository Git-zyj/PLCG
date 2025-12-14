/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186236
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) 3105845770U))))) / (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 4557220698674013018ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1189121526U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49152))) : (167748982U))))))));
                        var_19 ^= ((/* implicit */_Bool) var_7);
                        var_20 = ((/* implicit */unsigned long long int) max((3105845770U), (1189121526U)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2 + 1] = ((signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                        var_21 -= ((/* implicit */unsigned char) ((var_12) ? (max((var_1), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)15548), (((/* implicit */unsigned short) (short)2047))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 3; i_5 < 13; i_5 += 2) 
                        {
                            arr_18 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1073741823U)), (0ULL)))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) (!((_Bool)1))))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [(short)9] [i_4] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (12861995212989967298ULL)))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 22ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9711390274137493844ULL)));
                            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_16))))));
                        }
                        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) var_14))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_6] [i_6] [(unsigned char)6] [(_Bool)1] [(short)0] [(unsigned char)12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_16)))))));
                            arr_23 [i_2] [i_0] [i_2] [i_2 + 1] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (max((((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_4))))), (var_6)))));
                            var_25 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_15)))));
                        }
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1)))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_4)))))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 1; i_8 < 13; i_8 += 3) 
                    {
                        var_28 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9711390274137493844ULL)))) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (var_1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-80), (((/* implicit */signed char) var_14)))))) > (((((/* implicit */_Bool) var_8)) ? (3105845770U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (signed char)-51))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) : (18446744073709551615ULL)))) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-91)) : ((-2147483647 - 1)))), (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) : (((/* implicit */int) var_10))));
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_31 = ((/* implicit */signed char) var_5);
                            arr_33 [i_0 - 2] [i_8 + 1] [i_0] [i_8 - 1] [i_9] [i_9] [i_8 + 1] = min((((/* implicit */unsigned long long int) (-(1637139516)))), (((((/* implicit */_Bool) 718389365U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_2))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!((_Bool)1))) ? ((~(10623996992955801508ULL))) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */int) ((signed char) 2947092676449246457ULL))) : ((~(((/* implicit */int) ((signed char) (signed char)9))))))))));
                            arr_34 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (2537592442U))) ? ((((_Bool)1) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned short)48571)))))))) ? (18446744073709551615ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) / (((18446744073709551606ULL) - (var_1)))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) == (var_7))))))));
                            arr_38 [i_0] [i_10] = ((/* implicit */_Bool) 30ULL);
                            var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((30ULL), (var_2))))));
                            var_35 = ((/* implicit */unsigned int) ((((_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) max((var_5), ((_Bool)0)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)-124))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_36 -= ((/* implicit */signed char) var_12);
                            var_37 = ((/* implicit */_Bool) min((var_37), ((_Bool)1)));
                        }
                    }
                    arr_42 [i_2 + 1] [i_2 + 1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3660315381U)) ? (-2147483647) : (((/* implicit */int) var_16))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)95))))))) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_12 = 1; i_12 < 12; i_12 += 1) 
    {
        for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_58 [i_13] [i_15] [i_14] [11] [i_13] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((_Bool) var_2))), (max(((unsigned short)28465), (((/* implicit */unsigned short) (unsigned char)37))))));
                                var_38 = ((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned char) (_Bool)0))));
                            }
                        } 
                    } 
                } 
                arr_59 [i_13] = ((/* implicit */_Bool) 8628611080135301660LL);
                var_39 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned short)21097))) == (((/* implicit */int) (signed char)(-127 - 1))))));
            }
        } 
    } 
}
