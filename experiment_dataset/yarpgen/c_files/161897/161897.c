/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = ((!(((-(!var_10))))));
                    arr_7 [i_2] = ((!(((+((min((arr_3 [i_0] [i_0] [i_0]), var_13))))))));
                    arr_8 [i_2] [i_1] [i_2] = ((!((max(-125, -var_2)))));
                }
            }
        }
    }
    var_17 = (!-var_6);

    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_18 = ((!((min((max((arr_11 [i_3] [i_3]), var_13)), 126)))));
        arr_13 [i_3] = ((!((!(!var_5)))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = ((~(!var_0)));
        arr_17 [i_4] = (max((max(((-(arr_3 [7] [i_4] [i_4]))), ((max(94, 0))))), 26214));
    }
    #pragma endscop
}
