/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105954
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_10))));
    var_14 |= ((/* implicit */unsigned char) ((unsigned short) var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) 524287);
                    var_16 = (((((~(arr_4 [i_0]))) * (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_8))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)90)) >> (0U)))));
                    var_17 *= max(((-((~(2060626416U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_0 [8ULL])))))));
                    var_18 &= ((/* implicit */signed char) var_7);
                }
            } 
        } 
    } 
    var_19 = var_3;
}
