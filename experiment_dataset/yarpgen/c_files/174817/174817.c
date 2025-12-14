/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((((max((arr_10 [i_0] [i_1] [i_2] [i_3 + 2]), (var_10 >= var_12)))) ? (((+((((arr_9 [i_0] [i_1] [i_0] [i_3 - 1]) < 65535)))))) : (((-119 ? 788060882 : (arr_5 [13] [i_1] [i_2])))))))));
                            var_21 = var_13;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_22 = ((((((arr_6 [2] [18] [i_4 - 1] [i_5]) ? (arr_13 [i_5] [i_4 - 1] [i_1] [i_0]) : (43170 | var_16)))) ? var_1 : (arr_7 [i_4 - 1] [i_4 + 1] [i_4])));
                            arr_17 [i_0] = var_2;
                            arr_18 [i_0] [i_5] [i_4 + 1] [i_1] [i_0] [i_0] = ((((((arr_5 [i_1] [i_4 + 1] [i_4]) % (arr_5 [i_1] [i_4 - 1] [i_5])))) ? ((((27872 - 120) >= -var_14))) : (((~var_9) ? (0 % 48065) : 2))));
                        }
                    }
                }
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
