/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101869
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
    var_13 ^= ((/* implicit */unsigned long long int) min((2147483646), (-682274132)));
    var_14 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1 + 2] [i_1] &= ((/* implicit */unsigned int) arr_1 [i_1]);
                arr_6 [i_0] [i_1] [(short)3] = ((/* implicit */short) var_7);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (+(-682274144)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((682274132), (((/* implicit */int) (unsigned short)53462))))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_8 [i_3])) : (var_3))))))))))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (max((var_7), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
