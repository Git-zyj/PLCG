/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107967
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
    var_12 = ((/* implicit */signed char) (((_Bool)0) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((unsigned long long int) min((((unsigned int) var_11)), (((/* implicit */unsigned int) var_10))));
                var_14 ^= ((/* implicit */short) min(((+(((/* implicit */int) var_10)))), (((((/* implicit */int) (unsigned short)0)) << (((-1571962225) + (1571962246)))))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)4754), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4096)) && (((/* implicit */_Bool) var_2)))))))) << (((2713738367421025641ULL) - (2713738367421025639ULL))))))));
                arr_4 [i_1] = ((((/* implicit */int) ((short) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_1 [i_0] [(_Bool)1])))))) >= ((~((-2147483647 - 1)))));
                var_16 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((var_1) ^ ((-(391410666U))))))));
}
