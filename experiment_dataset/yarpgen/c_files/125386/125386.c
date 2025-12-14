/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = arr_5 [i_0];
                var_20 += ((1 << (((arr_4 [i_0] [0]) - 26))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_17 [i_0] [9] [i_0] = (arr_11 [i_4] [i_3 - 2] [19] [i_0] [i_0]);
                                arr_18 [i_1] [2] &= (arr_5 [i_2]);
                                arr_19 [i_0] [i_1] [i_0] [i_1] [i_1] = (((1 ? (arr_2 [i_3]) : (87 - 1636341572667401564))));
                                var_21 += (arr_16 [i_0] [i_0] [i_2] [20] [8]);
                                var_22 = -2;
                            }
                            for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [12] [i_2] [i_3] [i_0] = 17433279626122474330;
                                var_23 &= ((((((((arr_6 [19] [19] [i_0]) ^ var_15)) - (arr_2 [i_3 + 1])))) % 42069));
                            }
                            for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                var_24 = (arr_11 [i_0] [i_1] [i_2] [i_0] [i_6]);
                                var_25 = (((arr_12 [i_0] [i_1] [i_2] [i_1]) != var_19));
                                var_26 &= (((((arr_10 [i_0] [4] [i_0]) + 9223372036854775807)) >> (((min(2789885194, -1220689617381660277)) + 1220689617381660290))));
                            }
                            var_27 = ((~((((((arr_15 [i_0] [i_0] [i_1] [i_2] [i_3 + 2] [14]) & 1220689617381660275))) ? 1220689617381660275 : var_0))));
                            var_28 = ((((-1220689617381660278 > (arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 + 2]))) ? (((arr_20 [i_0] [i_1] [i_2] [i_2] [i_2] [19] [i_3]) ? (arr_14 [i_1] [9]) : ((((arr_4 [i_0] [i_0]) ? (arr_4 [1] [i_0]) : var_3))))) : (((((62226 > -12528) > (((-16926 || (arr_1 [3]))))))))));
                        }
                    }
                }
                var_29 &= (((((-(arr_11 [i_0] [i_0] [i_1] [11] [i_1])))) ? (arr_11 [i_0] [i_0] [i_0] [14] [i_0]) : ((~(arr_11 [i_0] [3] [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_30 = ((((min(var_8, (max(var_12, var_5))))) && 18));
    var_31 = (min(var_31, -2));
    #pragma endscop
}
