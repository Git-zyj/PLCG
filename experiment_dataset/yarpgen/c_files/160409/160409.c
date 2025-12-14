/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!-var_6) ? -var_10 : (((-(var_0 < var_3))))));
    var_13 += (((var_11 + 2147483647) << ((((~(var_9 * var_3))) - 12856748835320669321))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (((((max(64, -3511623856464462208)) - ((((!(arr_2 [i_1] [i_0] [i_1]))))))) >> (((min((arr_4 [i_1] [i_1 - 2] [i_1 - 1]), var_10)) + 1613880709645714157))));
                var_15 = (max(var_15, ((((((-(arr_3 [i_0] [i_1] [i_0])))) & (max(((var_4 / (arr_0 [i_0]))), (arr_0 [i_0]))))))));
                var_16 = (-var_4 >= var_2);
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
