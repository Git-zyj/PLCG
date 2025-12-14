/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179107
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) 2147483647)))));
                arr_5 [11U] [(_Bool)1] [7] = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-14)), (-826230288))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)152)) ^ (-1935022835))), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) % (var_9))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30344)))))))))));
}
