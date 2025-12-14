/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 *= var_11;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_14 = (arr_6 [i_2] [0]);
                        var_15 = ((!(((((arr_7 [i_0] [10]) % var_6))))));
                        arr_13 [i_0] [i_0] [i_0] [i_2] = (((((3432387567 ? -815386201 : (arr_0 [i_2 + 1])))) ? 232 : (--6716155919455540664)));
                    }
                }
            }
        }
        arr_14 [5] = (((((-(arr_8 [i_0])))) ? (((!var_3) & ((-(arr_3 [i_0]))))) : ((max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0]))))));
        arr_15 [12] [6] = (min(((((max((arr_10 [i_0] [8] [i_0]), -91))) ? var_6 : (arr_8 [i_0]))), (((arr_10 [i_0] [i_0] [i_0]) / (arr_10 [6] [i_0] [1])))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_16 = (arr_7 [i_4] [i_4]);
        arr_19 [i_4] [12] = ((((max(((0 ? -4696525948138947485 : 32746)), 1384947870705579090))) ? (arr_9 [6] [6] [i_4] [i_4]) : ((min(8, (arr_4 [i_4]))))));
        var_17 -= (arr_2 [i_4]);
        var_18 *= 1;
    }
    var_19 = var_4;
    #pragma endscop
}
