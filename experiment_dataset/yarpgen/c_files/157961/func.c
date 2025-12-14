/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157961
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (((((/* implicit */_Bool) (unsigned char)27)) ? (31457280U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)967)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                var_14 = ((/* implicit */long long int) ((short) arr_0 [i_1] [i_1]));
                var_15 |= ((/* implicit */long long int) ((int) min(((+(((/* implicit */int) (unsigned short)967)))), (((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_0]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_4);
}
