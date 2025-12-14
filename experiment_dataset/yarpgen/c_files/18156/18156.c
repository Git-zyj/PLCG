/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (max(-4630464166591527415, ((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_14)))));
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
        arr_5 [i_0] |= (min(4117755324, (max((13977092103865292470 / 13977092103865292475), (min((arr_2 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_19 = (min(5719639195464531458, ((-124 ? 5496664678544898810 : 124))));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    var_20 = ((var_17 ? (arr_1 [i_1 + 2] [i_1]) : (((((arr_8 [i_1 - 2] [i_2]) == (648411065112454876 % 4814029678816137844)))))));
                    var_21 = (((arr_3 [i_1 - 1]) >= (arr_3 [i_1 - 1])));
                    var_22 = (max(var_22, (((1 ? (arr_9 [i_1]) : var_8)))));
                }
            }
        }
    }
    #pragma endscop
}
