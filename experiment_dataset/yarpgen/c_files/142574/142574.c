/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(132, 1596499289450528639)) << (var_13 - 61315)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 = (((((7039085088034039714 - ((((1596499289450528639 == (arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_0])))))))) ? (arr_1 [i_0 + 1]) : (arr_9 [i_0] [i_0 - 1] [i_2 + 1] [5] [i_3 - 3])));
                            arr_10 [i_0] [i_2] [i_1 - 1] [i_0] = ((((max((((((arr_5 [i_0 + 2] [i_1 + 2] [i_2] [i_2]) + 9223372036854775807)) << (var_13 - 61331))), ((((arr_2 [i_3]) ? 16 : 3)))))) ? ((((arr_6 [i_0] [i_1]) && ((((arr_7 [i_0]) & 127)))))) : ((((~1602217267527133745) < ((((arr_0 [i_2 - 1] [i_3]) - 3))))))));
                            var_21 = (min(var_21, ((min((max(2771684673, (arr_1 [i_2 + 2]))), ((max((arr_4 [i_3] [i_0 - 3] [i_0 - 3]), (arr_1 [i_0 - 3])))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_0] [i_1 - 2] [i_1] = (max(1523282622, (((~((-31129 ? 65534 : 508)))))));
                        }
                    }
                }
                var_22 = (min((((arr_0 [i_0] [i_0]) ? (arr_6 [i_0 + 1] [i_0 - 2]) : ((-(arr_0 [i_0] [i_0]))))), (arr_2 [i_0 + 1])));
            }
        }
    }
    var_23 = var_14;
    #pragma endscop
}
