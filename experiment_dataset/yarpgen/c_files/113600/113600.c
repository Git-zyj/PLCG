/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -64;
        arr_3 [i_0] = ((!((min(((1356 ? 21639 : -540832474)), -16960)))));
        arr_4 [i_0] [i_0] = 16960;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((!(((1 ? -16955 : 0)))));
        arr_9 [5] [i_1] = (arr_0 [i_1]);
    }
    var_17 = 6;
    var_18 -= ((var_4 ? (((62087 - 2251799813684736) ? -4155685559706440379 : ((max(3863450, -16))))) : ((((-9223372036854775807 - 1) ? 10724 : ((109 ? var_4 : 36641)))))));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            {
                arr_17 [i_2] [i_2] = ((-(((!(!66846720))))));
                arr_18 [i_2] [7] = arr_13 [8] [i_3];
                var_19 = (min(var_19, (arr_11 [i_2])));
            }
        }
    }
    #pragma endscop
}
