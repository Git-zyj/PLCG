/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154935
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
    var_16 = ((/* implicit */unsigned char) 9223372036854775807LL);
    var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / ((~(((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = max(((~(9223372036854775807LL))), (((/* implicit */long long int) (~(((/* implicit */int) ((short) (-9223372036854775807LL - 1LL))))))));
                var_19 = max((((max((arr_3 [i_1]), (((/* implicit */long long int) arr_5 [i_0] [i_0])))) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1 - 1]))))), (((/* implicit */long long int) arr_5 [i_0] [9LL])));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) ^ (9223372036854775807LL))) ^ (((/* implicit */long long int) var_3)))));
}
