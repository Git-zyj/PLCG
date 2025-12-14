/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [4] = ((((((var_4 ? (arr_2 [i_0 + 3]) : -8670282782291152622)) + 1023)) + (max(((-38 ? (arr_0 [i_0]) : (arr_2 [i_0]))), 679464779))));
        var_18 = ((-(((!((12206073739911957470 > (arr_1 [i_0] [i_0]))))))));
    }

    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_19 = (min(var_19, 96));
                    arr_12 [i_1] [i_2] [i_3] = var_15;
                    arr_13 [i_2] = max(var_9, (min((((var_0 || (arr_8 [i_1] [i_2 - 2] [i_2])))), 1467578092)));
                }
            }
        }
        var_20 ^= 398835650;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = arr_11 [11] [i_4] [12] [i_4];
        var_21 ^= (var_0 + 1);
    }
    var_22 ^= var_14;
    var_23 = ((var_8 << (var_11 + 26)));
    #pragma endscop
}
