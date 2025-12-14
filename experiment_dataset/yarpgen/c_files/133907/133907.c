/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min((((var_12 ? var_2 : var_6))), var_5)), var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_19 = (min(1, (((~var_13) ? (~var_14) : (min(9148585694816492417, var_1))))));
                    var_20 = 249;
                    var_21 -= (((((((!(arr_0 [19])))) < (-453702867 || var_9))) ? ((((((1082 ? var_10 : (arr_6 [i_1] [i_1] [16] [i_1])))) != 9298158378893059198))) : (~3567)));
                    arr_8 [i_0] [i_1] [i_0] [i_2 + 1] = (((((((var_2 ? 1 : 9148585694816492423))) ? 2395614325 : (-2147483647 - 1))) >> (((arr_3 [i_2 + 1]) - 115))));
                }
                arr_9 [i_0] [i_0] [i_0] = (min(var_8, var_1));
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
