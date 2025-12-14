/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = arr_3 [1] [i_1];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = ((!((((var_5 ? var_8 : (arr_0 [1])))))));
                                var_18 = ((!(((255 ? (arr_8 [i_2]) : 1)))));
                            }
                        }
                    }
                }
                var_19 = (arr_8 [i_0]);
            }
        }
    }
    var_20 = ((((-36 | (var_3 ^ var_6))) <= var_0));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_21 = ((~((+((2 ? (arr_21 [1] [i_5]) : (arr_21 [5] [i_5])))))));
                    var_22 = var_3;
                }
            }
        }
    }
    var_23 = (!var_12);
    #pragma endscop
}
