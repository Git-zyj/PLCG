/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_4));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((2303591209400008704 ? 1 : 2303591209400008687)) + -2303591209400008688));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [11] [i_0] [i_0 - 1] = (((arr_1 [i_0 - 1] [i_0]) ? ((26 ? (arr_6 [i_2] [i_0] [i_0] [i_0]) : 29)) : (!1)));
                    var_15 = (max(var_15, ((var_4 && (arr_1 [18] [8])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_16 = (min(var_16, (((var_3 ? var_0 : -82)))));
                    var_17 = ((1 >> (((var_10 | var_9) + 8846915279802214506))));
                }
            }
        }
        var_18 = 15746255224973638240;
    }
    var_19 = (-2303591209400008702 % -94);
    #pragma endscop
}
