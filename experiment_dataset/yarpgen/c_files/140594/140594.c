/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = ((((var_8 * 13842) ? (var_8 > var_7) : var_4)));
                    arr_9 [i_0] [19] = (min((((var_9 ? var_11 : 655197058))), ((((min(var_4, var_11))) % var_5))));
                }
            }
        }
    }
    var_16 = ((var_11 < (var_0 + var_10)));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_16 [i_4] [2] = var_3;
                    arr_17 [i_3] [i_4] = ((!(var_10 % var_2)));
                    arr_18 [i_4] [i_3] [i_3] = 1830651312;
                    var_17 -= ((((((!3639770236) % (min(var_1, 105))))) ? (var_11 * 11936308346174403907) : (((var_2 ? var_8 : var_4)))));
                    arr_19 [i_4] [i_5] [i_5] [i_5] = (max((((5498828778124872721 ? var_0 : -62734))), (((((var_12 ? var_14 : 31334))) ? var_10 : var_6))));
                }
            }
        }
    }
    #pragma endscop
}
