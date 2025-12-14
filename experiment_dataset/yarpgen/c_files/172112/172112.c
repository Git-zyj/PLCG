/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min((((((var_6 ? var_2 : var_8)) == ((7811804591994755070 ? var_6 : var_5))))), var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((min((arr_5 [i_0] [i_1] [11] [i_2]), ((((arr_1 [i_0] [1]) >> ((var_0 ? (arr_6 [7] [17] [10] [i_1]) : (arr_7 [6])))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = 16576;
                                var_13 = (min(var_13, (((((-16576 ? -16604 : -16604))) ? var_7 : (arr_10 [i_0] [i_1] [i_2] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
