/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_8 [11] [i_1] [1] = 0;
                    arr_9 [i_0] [i_2] &= var_0;
                    var_15 = ((var_3 + (arr_3 [i_1] [12])));
                }
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    var_16 = ((((var_9 ? (arr_7 [i_1] [i_1]) : -2988416015121809197)) & (((((1 / 2988416015121809197) < (arr_6 [i_1] [i_1] [i_1])))))));
                    var_17 = (2988416015121809186 + 2988416015121809175);
                    arr_13 [i_1] [i_1] [i_3] = ((((~150) ? ((((arr_1 [2]) ? (arr_5 [i_0]) : (arr_4 [i_1] [i_3])))) : (~var_10))));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_18 = (min(var_18, ((min((!-2988416015121809194), (((((((arr_16 [i_4] [i_1] [i_0 + 2] [i_4]) && var_7)))) == (((arr_15 [i_0 + 3] [12] [i_4] [12]) ? 0 : var_10)))))))));
                    var_19 = (arr_3 [i_4] [i_0 + 2]);
                    var_20 = (max(var_20, 22165));
                    var_21 = (max(var_21, (((~(((var_9 >= (-2988416015121809175 == 13781347749118896053)))))))));
                }
                arr_17 [i_1] [i_1] = (((min(-2988416015121809201, ((((arr_7 [i_1] [i_1]) ? (arr_10 [i_1] [i_0] [1]) : 130))))) == ((((!((((arr_15 [i_0] [i_0 + 1] [i_1] [i_0]) ^ (arr_11 [i_0 + 3] [1]))))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {
                            arr_23 [2] [i_1] [i_1] [i_1] [2] = (max(((12372963473744827209 ? (arr_5 [i_0 + 2]) : (arr_5 [i_0 + 2]))), (((-2147483647 - 1) ? 130 : (arr_5 [i_0 + 2])))));
                            arr_24 [i_0] [6] [i_5] [i_5] [i_6] [8] &= (min(((min(var_12, 3))), 2988416015121809175));

                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_22 -= ((((((((min(3, 10)))) ^ (((arr_0 [11] [i_0]) ? (arr_0 [i_0] [i_6]) : (arr_26 [i_7])))))) ? 13755223578673643125 : (((((var_3 | (arr_5 [11])))) ? ((((arr_6 [i_5] [i_6] [i_7]) ? (arr_20 [i_5] [i_6] [i_5] [i_5]) : (arr_16 [i_5] [i_1] [2] [2])))) : (max((arr_15 [i_0] [4] [i_5] [i_7]), 12372963473744827209))))));
                                var_23 = (arr_27 [i_0] [i_1]);
                            }
                            var_24 = (min(var_24, (((var_10 ? (((arr_6 [i_5] [i_5] [i_5]) ? (arr_18 [i_6 + 4] [i_6 + 1] [i_6] [i_5]) : ((max((arr_27 [i_1] [i_5]), (arr_0 [11] [i_1])))))) : (arr_0 [i_1] [12]))))));
                        }
                    }
                }
                var_25 = (min(var_25, (arr_22 [i_0] [8] [8] [8] [10])));
            }
        }
    }
    var_26 = (min(var_26, (((var_1 ? var_10 : var_10)))));
    #pragma endscop
}
