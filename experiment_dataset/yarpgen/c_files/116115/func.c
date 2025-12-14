/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116115
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45432)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) ? (var_1) : (((/* implicit */unsigned long long int) var_12)));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                arr_8 [i_0] [i_0] = ((/* implicit */short) (unsigned short)4);
                var_20 = ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_11));
                var_21 -= ((/* implicit */short) var_0);
                var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) var_14))));
                var_23 *= ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
            }
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                var_24 = var_5;
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243)))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29))) : ((-9223372036854775807LL - 1LL))));
                        }
                    } 
                } 
                var_27 -= ((/* implicit */signed char) ((var_3) ? (-1037951336719234017LL) : (var_16)));
            }
        }
    }
    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) var_1);
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (signed char i_8 = 3; i_8 < 20; i_8 += 3) 
            {
                {
                    arr_29 [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) max((var_2), (((/* implicit */short) var_13))));
                    var_29 = ((/* implicit */int) (+((-(var_11)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_30 += ((/* implicit */unsigned long long int) (unsigned short)9);
                        arr_34 [i_6] [(_Bool)1] [i_7] = ((/* implicit */unsigned char) var_18);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 21; i_11 += 4) 
                        {
                            {
                                var_31 ^= ((/* implicit */unsigned int) (-(min((max((((/* implicit */int) var_13)), (-2147483641))), (((/* implicit */int) (unsigned char)21))))));
                                var_32 = ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                    var_33 ^= var_4;
                }
            } 
        } 
        var_34 = ((/* implicit */int) (+(min((((/* implicit */long long int) 2147483647)), (11LL)))));
        arr_41 [i_6] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_11))))));
        var_35 -= ((/* implicit */short) var_15);
    }
    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        var_36 += ((/* implicit */unsigned int) var_8);
        arr_44 [(short)11] = ((/* implicit */_Bool) min((var_8), (((((/* implicit */_Bool) 804267409)) ? (((/* implicit */long long int) var_0)) : (var_11)))));
    }
    var_37 &= var_6;
}
