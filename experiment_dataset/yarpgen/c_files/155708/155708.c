/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_0] [i_3] = ((((min((arr_0 [i_0]), ((min((arr_6 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]), (arr_5 [i_1] [i_1] [i_0]))))))) ^ ((((arr_1 [i_0]) ^ (arr_2 [i_1]))))));
                            var_15 = (arr_3 [i_0 - 3] [i_2] [i_0]);
                            arr_9 [i_0] [i_3] = (max(((min((((arr_4 [i_2 - 1] [i_3]) ? 7925922980518695430 : (arr_1 [i_0]))), (min((arr_2 [i_0]), 549621596160))))), (arr_4 [i_3] [i_1])));
                        }
                    }
                }
                var_16 = (min(0, 10168453582772612518));
            }
        }
    }
    var_17 = var_12;
    #pragma endscop
}
