/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = var_5;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0 - 1] [i_0] = ((62040 - ((max(0, 1)))));
        arr_5 [8] [8] &= ((min((arr_3 [8] [i_0 - 1]), (arr_3 [1] [i_0 + 2]))));
        arr_6 [i_0] = (((((min((arr_3 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) > (((arr_0 [i_0] [i_0 + 4]) ? var_3 : 993015522))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_11 [0] = 62040;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_18 [i_2] [i_2] [i_3] = (((arr_16 [i_1 + 2] [i_1 - 2]) ? (max(13296988471007859069, ((((arr_15 [i_1] [i_3]) + -536870912))))) : (!1152921504606846975)));
                    arr_19 [i_1] [i_2] [i_3] = (arr_15 [i_3] [i_1]);
                    arr_20 [i_1] [i_3] [i_3] |= (!213);

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_25 [i_3] [i_2] [i_2] [i_2] = (arr_23 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2]);
                        arr_26 [20] [i_3] [i_1] = ((((min((arr_9 [i_1] [i_1 - 2]), (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1 - 2])))) ? (((5713944885472763364 >= 3404928846725067486) * (arr_9 [i_1] [i_2]))) : (((0 != ((var_1 * (arr_17 [i_4] [i_1]))))))));
                    }
                    arr_27 [i_3] [i_3] = (arr_24 [i_1] [13] [i_3]);
                }
            }
        }
        arr_28 [18] = ((max((2338533246 ^ 1977426317), var_2)) >= (arr_23 [i_1] [i_1] [i_1] [i_1]));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_36 [i_1] [i_5] [i_1] [i_1] [i_7] = ((!((min(((var_3 ? var_5 : (arr_10 [i_6 + 3]))), (((0 || (arr_9 [i_1] [i_5])))))))));
                        arr_37 [i_1] [i_7] [i_6] [i_5] [i_1] = (max((((arr_8 [i_1]) >= ((min(61, 12))))), ((((((arr_23 [i_1] [i_1] [i_6] [i_5]) ? (arr_13 [i_1] [i_5]) : var_3))) || ((((arr_13 [i_7] [i_1]) ? 196608 : (arr_13 [i_6 + 1] [i_6 + 1]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
