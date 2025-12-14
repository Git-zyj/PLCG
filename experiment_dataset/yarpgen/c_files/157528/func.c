/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157528
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
    var_13 = ((/* implicit */unsigned int) (_Bool)1);
    var_14 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((arr_2 [i_0 - 1]) != (arr_2 [i_0 - 1]))) ? (max((((/* implicit */long long int) (short)-9254)), (-6605085565861084001LL))) : (((/* implicit */long long int) arr_2 [i_0 + 1]))));
                    var_15 = var_2;
                    var_16 ^= ((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((short) var_6)))))));
                    var_17 = ((/* implicit */_Bool) ((((arr_5 [i_0]) | (arr_5 [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_18 &= ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((min((4122838453U), (((/* implicit */unsigned int) var_6)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
}
