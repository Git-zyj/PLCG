/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181672
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
    var_17 &= ((/* implicit */int) (+(var_7)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) arr_5 [(_Bool)1] [i_1] [i_1])), (var_4)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned int) var_16);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((var_13), (((/* implicit */unsigned int) var_8))));
                                arr_13 [(short)2] [i_0] [i_1] [i_3] [i_1] [i_2] = ((/* implicit */int) (((~((+(arr_7 [6U] [(short)11] [i_2 + 2] [i_0] [i_4]))))) + (((/* implicit */unsigned int) (+(((arr_1 [i_0]) / (((/* implicit */int) (_Bool)1)))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) (+(380124865U)))) : (((((/* implicit */_Bool) (short)29233)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (signed char)13))))) : (140736951484416LL)))));
                                var_22 &= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_16)), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_1]))) ^ (arr_0 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */short) (+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))));
                        var_24 *= ((/* implicit */_Bool) (~(min(((~(783896744U))), (var_14)))));
                        arr_16 [i_5] [i_2 + 3] [i_1] [i_5] |= ((/* implicit */unsigned long long int) arr_15 [i_2] [i_1] [(unsigned char)0]);
                    }
                }
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        var_25 ^= var_5;
        arr_20 [i_6] = ((/* implicit */unsigned short) (short)31887);
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42199))) : (var_1)))) ? (((((/* implicit */_Bool) arr_18 [i_6])) ? (var_2) : (arr_18 [i_6]))) : (0)))) ? (((((/* implicit */_Bool) arr_19 [i_6])) ? (((var_7) & (((/* implicit */unsigned int) arr_18 [i_6])))) : (((var_14) | (((/* implicit */unsigned int) var_12)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
        arr_21 [i_6] [i_6] = ((/* implicit */short) max((((/* implicit */int) (unsigned short)65517)), (((((/* implicit */_Bool) arr_18 [i_6])) ? (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_17 [i_6]))))));
        var_27 = ((/* implicit */_Bool) max((1835439089U), (((/* implicit */unsigned int) (short)2990))));
    }
    /* vectorizable */
    for (signed char i_7 = 1; i_7 < 21; i_7 += 2) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) arr_23 [i_7] [i_7]))))) ? (((((/* implicit */_Bool) -2097152)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_23 [i_7] [i_7])))) : (((/* implicit */int) var_0))));
        var_28 += ((/* implicit */long long int) (_Bool)1);
    }
}
