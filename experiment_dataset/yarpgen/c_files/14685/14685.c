/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((max((min(51709, var_12)), -124))), (((200 + var_10) % (((-124 ? var_1 : 16383)))))));
    var_14 = ((124 ? var_4 : var_1));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (arr_1 [1] [1]);
            arr_8 [i_0] [i_1] [i_0] = (((arr_1 [i_0] [i_0]) ? -279874059 : -124));
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = (max(var_15, 98));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_16 = (max(((min(var_12, (arr_13 [i_2] [i_2] [i_0])))), ((-(arr_4 [12])))));
                var_17 = (min(var_17, ((min((((!((min(8160271164695025721, 7012)))))), (arr_0 [i_3]))))));
            }
        }
    }
    var_18 -= ((((((-8160271164695025721 ? var_3 : var_11)) != (127 & var_7))) ? (min((var_10 + -124), var_3)) : (max(var_2, var_3))));
    #pragma endscop
}
