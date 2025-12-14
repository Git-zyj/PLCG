/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((12 + var_3) ? var_13 : (((var_11 + 2147483647) >> (!var_11)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 = (((arr_1 [i_0]) - (max(var_11, (arr_1 [i_0])))));
        arr_2 [i_0] = ((~(((var_9 <= (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((21 >> ((((1 || 33299) != (!var_12))))));
        var_21 = ((-((((((-5 >= (arr_0 [i_1])))) >= 1006632960)))));
        arr_6 [i_1] = (min((((var_14 ? (arr_3 [i_1] [i_1]) : (arr_0 [i_1])))), var_2));
        var_22 = 33290;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    arr_13 [i_1] = var_7;
                    var_23 = (((((-1 | 32216) != 1015533135)) && (((((~(arr_11 [i_2])))) && ((1 || (arr_1 [3])))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (arr_15 [i_4]);
        arr_17 [i_4] [i_4] = -82;
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_20 [i_5] = (arr_18 [8]);
        arr_21 [i_5] = (((~108) + (var_7 - var_2)));
    }
    #pragma endscop
}
