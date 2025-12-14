/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (max((var_7 >= var_17), (max((arr_0 [i_0]), 54))));
        arr_5 [i_0] = (((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2]))) / (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : 2107931088))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_9 [9] [i_1] = var_5;

            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                var_20 = (min(var_20, (((((((arr_11 [i_0 - 3] [i_0 + 2] [i_0]) ? (arr_11 [i_0 + 1] [i_0 - 1] [i_0]) : (arr_11 [i_0 - 1] [i_0 - 1] [i_0])))) || (3744208394 < -13019))))));
                var_21 = ((((max((arr_2 [i_0 + 2]), (arr_2 [i_0 - 3])))) ? var_8 : ((var_17 + (arr_3 [i_0])))));
                arr_13 [i_0] [1] = var_0;
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_22 = (-32767 - 1);
            arr_16 [i_3] [i_3] = (arr_14 [i_0] [i_3]);
            arr_17 [i_0 - 1] [1] [3] = 0;
        }
        arr_18 [i_0] &= var_15;
        var_23 = (max(((((arr_3 [i_0]) ? (arr_15 [i_0 - 1] [i_0 - 3] [0]) : (arr_8 [i_0 - 3] [i_0 - 3])))), (max(var_13, (arr_8 [i_0 - 3] [i_0 - 3])))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_24 = (max((((arr_20 [i_4]) ? ((min((arr_20 [2]), (arr_20 [i_4])))) : ((max(var_18, (arr_20 [i_4])))))), ((max((arr_20 [i_4]), (arr_19 [i_4]))))));
        arr_21 [i_4] = (arr_19 [i_4]);

        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            var_25 = (arr_24 [i_5 + 1] [i_4]);
            var_26 = (((arr_24 [i_5 - 1] [i_5 - 1]) != ((max((arr_19 [9]), (arr_22 [i_4]))))));
        }
    }
    var_27 &= var_2;
    var_28 = (min(var_28, (4294967295 || 27972)));
    #pragma endscop
}
