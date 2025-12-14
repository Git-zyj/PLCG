/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144905
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) arr_0 [i_0]);
                    arr_8 [i_1] [i_1] [i_1] = 3972316496852615565LL;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (var_3)));
    var_19 = ((/* implicit */unsigned short) ((int) ((short) var_4)));
}
