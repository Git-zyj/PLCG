/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120025
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
    var_15 ^= ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) var_10)))))) % (((306193797009145507ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_6 [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((((2972398330550746062LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((18446744073709551599ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) != (((/* implicit */int) ((((/* implicit */int) (short)-27647)) <= (-434323818))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */int) var_5)) < (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) var_12)))))))));
}
