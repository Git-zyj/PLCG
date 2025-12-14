/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (133 * var_10);
                    var_13 -= ((0 != ((0 ? var_5 : (1665 / var_9)))));
                    var_14 = ((-((max((((!(arr_5 [i_0])))), var_0)))));
                    var_15 -= ((((var_10 ? -1666 : var_2)) + 4032));
                }
            }
        }
    }
    var_16 = 10491;
    #pragma endscop
}
