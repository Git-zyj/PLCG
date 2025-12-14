/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11106
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_11 |= ((/* implicit */unsigned int) ((long long int) (~(var_5))));
                        var_12 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)103)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))) : (var_7)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                    {
                        for (int i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            {
                                arr_19 [(signed char)17] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)-106)) ? (8912899438648172969LL) : (-7539462791773087311LL)))));
                                var_13 = ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((int) var_3))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (var_9))))))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_10))));
                            }
                        } 
                    } 
                    var_16 = ((long long int) var_9);
                    /* LoopSeq 4 */
                    for (long long int i_8 = 4; i_8 < 18; i_8 += 2) 
                    {
                        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) >> (((min((((/* implicit */long long int) (signed char)-97)), (var_9))) + (6991467858786859095LL)))))) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)89), (var_6))))) : (min((((/* implicit */long long int) var_4)), (5191679276181445473LL)))))));
                        var_18 = ((/* implicit */long long int) (signed char)105);
                    }
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))), ((+(((/* implicit */int) (signed char)-94))))))));
                        arr_31 [i_2] [(unsigned short)16] [i_2] [i_9] = ((/* implicit */short) ((long long int) (((-(var_7))) - (((/* implicit */long long int) ((/* implicit */int) min((var_0), (var_8))))))));
                    }
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
                    {
                        var_20 *= ((/* implicit */unsigned long long int) var_6);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3182))))) : (((/* implicit */int) max((var_0), (min((var_10), (var_6))))))));
                        var_22 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-104)), ((unsigned char)181)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_1)) : (var_7))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)12006))))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((var_8), (var_6)))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6581419664205883473LL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (1543226403U) : (4294967295U)))) : (((long long int) (signed char)-106))))));
                        var_24 ^= ((/* implicit */unsigned int) var_2);
                        arr_37 [i_0] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-90)))), (((/* implicit */int) var_0))))) ? (min((min((4294967295U), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)1024))))))) : (min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) 8126464)) : (var_3)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_12 = 0; i_12 < 13; i_12 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)36562)) ? ((+(min((var_1), (((/* implicit */unsigned int) var_2)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-127)) && (((/* implicit */_Bool) var_8)))))) : (var_5)))));
        var_26 *= ((/* implicit */signed char) var_1);
        var_27 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)7)))) : (((/* implicit */int) var_10))))));
    }
}
