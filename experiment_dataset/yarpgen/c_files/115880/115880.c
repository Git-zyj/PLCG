/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_15 ? (var_10 << var_11) : var_19)));
    var_21 = (50017 <= 15503);
    var_22 = ((var_15 ? var_13 : (-4233692777374585648 <= var_1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_23 = (-23964 * 65535);
                var_24 = 1;
                var_25 = ((-23973 > (((50015 <= 2787557982325744212) ? 2452 : (min(-2787557982325744193, -2787557982325744212))))));
                arr_6 [i_0] [i_0] [i_1] = var_10;
            }
        }
    }
    #pragma endscop
}
