/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_9, ((min(1, var_2))))) ^ var_8));
    var_11 = (((-127 - 1) ? 65519 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 6;i_2 += 1)
                {
                    arr_6 [i_0] [7] [i_1] [i_2] &= ((-(arr_2 [i_2 + 4] [i_2 + 4])));
                    arr_7 [i_0] [i_1] [i_2] = 16;
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    var_12 = (max(var_12, ((((arr_8 [i_0] [i_1] [i_1] [4]) > (arr_5 [i_0] [i_0] [i_0]))))));
                    var_13 = 1;
                    arr_11 [i_3] = (arr_2 [i_1] [i_3 + 1]);
                    arr_12 [i_0] [i_0] [i_0] [i_0] = var_8;
                    var_14 = (min(var_14, 1));
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    arr_16 [i_0] = 1;
                    var_15 = (!65519);
                }
                var_16 &= (max(var_3, (arr_0 [i_0])));
                arr_17 [i_0] [i_1] = ((max((max(var_5, (arr_13 [1] [1] [1] [i_1]))), (min(12, var_5)))) >= (((((((arr_15 [i_1] [i_1] [i_0] [i_0]) ^ 8499583192379899666))) ? var_6 : (arr_1 [i_0])))));
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
