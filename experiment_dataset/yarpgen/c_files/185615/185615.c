/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_19 ^= (((max(84, 84))) >> (arr_1 [i_1 + 1] [i_1 - 1]));
                    var_20 = (min((((!84) ? (arr_6 [i_0] [i_2]) : (arr_7 [i_1 - 1] [i_1 + 2] [i_1 + 2]))), ((((((!(arr_1 [9] [9])))) << (-1 / 57068))))));
                    var_21 ^= (min(var_1, (min(84, var_9))));
                }
                var_22 -= (min(((65535 ? 65535 : (arr_3 [i_1 + 3] [i_1 + 1] [i_1 + 1]))), ((var_11 ? (arr_3 [i_1 + 3] [i_1 + 4] [i_1 + 4]) : (arr_3 [i_1 + 2] [i_1 + 1] [i_1 - 1])))));
            }
        }
    }
    var_23 = (((((~((var_9 ? var_10 : var_10))))) ? -84 : ((71 - (!var_7)))));
    var_24 = var_13;
    #pragma endscop
}
