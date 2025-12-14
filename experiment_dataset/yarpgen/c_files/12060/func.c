/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12060
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
    var_17 = ((/* implicit */short) ((var_10) % (min((var_10), (((/* implicit */long long int) min((var_9), (((/* implicit */short) var_15)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) ((unsigned long long int) 2147483647));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((short) ((((/* implicit */int) max(((signed char)106), ((signed char)-1)))) >> (((/* implicit */int) (signed char)17))))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */long long int) var_2);
}
