/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153667
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
    var_20 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) var_17)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1 + 3] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_5 [i_0])))) << ((((+(((/* implicit */int) arr_5 [i_0])))) - (3587)))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_1 [i_0] [i_1]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_11);
}
