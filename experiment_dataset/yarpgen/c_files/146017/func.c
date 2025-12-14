/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146017
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
    var_10 = ((/* implicit */signed char) min((((/* implicit */short) (unsigned char)3)), (var_4)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) min(((-((+(-4842549525115948312LL))))), (((min((4753332058663035241LL), (((/* implicit */long long int) arr_1 [i_0 + 3])))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */short) ((unsigned short) -6868251533326430811LL));
                        arr_10 [i_0] |= ((/* implicit */long long int) arr_8 [i_1 + 1] [i_3] [i_2] [i_3]);
                        arr_11 [(unsigned short)10] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_3])) ? (-4842549525115948296LL) : (max((((long long int) var_6)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_2 + 3] [0])) : (arr_4 [i_0] [i_0 - 2] [i_0 - 2])))))));
                        arr_12 [i_3] [i_3] = ((/* implicit */long long int) ((unsigned short) arr_2 [i_0 + 3]));
                        var_13 = ((unsigned char) min((((/* implicit */unsigned int) ((arr_7 [i_2] [i_2] [i_0]) ^ (arr_8 [i_0] [i_1] [i_2] [i_3])))), ((~(3865389647U)))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = (unsigned short)3338;
    }
    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 2) /* same iter space */
    {
        var_14 += ((/* implicit */unsigned char) ((14336U) << (((((/* implicit */int) (unsigned short)63835)) - (63824)))));
        var_15 *= ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */short) (unsigned char)12)), (((short) var_5)))));
    }
    var_16 = ((/* implicit */int) min((var_16), (max((((var_8) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) var_0))))));
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) arr_14 [13])))));
        arr_21 [i_5] = ((/* implicit */short) arr_8 [(short)14] [(short)14] [(short)14] [i_5]);
    }
    for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
    {
        arr_24 [i_6] [i_6] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_22 [i_6 - 1] [i_6 - 1])) ? (var_8) : (arr_22 [i_6 - 1] [i_6 - 1]))), (min((arr_22 [i_6 - 1] [i_6 - 1]), (((/* implicit */int) var_0))))));
        var_17 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)62197)))) ? (arr_22 [i_6 - 1] [i_6 + 1]) : (arr_22 [i_6] [i_6 - 1]))) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)168)) || (((/* implicit */_Bool) 1992279182)))))));
        arr_25 [i_6] |= min((((/* implicit */int) max((((/* implicit */unsigned short) min((var_4), (((/* implicit */short) arr_23 [i_6]))))), (var_6)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_22 [i_6] [i_6 - 1]) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3799))))) : (((((/* implicit */int) (unsigned short)4972)) & (arr_22 [16] [i_6]))))));
        arr_26 [i_6] &= ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-1)))));
    }
}
