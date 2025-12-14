/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (!var_6);
                var_18 = (!31340);
                var_19 = ((+(((!((max((arr_6 [i_0] [i_0]), var_3))))))));

                for (int i_2 = 4; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    arr_9 [3] [i_1] [2] [i_1] = (arr_8 [i_0] [i_1] [i_2 + 1]);
                    var_20 = (arr_6 [i_1] [i_2 - 3]);
                }
                for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_21 = (!34202);
                    arr_13 [i_3] [i_0] [i_0] = (max(((((-5 ? (arr_5 [i_3] [i_1] [i_3]) : (arr_8 [i_0] [i_3] [i_3 - 3]))))), (arr_4 [i_1])));
                }
            }
        }
    }
    var_22 = var_4;
    var_23 = var_16;
    var_24 = var_13;
    #pragma endscop
}
