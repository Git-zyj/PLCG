/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = (min(var_17, var_3));
                arr_6 [i_0] [10] = ((!(((min(var_1, (arr_5 [i_0] [10])))))));
                var_18 = -var_10;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_11 [i_0] [i_2] [i_2] = (arr_7 [i_0] [6] [i_1 + 2] [1]);
                    arr_12 [i_2] [5] = ((max(15, 0)));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        arr_19 [i_0] [i_1 + 2] [i_3] [i_4] = var_11;
                        var_19 *= (arr_14 [i_3]);
                        var_20 = var_4;
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_21 = (max(-39, 38));
                        var_22 |= (arr_20 [2] [i_1] [i_1 + 3] [i_1]);
                        var_23 = (min(var_23, ((max((max((arr_15 [2] [i_0] [i_1 - 1]), var_12)), (((-(arr_15 [0] [10] [i_1 - 1])))))))));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_24 |= (max(((((max(var_11, var_13))))), (arr_22 [i_6])));
                        arr_24 [i_0] [i_1 + 3] [i_3] = var_13;
                        arr_25 [i_3] [1] [i_3] [6] = (~var_15);
                    }
                    var_25 = -var_1;
                    var_26 -= (max((arr_0 [i_0]), var_9));
                }
                arr_26 [3] |= var_12;
            }
        }
    }
    #pragma endscop
}
