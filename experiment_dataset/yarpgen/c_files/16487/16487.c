/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 += (~var_5);
                    arr_7 [i_0] [i_2] [i_0 - 1] [i_0] = (min((((~var_3) ? ((var_11 ? (arr_4 [1] [1] [i_2]) : var_15)) : ((-71 ^ (arr_0 [i_0]))))), (arr_6 [i_2] [i_2 - 2] [i_2])));
                    var_20 = ((!(((87 ? (((arr_2 [i_0] [i_1]) ? (arr_0 [i_1]) : 18446744073709551615)) : (-1 || 1))))));
                    var_21 += (~1);
                }
            }
        }
    }
    var_22 = (max((-93 < 5129381521265598949), (max(((1 ? 21388 : 67)), ((var_16 ? var_1 : 1))))));
    var_23 = (((((var_12 ? -1410523688 : 196))) ? (((((1051560678 ? var_17 : 186))))) : ((((min(var_1, var_10))) ? (max(9, 473582783209241696)) : (((var_4 ? -2686499013207914459 : var_6)))))));
    #pragma endscop
}
