/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164359
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
    for (long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
                var_14 |= ((/* implicit */unsigned char) arr_4 [i_0]);
                arr_7 [i_1 - 1] [i_0] [i_0] &= ((/* implicit */short) min((arr_0 [(unsigned short)12]), (((/* implicit */long long int) min((((short) arr_2 [i_0])), (min((((/* implicit */short) var_2)), ((short)-2604))))))));
                arr_8 [i_0 - 1] [i_1] = ((/* implicit */signed char) (short)-2600);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) && ((!(((/* implicit */_Bool) (~(1016073032636194249ULL))))))));
}
