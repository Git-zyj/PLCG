/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117921
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
    var_13 = ((/* implicit */unsigned char) ((_Bool) 3728925567U));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((arr_5 [i_0]), (arr_5 [i_0])))), (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
                var_15 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) arr_1 [i_0])))));
                var_16 = ((/* implicit */unsigned long long int) min((var_0), (arr_2 [i_0] [i_0])));
            }
        } 
    } 
}
