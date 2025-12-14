/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137159
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
    var_16 = ((/* implicit */long long int) 2148100278U);
    var_17 &= ((/* implicit */unsigned short) var_7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((-397208929) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (42977)))))) : (1588164168U)));
        var_18 &= ((/* implicit */_Bool) var_15);
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0]))));
        var_19 |= ((/* implicit */unsigned int) ((unsigned char) 3352893292U));
        var_20 = ((/* implicit */long long int) arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1588164168U)) ? (14522150401019904120ULL) : (((/* implicit */unsigned long long int) arr_6 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 70368744175616LL)))) : (min((var_14), (((/* implicit */long long int) arr_0 [i_1] [8U])))));
        var_21 = ((/* implicit */int) min((arr_5 [i_1]), (((/* implicit */unsigned long long int) (signed char)125))));
        var_22 = ((/* implicit */unsigned char) max((1111693803), (((/* implicit */int) (unsigned short)4554))));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) arr_2 [7]);
        var_24 = ((/* implicit */unsigned char) (-(var_9)));
    }
    for (int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            arr_15 [(unsigned short)11] = ((/* implicit */unsigned char) (_Bool)0);
            arr_16 [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_12 [i_4 - 1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246)))));
            var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14522150401019904120ULL)) ? (((long long int) 2481994732U)) : (((long long int) var_2))));
        }
        arr_17 [i_3] = ((/* implicit */long long int) max((var_13), (((/* implicit */unsigned long long int) var_1))));
    }
}
