/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123883
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
    var_16 ^= ((/* implicit */unsigned int) (unsigned short)11614);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (arr_0 [3] [i_0]))) ? (0U) : (534773760U));
        var_18 = ((/* implicit */unsigned int) (+(((268435455ULL) | (((/* implicit */unsigned long long int) 0U))))));
        var_19 = ((/* implicit */short) var_2);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)61565))));
                    var_21 ^= ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (short)29260)), (((((/* implicit */_Bool) 560750930165760LL)) ? (-2LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61565)))))))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */int) var_13)))))) ^ (((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */long long int) var_10)) : (arr_4 [i_3 + 1])))));
        var_24 = ((/* implicit */int) ((min((arr_8 [i_3 - 1]), (((/* implicit */long long int) var_14)))) | (((/* implicit */long long int) arr_1 [i_3] [(short)11]))));
    }
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */short) 1LL);
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61565)) ? (((/* implicit */int) (short)-29252)) : (((/* implicit */int) (short)-26047))))) ? ((-(((/* implicit */int) arr_12 [i_4])))) : (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (short)-26047)))))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (((arr_5 [i_4] [i_4] [i_4]) ^ (arr_8 [i_4])))));
        var_28 = ((/* implicit */short) 0LL);
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_2 [i_5]))));
        var_30 = ((/* implicit */long long int) (-((~(arr_6 [i_5] [i_5] [i_5])))));
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((((/* implicit */_Bool) var_4)) ? (19LL) : (((/* implicit */long long int) 0)))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)29260)))))));
        var_32 &= ((/* implicit */unsigned short) (-(arr_1 [i_5] [i_5])));
    }
}
