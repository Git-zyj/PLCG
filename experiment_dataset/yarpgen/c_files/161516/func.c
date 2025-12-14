/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161516
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
    var_13 = ((/* implicit */unsigned long long int) (unsigned char)79);
    var_14 = ((/* implicit */unsigned long long int) var_11);
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) ((signed char) 12421006599723268980ULL)))))) ? (max((16106601792361625234ULL), (6025737473986282643ULL))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 6025737473986282655ULL)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (short)-24716)))), (((/* implicit */int) (short)-24709)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((18446744073709551611ULL), (6025737473986282636ULL)));
                var_17 -= min((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */short) (signed char)92))))), (11442609796585144141ULL));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_6))));
                arr_4 [i_1] [i_1] = ((unsigned short) (unsigned char)29);
                var_19 *= ((/* implicit */unsigned long long int) (unsigned char)238);
            }
        } 
    } 
}
