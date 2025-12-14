/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 | (((((~(-32767 - 1)))) ? (~var_5) : (min(var_1, var_2))))));

    for (int i_0 = 4; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 3] = ((((max((min((arr_0 [0]), (arr_0 [i_0 + 3]))), (arr_1 [3] [i_0 - 1])))) >= (min((min(var_4, var_8)), (((arr_1 [6] [i_0 - 2]) ? (arr_0 [i_0 - 4]) : (arr_1 [2] [2])))))));
        arr_3 [i_0 + 2] [10] = -440525793;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 = (arr_7 [i_2] [i_2 + 2]);
                    arr_9 [i_2] [i_1 - 1] [i_2] = (arr_0 [i_0 - 3]);
                    var_13 = var_5;
                    arr_10 [i_2] [12] [i_2 + 3] = (min(((((arr_5 [7] [6]) ? ((8143382368889595439 ? -26837 : (-32767 - 1))) : (((var_2 < (arr_1 [i_1] [i_1]))))))), (((min((arr_4 [i_0] [8] [7]), 536870911)) | (arr_8 [i_1 + 1] [6] [6] [i_0 + 2])))));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3 - 4] = ((((min((arr_4 [3] [3] [7]), (arr_4 [12] [i_3 - 4] [i_3 - 4])))) ? 0 : (arr_5 [i_3 - 1] [7])));
        arr_14 [i_3] = (~(min((arr_11 [0]), -1852674338)));
        var_14 = ((((((min(var_8, 8622969790860530536)) ^ (max(1, (arr_4 [1] [i_3 + 1] [11])))))) ? (arr_1 [0] [i_3 - 4]) : (((-9223372036854775807 - 1) ? (-32767 - 1) : ((33552384 ? (arr_0 [i_3 + 1]) : var_8))))));
    }
    var_15 = (min(((((var_1 >= var_10) + var_5))), (((3042924179299008811 ? 4505 : -1852674338)))));
    #pragma endscop
}
