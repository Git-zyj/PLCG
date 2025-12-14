/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 *= (min(491520, ((((arr_0 [i_1]) + -461460080)))));
                            arr_9 [i_0] [i_1] [i_1] [14] = var_5;
                            var_16 = ((((((arr_5 [i_0] [i_1] [i_2] [i_2 - 1]) ? (arr_4 [i_0] [i_3] [14]) : (arr_4 [i_0] [i_1] [i_2 + 1])))) ? ((((var_8 >> (-1 + 29))) + (((min(19, -1)))))) : 18370144897933624773));
                            arr_10 [i_0 + 1] [i_0] [2] [i_1] [i_2] [i_3] = (((((0 ? 44069 : 14819)) <= ((-(arr_8 [i_0 + 1]))))));
                        }
                    }
                }
                var_17 = (min((min(1593393706, var_2)), (arr_3 [i_0] [i_0 - 2])));
            }
        }
    }
    var_18 = (max(((((min(var_7, var_5)) >= var_11))), (min(((0 ? var_12 : -119)), var_5))));
    #pragma endscop
}
