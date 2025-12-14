/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130015
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_1);
        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(signed char)10])) ? (arr_0 [(unsigned short)4]) : (arr_0 [(unsigned char)10])));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])) + (arr_6 [i_2] [i_1] [(short)5])));
                var_17 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
            }
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
            {
                var_18 = ((((/* implicit */_Bool) (unsigned short)42757)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2118941149U)));
                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (((long long int) var_8))));
            }
            arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_14))));
        }
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))));
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) arr_18 [i_5]);
            arr_19 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(7113892685999345952LL)));
            var_22 = ((/* implicit */unsigned short) arr_16 [i_5]);
            var_23 = ((/* implicit */unsigned int) var_0);
            arr_20 [i_5] [i_4] [i_5] = ((((/* implicit */unsigned int) var_0)) - (((((/* implicit */_Bool) var_11)) ? (958424871U) : (958424861U))));
        }
        var_24 = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_4] [i_4]))));
    }
    for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        var_25 = ((/* implicit */int) arr_22 [i_6]);
        arr_23 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_6])) ? (arr_15 [i_6] [i_6]) : (arr_15 [i_6] [i_6])))) ? (((((/* implicit */_Bool) 958424871U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_17 [2LL] [i_6])))) : (((/* implicit */int) (signed char)62))));
        arr_24 [i_6] = ((/* implicit */int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))), (((((/* implicit */_Bool) arr_15 [i_6] [i_6])) ? (var_4) : (arr_15 [i_6] [i_6])))));
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_5))));
}
