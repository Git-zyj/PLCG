/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102598
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0 + 4] = ((/* implicit */unsigned long long int) var_10);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) min((arr_2 [i_3 - 1]), (((/* implicit */unsigned long long int) min(((-(arr_4 [i_0] [i_0] [i_2]))), (((/* implicit */long long int) var_5)))))));
                            var_15 = ((/* implicit */unsigned char) 2510825550U);
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                var_17 ^= ((/* implicit */unsigned char) min((arr_7 [i_0 + 2]), (((/* implicit */long long int) var_3))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (4294967274U) : (2707737543U)));
    var_19 = ((/* implicit */unsigned char) var_0);
    var_20 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_5)), (1495708685U)))));
}
