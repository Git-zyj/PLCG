/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((arr_0 [i_1] [i_0]) + 2147483647)) >> (arr_2 [i_0] [i_0]))))));
                arr_6 [i_1] |= (min((arr_2 [i_1] [i_0]), ((((arr_1 [i_0]) / (arr_0 [i_0] [i_0]))))));
                var_20 = (min(var_20, ((max((((arr_5 [i_1] [i_1]) > (arr_2 [i_0] [i_1]))), ((!(arr_5 [i_0] [i_1]))))))));

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_21 = (arr_3 [i_2 - 1]);
                    var_22 += (min((min(((max(var_5, (arr_4 [i_0] [i_0] [i_0])))), -var_1)), (min((arr_7 [1] [i_2] [i_2] [i_2 - 2]), ((((arr_4 [i_0] [i_1] [i_2]) ? 1 : 0)))))));
                    arr_9 [i_0] = (((min((max((arr_8 [i_0] [i_1] [i_1] [i_2]), (arr_5 [i_1] [i_1]))), ((((arr_3 [i_1]) + var_18))))) >= (arr_3 [i_2 - 2])));
                }
            }
        }
    }
    var_23 = max((max(var_11, ((var_18 ? var_8 : var_3)))), var_15);
    var_24 = var_13;
    #pragma endscop
}
