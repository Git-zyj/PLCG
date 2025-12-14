/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 &= var_2;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 |= 19041;
        var_14 = var_2;
        var_15 = (26508 > -4336);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 -= var_7;
                    arr_6 [i_1] [10] = -20042;
                }
            }
        }
        var_17 = (((((-1682 ? var_4 : 60))) || ((max(12528, var_6)))));
    }
    var_18 = ((((((min(var_2, var_5))) ? ((var_3 ? 16128 : var_9)) : ((var_1 ? var_8 : var_2)))) * ((((30684 >= 60) <= ((8 ? var_9 : 32767)))))));
    #pragma endscop
}
