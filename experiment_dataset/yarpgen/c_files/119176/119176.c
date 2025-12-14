/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(((~(-2147483647 - 1))), ((max(0, var_3)))))) ? 101 : var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1 + 2] [4] [i_1 + 2] [i_0] = (((arr_5 [i_2]) || ((((274869518336 == var_11) ? (arr_0 [i_0 + 1]) : var_1)))));
                    var_13 = (max(var_13, (((!(arr_7 [i_0 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
