/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [9] [i_1] [20] [21] = (1305982623 / 13);
                    var_13 = (min(1305982623, (min(13, ((30047 ? 36527 : 1450398766))))));
                }
            }
        }
    }
    var_14 = 2095431073;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_16 [i_3] [2] = ((((((-1 ? 1305982619 : var_10)) ? var_10 : (~var_1)))));
                    arr_17 [i_3] = (((!17) ? (((!(!1275234117)))) : (((!(((var_5 ? var_3 : var_3))))))));
                    var_15 = (max(var_15, (((var_3 == ((var_2 ^ (arr_13 [18]))))))));
                }
            }
        }
    }
    var_16 = var_6;
    #pragma endscop
}
