/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] [i_0] &= ((((((arr_1 [i_1]) ^ var_12))) ? ((3755721939 ? 539245357 : 3755721959)) : ((~(~var_1)))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [11] [i_1] = ((((((((var_13 ? var_4 : var_3))) ? (((arr_5 [i_0] [i_0]) ? 461312000 : var_15)) : (arr_1 [i_1])))) || (((-(((644395238 == (arr_7 [i_0] [i_0] [10] [i_2])))))))));
                    arr_9 [i_1] [i_1] [1] = (((((3755721933 ? (arr_6 [2] [i_1] [i_1] [i_0]) : 3755721939))) ? (((arr_6 [i_0] [i_0] [i_1] [i_2]) ? (arr_6 [i_0] [i_0] [i_1] [i_0]) : (arr_6 [3] [3] [i_1] [i_0]))) : (((arr_6 [14] [i_1] [i_1] [10]) << (var_6 - 1999279565)))));
                    arr_10 [i_1] [i_1] [i_2] = ((~(((((22879203 ? 45 : 15))) ? ((~(arr_6 [12] [i_1] [i_1] [i_2]))) : ((((!(arr_6 [10] [i_1] [i_1] [i_1])))))))));
                    arr_11 [i_1] = ((!(((12347 ? var_15 : (arr_7 [i_2] [i_1] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_17 = var_0;
    var_18 = ((((((((var_0 ? var_15 : 0))) && var_1))) > (((0 - var_11) ? ((var_2 ? 53189 : var_0)) : ((0 ? 1 : var_3))))));
    var_19 = ((((1 * var_9) ? 2 : ((var_15 ? 1 : 4160749568)))) & ((var_8 ? var_12 : (var_9 & 4294967280))));
    var_20 = (max(var_20, var_0));
    #pragma endscop
}
