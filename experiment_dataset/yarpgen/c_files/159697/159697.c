/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((0 ? 3486 : 9401352265566659468))) ? var_9 : var_8))) ? ((max((var_3 % var_1), ((var_4 ? var_3 : 3486))))) : (((var_11 != 1) ? var_2 : var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [20] [i_0] [20] = ((((((((arr_6 [i_0] [i_1 + 3]) | (arr_4 [i_0] [i_0]))) >= (((2048 + (arr_3 [4]))))))) | (((1 <= (31 - var_10))))));
                    arr_10 [i_0] [0] [i_2] = ((((var_7 - ((3257314808 ? var_9 : var_3))))) ? (arr_4 [8] [i_1]) : 1863004460);
                }
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
