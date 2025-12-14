/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (3 >= 1);

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_19 = ((16948572498981245321 != ((max((((arr_1 [i_0]) ^ (arr_1 [i_0]))), (arr_0 [i_0] [i_0]))))));
        arr_3 [8] &= ((+(min((arr_1 [i_0]), (arr_0 [5] [5])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = (((((~(min((arr_2 [i_0] [i_1]), 16948572498981245321))))) ? ((((min(var_4, -1)) << (((arr_2 [i_0] [i_1]) & 0))))) : (~16948572498981245321)));
                        arr_10 [i_0] [i_2] [i_2] = (~1);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_21 = (min(((10 ? 9223372036854775807 : 7312009812458162030)), ((((arr_0 [2] [i_4]) ? (arr_0 [i_4] [4]) : (arr_0 [i_4] [i_4]))))));
        var_22 = (min((((arr_5 [i_4] [i_4]) ? (arr_5 [i_4] [i_4]) : (arr_5 [i_4] [i_4]))), ((~(arr_5 [i_4] [i_4])))));
        var_23 = (max((arr_11 [0]), (((((((arr_6 [i_4]) ? 120 : (arr_8 [i_4] [i_4] [i_4] [1])))) && ((((arr_2 [i_4] [6]) ? (arr_9 [i_4]) : var_2))))))));
        var_24 = (min(var_24, (((((min((arr_11 [i_4]), (arr_11 [i_4])))) ? (((arr_11 [i_4]) ? (arr_11 [i_4]) : (arr_11 [i_4]))) : (!-1))))));
    }
    #pragma endscop
}
