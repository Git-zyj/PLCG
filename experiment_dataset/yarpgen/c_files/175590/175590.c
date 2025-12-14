/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_8, ((max(83, -48)))));
    var_20 = min((((-(var_10 > var_6)))), var_15);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (max((arr_2 [3] [i_0]), (min((max((arr_4 [i_1] [i_0] [i_1]), (arr_0 [i_0]))), (((arr_5 [i_0] [i_0] [i_2]) - (arr_0 [i_0])))))));
                    arr_6 [i_0] [i_1] [i_1] = (arr_2 [i_1] [i_2]);
                }
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
