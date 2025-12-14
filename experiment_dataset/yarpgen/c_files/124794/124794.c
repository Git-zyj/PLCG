/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (~var_15);
                arr_7 [i_0] = ((((192 << (((arr_4 [i_0]) - 5578710928080151515)))) * (max(var_18, var_15))));
                arr_8 [i_0] = (arr_4 [i_0]);
                arr_9 [i_0] [i_0] = ((-(arr_4 [i_0])));
            }
        }
    }
    var_20 = var_2;
    var_21 = var_11;
    #pragma endscop
}
