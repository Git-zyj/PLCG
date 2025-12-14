/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140396
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) var_4)), (max((18446744073709551602ULL), (((/* implicit */unsigned long long int) 1898851104)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_13 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((((unsigned long long int) -2028501283093418791LL)) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86)))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) var_9))))), (max((((/* implicit */unsigned long long int) (short)20970)), (8257093379982483206ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) 0))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_3)))) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) << (((((/* implicit */int) (unsigned char)236)) - (236)))))) ? (((/* implicit */long long int) var_7)) : (((((-2028501283093418791LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (4428)))))))));
                arr_8 [i_1] = ((/* implicit */int) min(((~(arr_4 [i_0] [i_1]))), (((/* implicit */long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))))));
            }
        } 
    } 
}
