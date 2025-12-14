/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(53, var_11))) != var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((arr_3 [9] [i_1 - 2]) || var_4);
                    arr_6 [i_0] [i_1] [12] [i_1] = -2947558348464961351;
                    arr_7 [i_0] [i_1] [i_2] [i_1] |= (~3634113274);
                    arr_8 [i_2] [i_1] = ((!((!(arr_3 [i_0] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
