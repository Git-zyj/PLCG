/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(-6408332704591894641 >= -var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_0] = (6408332704591894642 >> (10199478042711814357 - 10199478042711814337));
                var_16 = (((((-(((!(arr_3 [i_0] [i_1]))))))) || ((max((((-6910247449980858648 == (arr_4 [i_0])))), (arr_0 [i_1]))))));
                var_17 = arr_0 [i_1];
            }
        }
    }
    #pragma endscop
}
