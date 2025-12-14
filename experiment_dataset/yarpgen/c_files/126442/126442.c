/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_11, var_8));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((((var_10 ? var_9 : (arr_1 [i_0])))) ? (arr_0 [i_0] [i_0]) : 872248924))) == var_0));
        arr_3 [i_0] = ((!(((2994036760 ? ((224 ? var_6 : (arr_0 [i_0] [i_0]))) : (arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = (max((max((arr_1 [i_0]), (arr_1 [i_0]))), (max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 = (max(((-872248920 ? 12239366902629891385 : -872248931)), ((((((arr_6 [i_1]) ? var_9 : var_8)) / (arr_0 [i_1] [1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_15 = (max(var_7, ((~(arr_9 [1] [i_3 + 1])))));
                    var_16 = var_1;
                    arr_12 [i_3] [i_3] [i_3 - 1] = var_3;
                    var_17 -= (max((arr_0 [i_1] [i_2]), (max(872248908, 4169123158))));
                }
            }
        }
        arr_13 [i_1] = (max(((var_6 ? ((max(var_3, var_5))) : var_1)), (max((arr_0 [i_1] [16]), (arr_1 [i_1])))));
    }
    var_18 = (min(var_18, ((((~(~var_12)))))));
    #pragma endscop
}
