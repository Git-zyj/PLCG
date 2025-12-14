/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= -30;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_1 [i_0] [i_0]), (!-30)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = (!-886768506970602539);
                    arr_10 [i_0] [i_0] = var_2;
                    var_11 = ((!(arr_6 [i_0] [i_1] [i_2])));
                }
            }
        }
        var_12 = (max(var_12, (((827863744 ? 30 : -3)))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_14 [i_3] = (~50);
        arr_15 [i_3] = (max(((max((arr_13 [i_3]), (arr_12 [i_3])))), (((max(var_2, var_9))))));
        arr_16 [i_3] [9] = (arr_11 [i_3]);
        arr_17 [i_3] = (min(((((arr_13 [i_3]) ? 59508 : ((min(82, (arr_11 [i_3]))))))), (arr_12 [1])));
    }
    var_13 = (((var_3 ? (!5720684661895172713) : -var_9)));
    var_14 &= ((max(var_4, var_1)));
    var_15 = var_5;
    #pragma endscop
}
