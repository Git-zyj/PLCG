/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_1] [14] [i_2] = var_6;
                    var_17 = (min(var_17, var_3));
                }
                var_18 = (((((((arr_1 [7] [i_0]) <= (arr_5 [i_1]))))) > var_9));
                var_19 = (((arr_3 [i_0]) <= 5));
                var_20 -= (((((4158157596 ? 3753700199 : (!var_11)))) ? (1938358646 > -23908) : ((((((arr_6 [i_1] [i_0] [i_0] [i_1]) ? 12026904201042226222 : (-32767 - 1))) <= (((-(arr_5 [i_0])))))))));
            }
        }
    }
    var_21 ^= 1;
    var_22 = (min((var_9 + var_12), (((((var_3 ? var_7 : 1517769470)) > ((15 ? -5265 : 3)))))));
    #pragma endscop
}
