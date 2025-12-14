/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((((12 ? var_1 : var_7)))), var_12));
    var_19 = ((var_3 ? var_8 : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [10] [i_2] = 3847513632976525091;
                    var_20 = (min((min((~1), (arr_3 [9]))), 188));
                    var_21 = (max(var_21, (~2624425275078468511)));
                    var_22 = (min(var_22, (((!((max(1, (arr_7 [15] [i_1 - 1] [i_1 - 1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
