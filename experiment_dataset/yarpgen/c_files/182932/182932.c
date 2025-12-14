/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((!var_5) + ((min(var_5, (max(var_6, var_2))))));
    var_21 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [14] [i_2] = var_16;
                    arr_9 [i_0] [i_0] = arr_2 [i_0] [i_0] [i_2];
                    var_22 |= (23810 | 0);
                }
            }
        }
        arr_10 [i_0] [i_0] = ((-959710575 ? -959710575 : (arr_3 [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_23 = (max((min(959710575, var_2)), ((-(arr_18 [i_3 + 1])))));
                    arr_20 [i_3] [i_5] [0] [i_3] = ((-959710576 >= (((((((-2147483647 - 1) ? 56109 : -1))) || 4655357427497303252)))));
                }
            }
        }
        arr_21 [i_3] = (arr_4 [i_3] [i_3] [i_3 - 1]);
    }
    #pragma endscop
}
