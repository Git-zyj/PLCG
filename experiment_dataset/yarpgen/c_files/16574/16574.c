/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_16 ? var_6 : ((var_4 ? var_11 : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (min(var_18, -26488));
                var_19 = (max(var_19, (arr_3 [i_1 - 1] [i_1 + 2])));
                var_20 = (max(var_20, 9595548170619875735));
                var_21 = (max(((~(arr_2 [i_1 - 2] [1] [11]))), ((max((arr_0 [i_1 - 3] [i_1 - 3]), (arr_0 [i_1 - 3] [i_1 + 1]))))));
            }
        }
    }
    var_22 = ((~(min(((8851195903089675881 ? 0 : var_5)), var_1))));
    var_23 = var_4;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_24 ^= (((arr_9 [i_2]) ? var_7 : ((((-952081425 && ((max(3072, 101)))))))));
                    var_25 = (max(var_25, (((~((~(var_6 | -101))))))));
                }
                arr_12 [i_2] = (arr_5 [i_2] [i_2]);
                var_26 = (min(var_26, (arr_2 [i_2] [i_2] [6])));
                var_27 = (-6 ? (arr_3 [i_2 - 2] [i_3]) : 0);
            }
        }
    }
    #pragma endscop
}
