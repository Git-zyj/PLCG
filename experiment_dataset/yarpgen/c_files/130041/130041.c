/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = var_8;
    var_17 = (var_6 || var_8);

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_13 [i_3 - 2] [i_2] [i_1 - 1] [i_0] [i_0] = (((255 || (arr_12 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 2]))) ? (arr_3 [i_0] [i_0] [i_0]) : (((((1 ? 17849246889560401427 : (arr_12 [5] [5] [i_2] [5]))) <= (arr_8 [i_3] [i_3 + 1] [i_3] [i_0 - 2])))));
                        arr_14 [i_0] = (max((var_7 ^ var_2), (((((arr_1 [i_0 - 4]) * (arr_10 [i_0 - 3] [i_1 + 2] [i_2 - 3] [i_2] [i_3]))) <= (((var_10 ? var_7 : (arr_4 [i_3 - 1]))))))));
                        arr_15 [i_1 + 2] [i_1 + 2] [i_3] = (((min((arr_8 [i_3 + 1] [i_3 + 1] [i_3] [i_3]), (arr_8 [i_3 - 2] [i_3] [i_3] [i_3 - 2]))) ? (arr_8 [i_3 - 1] [12] [i_3] [i_3]) : (arr_8 [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1])));
                    }
                }
            }
        }
        arr_16 [i_0] [i_0] = 4294967295;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_19 [i_4] [i_4] |= (arr_17 [i_4]);
        arr_20 [i_4] = (arr_18 [i_4] [i_4]);
    }
    var_18 = ((max(var_14, (var_3 <= var_9))));
    #pragma endscop
}
