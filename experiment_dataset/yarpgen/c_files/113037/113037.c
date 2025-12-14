/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 -= (arr_4 [i_0 + 1] [i_0] [i_0 + 1]);
                var_19 ^= ((min((var_10 ^ 5999887911145750866), 0)));
                arr_7 [i_0] [i_0 + 1] [i_0] = (((arr_4 [i_1] [i_0] [i_0]) * ((-2364812901445238533 ? var_9 : (!-5999887911145750867)))));
                var_20 = (((arr_3 [i_0 - 1] [i_0 - 1]) / -17304));
                var_21 = (7 ? 1030792151040 : 5999887911145750866);
            }
        }
    }
    var_22 ^= (min(1, var_0));
    #pragma endscop
}
