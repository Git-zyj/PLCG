/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(((-5807526836970319330 ? 7797605073909948003 : -8540293524090073440)), (max(var_7, var_17))))) ? (min(var_6, (9171230375124158687 / var_2))) : (min(var_9, (min(var_14, -6025124990901071372)))));
    var_20 = 18012199486226432;

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_21 = (max(274877906688, (arr_1 [i_3])));
                        var_22 = (max(var_22, (max((min(var_4, -var_18)), (max((arr_0 [i_2]), (arr_6 [i_2 + 2] [i_1 - 2] [i_0 - 1])))))));
                        var_23 = arr_8 [i_0] [i_1 + 1] [i_1] [8];
                        var_24 = (max(var_24, ((((arr_10 [9] [9] [9] [i_0 - 1] [i_0 - 1]) - (arr_10 [10] [11] [i_1 + 1] [i_2] [18]))))));
                    }
                }
            }
        }
        var_25 = min(var_2, (min(var_11, (arr_3 [i_0 - 1] [i_0 - 2] [i_0 + 2]))));
        arr_11 [18] = max(9075693899299539021, 274877906816);
        arr_12 [i_0] = (min((-9223372036854775807 - 1), 0));
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_26 = -274877906816;
        var_27 = -var_2;
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        arr_17 [i_5] = arr_2 [i_5];
        var_28 = (max(var_28, (arr_7 [16] [16])));
        var_29 ^= max(var_13, var_13);
        var_30 = (max(var_30, (arr_2 [i_5 + 1])));
    }
    #pragma endscop
}
