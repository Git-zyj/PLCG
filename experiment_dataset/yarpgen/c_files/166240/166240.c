/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_2] [i_0 - 1] [i_2] [i_3] = 52142;
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] = var_9;
                        arr_13 [4] = min(92, (min(((~(arr_6 [i_0] [i_1] [i_2]))), ((min(var_2, var_2))))));
                        var_17 = (min(var_17, ((((((-123 ? 1335114162204832570 : (6943615430179965534 % 3099226897937582882)))) ? ((((min(var_13, (arr_1 [i_1]))) > (arr_3 [i_0])))) : 23424)))));
                    }
                    var_18 = arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1];
                    arr_14 [i_0] [i_0] [i_2] [i_2] = (min((((!(-6943615430179965551 <= -65)))), (((((var_13 ? var_2 : -1))) ? -97 : var_4))));
                    arr_15 [i_2] [i_2] [i_2] = (arr_0 [i_1]);
                }
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
