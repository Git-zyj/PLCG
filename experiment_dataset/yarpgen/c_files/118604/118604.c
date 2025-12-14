/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((~64) ? var_1 : (1591145669 || var_15))), var_10));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (4294966272 ? (~4874886243180654612) : (4874886243180654612 + -121));
                    arr_9 [i_1] = ((((!(arr_5 [i_0 - 1] [i_1] [i_0]))) ? ((((!(arr_6 [i_0 - 2] [i_0 + 1] [i_0]))))) : (arr_6 [i_0 - 2] [i_0] [i_0])));
                }
            }
        }
    }
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                arr_15 [i_4] = (max((arr_13 [i_4]), (((var_14 || (arr_13 [i_4]))))));
                var_22 ^= -125;
                var_23 = (max(1, (((arr_14 [i_4]) ? (((arr_14 [i_3]) / 30)) : (((var_12 + (arr_10 [i_4]))))))));
            }
        }
    }
    var_24 = (!var_8);
    #pragma endscop
}
