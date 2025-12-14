/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 5827322032923194116;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [0] &= var_3;
                    var_13 = (max(var_13, (((~(12619422040786357499 - 170))))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (((((!var_8) ? (((!(arr_6 [i_1] [i_2])))) : (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) <= (min((((arr_5 [i_0 - 1] [i_1] [i_2]) ? (arr_2 [i_0] [i_0] [i_2]) : (arr_4 [i_0 + 1] [i_1] [i_2]))), -9850))));
                }
            }
        }
    }
    #pragma endscop
}
