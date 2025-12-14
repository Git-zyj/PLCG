/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171405
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
    var_13 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (+(max((((/* implicit */int) ((-1140484807) > (((/* implicit */int) arr_1 [i_1]))))), (-1140484813)))));
                arr_4 [8U] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) -1140484820)) ? (2147483647) : (((/* implicit */int) (short)-30341))))));
                var_15 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_2 [i_1])))), (((((/* implicit */int) arr_2 [i_0 - 3])) & (var_3)))));
            }
        } 
    } 
}
