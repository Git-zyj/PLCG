/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_0] [i_2] [i_0] [i_0] = (~var_9);
                        var_16 = (~-396379825);
                    }
                }
            }
        }
        arr_12 [i_0] = (arr_4 [i_0]);
        var_17 = ((((986035662281508534 ? (arr_4 [i_0]) : 18050)) > (((255 < (arr_2 [i_0] [i_0]))))));
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_18 = (max(var_18, (((((max((~2047), (-1913744632849905412 == -986035662281508535)))) ? (arr_8 [i_4] [i_4] [i_4] [i_4]) : -19716)))));
        var_19 = (((((arr_8 [i_4] [i_4] [i_4] [i_4]) ? 1 : (3872730853 == 44695))) == (((62 | 57166) % (~33287)))));
        arr_15 [i_4] [i_4] = ((~(-34 | 12487264348021517205)));
        arr_16 [i_4] = (arr_10 [i_4] [i_4] [i_4] [i_4]);
        arr_17 [i_4] = (((((1 ? 1 : -19716))) & (((arr_0 [i_4]) ^ (arr_0 [i_4])))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_20 = 1152921504338411520;
        arr_20 [i_5] = (arr_14 [i_5] [i_5]);
        arr_21 [i_5] = (arr_18 [14]);
        var_21 = ((((((arr_19 [i_5]) ? 4350007912481872122 : (arr_19 [i_5])))) ? (((8386 ? (((var_0 || (arr_1 [i_5])))) : (5521806533709003575 && 1)))) : (((arr_10 [i_5] [i_5] [i_5] [i_5]) ? (((min(32, (arr_8 [i_5] [12] [12] [i_5]))))) : (arr_18 [i_5])))));
    }
    var_22 = var_5;
    #pragma endscop
}
