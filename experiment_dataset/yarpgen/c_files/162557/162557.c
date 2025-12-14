/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((max((arr_4 [i_1] [i_0] [i_0]), ((((arr_1 [i_0] [12]) != (arr_1 [i_0] [14])))))))));
                arr_5 [i_1] [i_0] [i_0] = ((!(((((arr_3 [i_0] [i_0]) ? var_1 : var_7)) == (~127)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, 0));
                                var_15 = ((((!((((arr_7 [10]) ? 1 : 1497890222024519016))))) || ((((arr_7 [i_2]) % (arr_7 [i_0]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_16 = ((((max((!23888), (max(var_9, 16948853851685032599))))) ? (arr_12 [i_0] [15] [i_1] [i_5] [i_6] [15] [i_7]) : (((!((min(var_8, var_1))))))));
                                var_17 = (arr_8 [i_0] [i_1] [i_1] [i_5] [i_0] [18]);
                            }
                        }
                    }
                }
                var_18 = ((((((~(arr_15 [i_0]))))) || (arr_12 [18] [18] [18] [i_1] [18] [i_1] [i_1])));
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
