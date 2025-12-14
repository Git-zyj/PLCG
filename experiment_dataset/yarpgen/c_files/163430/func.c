/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163430
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
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (var_2))), (((/* implicit */unsigned long long int) (~(var_8))))));
                            arr_9 [i_1 + 1] [i_1] [i_1] [i_0] = ((/* implicit */int) min((var_2), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_18), (((/* implicit */int) var_15))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_0)), (var_5)))), (min((var_14), (((/* implicit */unsigned long long int) var_16))))))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min(((~(min((((/* implicit */int) var_6)), (var_7))))), (max((((/* implicit */int) var_0)), (min((var_4), (var_9))))))))));
                arr_10 [i_1] = var_10;
            }
        } 
    } 
    var_23 ^= (+(min((min((var_17), (((/* implicit */int) var_19)))), (max((var_16), (var_18))))));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(max((min((var_8), (((/* implicit */int) var_11)))), (min((var_17), (((/* implicit */int) var_0)))))))))));
}
