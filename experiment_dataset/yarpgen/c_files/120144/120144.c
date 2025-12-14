/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (!127)));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = 2147483647;
                    var_14 = (max((max((!var_8), var_2)), ((4294967162 ? var_7 : 7))));
                    arr_10 [i_0] [11] [i_2] [11] = var_5;
                }
            }
        }
    }
    var_15 = var_5;
    #pragma endscop
}
