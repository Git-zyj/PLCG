/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175467
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
    var_12 += var_1;
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */long long int) var_0);
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_3 [i_0] [i_0]))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) : (-7377286867770982140LL)));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) -1587347625428533935LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((-(((var_10) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
}
