/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] = arr_0 [i_2 + 2];
                        arr_13 [i_3] [i_2 - 1] [1] = (((arr_8 [i_2]) || ((max((max(var_0, (arr_4 [i_0] [10] [i_3 - 2]))), (arr_7 [i_0] [i_1 - 1] [i_2] [i_3]))))));
                        arr_14 [i_0] = 1697100218;
                        var_13 = (arr_1 [i_2 + 1] [i_2 + 1]);
                    }
                }
            }
        }
        arr_15 [i_0] = (arr_4 [i_0] [i_0] [i_0]);
        var_14 = (max(var_14, 85));
        var_15 = ((-((97 - (arr_4 [i_0] [i_0] [i_0])))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_16 = -95;
        var_17 = (((((var_12 >= (((arr_1 [i_4] [i_4]) % (arr_2 [i_4] [i_4])))))) < ((((arr_18 [i_4]) > (arr_18 [i_4]))))));
        var_18 *= (((min((1 - 2509746953883935543), (20 < 2504927610))) == (281474976710655 == 2725617800)));
    }
    var_19 = (max(var_19, var_5));
    var_20 = var_11;
    #pragma endscop
}
