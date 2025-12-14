/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 = (1668475533 || 1668475520);
    var_20 = 1668475520;
    var_21 = -var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [21] = 321187218;
                arr_5 [i_0] [i_1] [i_1] = ((4503599627370495 ? 319605935 : 4503599627370482));
                arr_6 [i_1] [5] [i_1] = ((-((-(((arr_3 [i_1] [i_0] [i_0]) / (arr_3 [12] [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
