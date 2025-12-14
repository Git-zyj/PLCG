/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((-(min(var_3, var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 -= ((min((max((arr_5 [i_1] [8] [i_2]), var_3)), ((min((arr_4 [i_0]), (arr_3 [i_2])))))));
                    var_15 = ((((-(arr_3 [i_0 - 1]))) * (arr_3 [i_0 - 1])));
                    var_16 = (((+(((arr_4 [i_2]) / var_0)))));
                }
            }
        }
    }
    var_17 = ((-var_0 ^ (min((min(var_3, var_3)), var_9))));
    #pragma endscop
}
