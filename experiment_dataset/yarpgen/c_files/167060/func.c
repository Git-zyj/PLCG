/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167060
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (610868101) : (var_14))) != (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-6)), ((unsigned char)28)))))))));
                var_21 = ((/* implicit */_Bool) 505192600U);
                var_22 = ((/* implicit */int) ((unsigned long long int) arr_6 [i_0] [i_1] [2LL]));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_4);
    var_24 = ((/* implicit */int) var_10);
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (signed char)70))));
}
