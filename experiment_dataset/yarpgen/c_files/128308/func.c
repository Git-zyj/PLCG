/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128308
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_17 = 1970324836974592LL;
                var_18 &= ((/* implicit */long long int) arr_3 [i_0] [i_0]);
            }
        } 
    } 
    var_19 -= ((/* implicit */_Bool) ((signed char) var_10));
    var_20 *= ((/* implicit */short) ((((/* implicit */int) min((var_5), (var_5)))) == (var_1)));
    var_21 ^= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (unsigned short)16206)), (8592082377283584963LL))), (-8132056719386226870LL)));
}
