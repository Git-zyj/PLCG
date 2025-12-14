/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0 + 1] [18] = (((((4294967286 ? 4194303 : 7))) ? 0 : (4294967271 / 1)));
        var_15 = (max(((((max((arr_1 [i_0]), var_7)) <= var_7))), (arr_0 [i_0] [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_16 = ((131071 ? (((((!253) || ((max(var_10, 255))))))) : (min((arr_1 [i_1]), (arr_1 [i_1])))));
                    var_17 = (min(var_17, (arr_3 [i_1])));
                }
            }
        }
        var_18 = (-(((arr_3 [5]) + -134217727)));
    }

    for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_19 |= max((var_12 || -1271622714724909087), (max(2147483647, (min(var_8, 39)))));
        arr_15 [3] = ((((((arr_1 [i_4]) + -106)))) ? 1 : -70);
    }
    for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (~1)));
        var_21 = var_10;
        var_22 = (max(1, 0));
    }
    var_23 = (min(var_23, ((max((-1 ^ 4294967295), 1)))));
    #pragma endscop
}
