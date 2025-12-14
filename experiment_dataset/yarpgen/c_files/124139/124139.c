/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 44029;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [5] = var_14;
                    var_20 = (!44023);
                    var_21 = (min(var_21, ((~(min(((((arr_2 [i_1] [i_1] [i_0 - 3]) > var_9))), (max(-12112, (arr_4 [0] [i_1] [0])))))))));
                }
            }
        }
    }
    var_22 = var_6;
    var_23 |= (((((var_16 * (-20 + var_1)))) ? var_11 : 4092142057));
    var_24 = (max(var_13, ((((44011 ? var_8 : 65535)) / var_8))));
    #pragma endscop
}
