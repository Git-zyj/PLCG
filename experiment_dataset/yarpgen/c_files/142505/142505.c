/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((!((max(2709387073, var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = var_4;
                    arr_7 [i_0] = 324216384;
                }
                var_14 = var_12;
                var_15 = (((((~(((arr_2 [i_1]) ? (arr_4 [i_0] [i_1] [7] [i_1]) : (arr_4 [i_1] [i_0] [i_0] [i_0])))))) + (max((((var_0 | (arr_4 [i_0] [i_0] [i_0] [i_0])))), 2105902374))));
            }
        }
    }
    #pragma endscop
}
