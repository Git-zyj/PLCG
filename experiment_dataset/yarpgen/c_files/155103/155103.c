/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 &= (min((arr_3 [i_0]), (((1 ? 48 : 2595172043)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_0] [i_1] [i_3] = (arr_4 [i_0] [i_0 + 2] [i_0 + 2]);
                        var_15 = ((((arr_3 [i_3 + 1]) ? (arr_3 [i_3 + 2]) : (arr_3 [i_3 + 2]))) <= ((-(arr_3 [i_3 - 1]))));
                        var_16 = (min(var_16, 1));
                    }
                }
            }
            var_17 = (((!(arr_8 [i_0] [i_0] [i_0] [i_1]))));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_18 = min(((~(min((arr_1 [3] [i_4]), 1699795255)))), ((min((max(1, (arr_2 [2] [2]))), (!31)))));
            arr_14 [i_0] [i_4] [i_0] = (max(((min((arr_7 [i_0 - 4] [i_0 - 2] [i_0 - 1]), (arr_7 [i_0 - 4] [i_0 - 2] [i_0 - 1])))), ((-(arr_7 [i_0 - 4] [i_0 - 2] [i_0 - 1])))));
            arr_15 [i_0] [i_0] [i_0 - 4] = (max(((~(arr_8 [i_0] [i_0] [i_0 + 2] [i_0 + 1]))), (min(13045691923199044813, (((0 ? (arr_13 [10] [i_4]) : 1)))))));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_19 = ((-(max(8863587877399746492, 1))));
            var_20 = (arr_13 [i_0] [i_0]);
        }
        var_21 = (max(var_21, ((max((!-4294967293), 1)))));
        var_22 = (~((-(min((arr_3 [i_0 - 2]), 241)))));
        arr_19 [i_0 - 3] = ((-(((~19419) ? ((2 ? 242 : 1)) : 0))));
        var_23 = ((((1 ? 255 : 248))) ? 10 : ((((min((arr_12 [i_0 - 4] [6]), (arr_3 [i_0 - 3])))) ? ((((!(arr_2 [i_0] [i_0]))))) : ((24 ? 1816495251 : 2199023255520)))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] [i_6] = 1;
        var_24 = (arr_9 [i_6] [i_6] [i_6] [i_6]);
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = ((-(((!(arr_13 [i_7] [i_7]))))));
        arr_27 [i_7] [i_7] = (((!(!248))) ? (arr_25 [i_7]) : ((((!((max((arr_25 [i_7]), (arr_20 [10] [i_7])))))))));
    }
    var_25 += (-87 != -1536567400126916142);
    var_26 -= -1;
    var_27 = ((~(min(((-87 ? 39745 : var_4)), (~var_6)))));
    #pragma endscop
}
