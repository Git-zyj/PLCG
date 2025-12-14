/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152666
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)184)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) (signed char)-70))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))))) : (10544032271220043995ULL)))));
                arr_4 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)69)), (max((var_10), (((/* implicit */short) (signed char)71)))))))) / (((((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (-(1616530117)));
}
