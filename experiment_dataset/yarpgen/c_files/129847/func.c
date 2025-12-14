/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129847
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
    var_19 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_1]);
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_1 [i_1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-30488)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) var_5))));
    var_22 = ((int) ((((/* implicit */_Bool) ((int) 18446744073709551615ULL))) ? (17565422205250330387ULL) : (((/* implicit */unsigned long long int) 67108352))));
}
