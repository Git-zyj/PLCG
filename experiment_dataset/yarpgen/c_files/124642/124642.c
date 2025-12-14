/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [11] [i_1] = min((max(510, 31)), (arr_0 [i_0]));
                var_14 = min((!var_4), (min(510, 13383)));
            }
        }
    }
    var_15 = (var_3 / var_5);
    var_16 = ((((var_12 ? var_2 : ((var_10 ? var_0 : 509)))) * (max(((19420 ? 32767 : var_1)), ((var_10 ? var_11 : var_1))))));
    var_17 &= (min(var_9, ((27393 | ((var_10 ? var_10 : 25002))))));
    #pragma endscop
}
