/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187187
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
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) (-(-1LL)));
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_4))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (((-(var_8))) & (((/* implicit */int) (((+(var_0))) != (min((((/* implicit */unsigned int) var_8)), (var_0))))))));
    var_14 = ((/* implicit */short) ((unsigned short) var_6));
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((long long int) var_0)) & (var_10))))));
}
