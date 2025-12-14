/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] = (max((((min(var_1, 25)) - ((max(241, var_0))))), 623966300));
                arr_8 [i_1 - 2] [i_1 + 2] [i_1] = ((((1 ? var_6 : 1231057496))));
            }
        }
    }
    var_11 = ((min((min(var_9, var_7)), var_9)));
    var_12 ^= max((!var_5), var_5);
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                {
                    arr_19 [i_4] [i_4] [i_4] [i_4] = (1231057522 < -1);
                    var_13 = (min(((((max(-1231057511, 246))) ? 8409429602872960482 : ((max(1, -1231057496))))), (1231057496 > -3744997653438475668)));
                }
            }
        }
    }
    #pragma endscop
}
