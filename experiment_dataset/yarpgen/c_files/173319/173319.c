/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (max((arr_0 [i_0]), (((0 && (arr_4 [i_1 - 1] [i_1 + 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((min((((((max((arr_8 [i_0] [i_1 - 1] [i_2 + 1] [i_3]), (arr_7 [i_0] [i_1] [i_2 - 1] [i_0])))) ? var_14 : (arr_6 [i_2] [i_0] [i_2] [i_2])))), (arr_1 [i_0]))))));
                            var_22 = ((~(max(3932160, 8118350324874693456))));
                            var_23 = (i_1 % 2 == 0) ? ((((max((max((arr_2 [i_1]), var_9)), (arr_5 [i_3] [i_1] [i_2] [i_3]))) << ((((+((min((arr_7 [i_0] [i_1] [i_2] [i_1]), 4306))))) - 172))))) : ((((max((max((arr_2 [i_1]), var_9)), (arr_5 [i_3] [i_1] [i_2] [i_3]))) << ((((((((+((min((arr_7 [i_0] [i_1] [i_2] [i_1]), 4306))))) - 172)) + 62)) - 37)))));
                            arr_9 [i_0] [i_1 - 1] [i_2] [i_1] = (max((arr_6 [i_0] [i_1] [i_1] [i_2 + 1]), (((arr_6 [i_1 + 1] [i_1] [i_1 + 1] [i_2 - 1]) + 87))));
                        }
                    }
                }
            }
        }
    }
    var_24 = var_11;
    #pragma endscop
}
