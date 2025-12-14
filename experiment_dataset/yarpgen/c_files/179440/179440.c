/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-(((((-979959425 ? -12 : var_4))) ? var_10 : var_1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (max(2, 36));
                    var_13 = ((((!(arr_7 [i_1] [i_0]))) ? 1584039133 : (arr_7 [10] [1])));
                }
            }
        }
    }
    #pragma endscop
}
