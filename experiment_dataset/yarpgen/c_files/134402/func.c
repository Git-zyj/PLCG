/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134402
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
    var_18 = ((/* implicit */_Bool) var_0);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1668475533)) || (((/* implicit */_Bool) 1668475520))));
    var_20 = ((/* implicit */signed char) (+((-(-1668475520)))));
    var_21 = ((/* implicit */unsigned long long int) (-(var_16)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [21] = ((/* implicit */short) 321187218);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 4503599627370495ULL)) ? (((/* implicit */unsigned long long int) 319605935U)) : (4503599627370482ULL)));
                arr_6 [i_1] [(unsigned short)5] [i_1] = ((/* implicit */unsigned long long int) (-((-(((arr_3 [i_1] [i_0] [i_0]) / (arr_3 [12LL] [i_1] [i_1])))))));
            }
        } 
    } 
}
