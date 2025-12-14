/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117910
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
    var_18 = ((/* implicit */long long int) max((((/* implicit */short) var_12)), ((short)-10649)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (var_16)));
                            arr_10 [i_0] [(signed char)8] [(_Bool)1] [i_0] [i_3] = ((_Bool) (~(max((((/* implicit */int) var_4)), (2147483628)))));
                            var_20 ^= ((/* implicit */signed char) ((unsigned int) ((unsigned int) arr_9 [i_2])));
                        }
                    } 
                } 
                var_21 *= ((/* implicit */unsigned int) (_Bool)1);
                var_22 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (signed char)75)), (var_11))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10))))));
            }
        } 
    } 
}
