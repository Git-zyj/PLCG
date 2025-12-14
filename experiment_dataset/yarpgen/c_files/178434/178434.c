/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_13 = ((!((((arr_0 [i_0]) >> (65535 - 65523))))));
        var_14 = (max(var_14, 2147483647));
        arr_2 [i_0] = var_1;
    }
    var_15 = (max(var_1, var_10));

    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_16 = (max(var_16, 2147483647));
        var_17 *= arr_4 [i_1 + 1];
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_7 [i_2] = (arr_5 [i_2]);
        arr_8 [i_2] = ((11 ? (arr_3 [i_2] [i_2]) : (arr_5 [i_2])));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_18 = (-31974 ? var_8 : var_10);
                    var_19 = (min((!var_0), (min(8451, (arr_15 [i_4] [i_4] [i_5])))));
                }
            }
        }
        var_20 = 65525;
        var_21 = ((!(max(((!(arr_6 [i_3]))), (!15056)))));
    }
    var_22 += -1;

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_20 [i_6] = (~-4174523274917912808);
        arr_21 [i_6] = (min((!var_0), ((!(arr_3 [i_6] [i_6])))));
        var_23 = ((!((max(1, 4032691036046149803)))));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_24 = 3009341907839274984;
        var_25 = (max((max(-var_3, ((var_11 ? -1358126299 : 126)))), (3152189777599885863 <= 15437402165870276623)));
    }
    #pragma endscop
}
