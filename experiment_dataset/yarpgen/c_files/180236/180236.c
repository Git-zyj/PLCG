/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (max(var_10, (((+(min((arr_2 [i_0]), ((((-2147483647 - 1) ? var_5 : -118))))))))));
        arr_3 [i_0] = ((-(((131071 ? -110 : (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_11 = (max(var_11, (((((123 == (((arr_1 [2]) & -9192029808920307771)))) ? (((~(arr_5 [4])))) : (((((var_6 << (var_0 - 84)))) ? 144115188075724800 : (((min(var_4, var_9)))))))))));
        arr_6 [i_1] = ((~(!var_3)));
        arr_7 [i_1] [i_1] = var_9;
        arr_8 [i_1] [i_1] = (((((-(arr_2 [i_1])))) <= ((((arr_0 [i_1]) ? (arr_0 [i_1]) : var_5)))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_11 [1] = ((((((((min((arr_9 [1]), 109))) + 2147483647)) << (var_9 - 124))) != ((max((!var_1), ((131071 != (arr_9 [i_2]))))))));
        arr_12 [i_2] = ((-110 ? (!134217727) : 120));
    }
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 6;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_23 [i_3] [i_3] [i_3] [1] = ((-(arr_4 [i_4 + 4])));
                    arr_24 [i_3] [i_3] [i_3] [i_3] = (arr_15 [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
