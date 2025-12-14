/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_10;
    var_12 = (!var_4);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [1] = ((-(((198 && (-32767 - 1))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [1] = var_8;
            arr_8 [i_0] [i_0 + 1] [i_0 + 1] = 12920;
            var_13 = var_1;
        }
        arr_9 [i_0 + 1] = (((var_0 / var_5) / 5354743533027059598));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_17 [i_4] [i_3] = var_10;
                    var_14 = var_7;
                }
            }
        }
        arr_18 [i_2] = var_10;
        var_15 = max((max((var_6 * var_9), (var_0 | var_3))), ((((var_6 != var_9) % var_7))));
    }
    #pragma endscop
}
