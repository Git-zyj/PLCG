/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187573
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
    var_11 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) ((max((var_1), (arr_3 [4U] [i_1] [i_1]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((-1195451885) + (2147483647))) >> (((((/* implicit */int) (short)-15915)) + (15929)))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) ^ (var_1)))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((868627227U) <= (arr_5 [i_0] [i_1] [i_1])))), (((((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_10))))) + (((/* implicit */long long int) 868627206U))))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */int) (+(((max((((/* implicit */long long int) 319679709U)), (2591723684690455737LL))) ^ (((/* implicit */long long int) max((319679709U), (var_3))))))));
    var_14 = var_1;
    var_15 = ((/* implicit */unsigned int) (+(min((var_7), (var_0)))));
}
