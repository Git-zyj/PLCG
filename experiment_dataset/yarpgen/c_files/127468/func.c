/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127468
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
    var_17 = ((/* implicit */unsigned int) ((min((min((((/* implicit */long long int) (short)-31600)), (var_3))), (((/* implicit */long long int) (signed char)(-127 - 1))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)896)))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) -1361557773))));
    var_19 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_15)), (((2701349621U) & (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((var_11), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 - 3]))))))))) <= (min((((/* implicit */long long int) (-(((/* implicit */int) var_16))))), (((arr_2 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-((-(max((((/* implicit */unsigned int) (unsigned short)480)), (1593617674U))))))))));
                    var_22 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_15)) & (((/* implicit */int) arr_0 [i_1 - 1])))), (((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
}
