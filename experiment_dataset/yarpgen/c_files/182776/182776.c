/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((var_8 << (((min(var_12, var_0)) - 39111)))) - (((((max(var_0, 247))) > (var_0 + var_7))))));
    var_19 = ((((min(17127742389133103135, 9))) ? 247 : (((var_16 != var_8) / (max(var_9, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max((max(-673697051, 17294802607847400674)), ((((arr_3 [i_0] [i_1]) ^ 23992)))));
                arr_6 [i_0] [i_0] = (((((~(~61386)))) % (((247 | 348989283) & 18446744073709551615))));
            }
        }
    }
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_21 -= 242;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_22 = (181 == -1985459776);
                            var_23 = (max((((var_3 <= (arr_4 [i_2] [i_3] [i_4])))), -1));
                        }
                    }
                }
                arr_17 [i_2] = (((min((var_17 - var_13), ((min(var_8, 247))))) > var_8));
                var_24 -= (1 && 1151941465862150960);
            }
        }
    }
    #pragma endscop
}
