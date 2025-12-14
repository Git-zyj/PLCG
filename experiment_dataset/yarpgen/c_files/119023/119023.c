/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-1339139946 / 1339139946);
    var_20 = (max(var_1, ((max((max(var_5, var_3)), (-3755475497365070010 != var_9))))));
    var_21 = ((!((max(((3928709034330372171 ? 31 : var_1)), -843870287)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((((max((arr_3 [5]), 1363299806))) ? (max((arr_0 [i_1]), 3462752566)) : (arr_4 [i_0] [i_1] [i_0])))) / (max((7923628829336384448 & var_18), 20839))));
                arr_7 [9] [9] = 10523115244373167167;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_22 = ((var_13 * (((!(((3462752566 ? (arr_0 [i_3]) : 2931667489))))))));
                            arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] = (max((((~((254 ? (arr_9 [i_2]) : var_8))))), (max(928418482423987693, 241))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
