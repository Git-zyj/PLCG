/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = -1430362963;
                var_17 = ((+(min((0 - 15), ((min(var_0, 52)))))));
                var_18 = (((max(18446744073709551615, 1))) ? 927127870 : (min(1, 18446744073709551615)));
            }
        }
    }
    var_19 = var_9;

    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_20 = (max(var_0, -var_15));
        var_21 = 18446744073709551615;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_22 = -927127870;
        var_23 = (max(var_3, (((arr_0 [i_3]) ? (arr_7 [i_3] [i_3]) : 18446744073709551606))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_4 - 1] [14] = (max((((((var_6 ? var_5 : (arr_11 [i_4] [i_5])))) % (~5))), (arr_16 [i_4 - 1])));
                    var_24 = ((-(arr_9 [7] [7])));
                    var_25 = ((((arr_14 [i_4] [i_4 - 1] [i_4]) ? 63 : 53)));
                }
            }
        }
        var_26 = ((((((max(2147483632, 30264))) ? ((30264 >> (875957823 - 875957811))) : (arr_8 [i_3]))) >> ((((((min((arr_10 [i_3]), var_2))) ? (min(-927127870, var_4)) : var_5)) - 272))));
        arr_18 [i_3] [i_3] = (min((((arr_11 [i_3] [i_3]) ^ var_16)), ((max((!1335020286), ((-927127870 ? -927127870 : var_13)))))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = var_16;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_27 = (var_6 | ((((min((arr_6 [i_9]), 1249589251))) ? var_10 : (arr_9 [i_6] [i_6]))));
                        var_28 = (min((arr_24 [i_6] [i_7] [i_7]), ((max((arr_23 [i_9] [i_8] [i_7]), -1004197921)))));
                    }
                }
            }
        }
        var_29 = ((31 ? 0 : (((10 ? (arr_12 [i_6]) : (arr_12 [13]))))));
        arr_29 [i_6] = ((~(!1)));
    }
    #pragma endscop
}
