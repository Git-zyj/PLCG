/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_1;
                arr_6 [i_1] = ((max((arr_3 [i_0] [i_0] [11]), 32767)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = (min(-2593545551145959030, 16368));
                            arr_13 [i_0] [i_0] [i_1] [12] [i_0] = (-280764584 | -21);
                            var_15 |= 0;
                            var_16 = (min(var_16, (((!((max((min(var_0, 6144)), (~-1414080099)))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] = (max((max(111, -14479)), ((((arr_7 [i_0] [i_5 - 3]) && var_2)))));
                            arr_20 [i_0] [i_0] = (min(32767, 1414080099));
                            arr_21 [i_0] [i_0] = ((!(arr_17 [i_5] [8] [i_5] [i_5] [i_5 - 2])));
                            arr_22 [i_1] [i_1] = min((arr_9 [i_5 - 2] [i_5] [i_5]), ((max(1864914734, 993396642))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
