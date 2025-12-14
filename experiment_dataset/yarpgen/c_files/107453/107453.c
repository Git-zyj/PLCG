/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((((~23) > ((min(-32764, 23)))))), (((~4823716832002497504) ? (((226 ? 201 : var_7))) : (-4823716832002497505 % var_3)))));
    var_18 -= ((!(((~(var_13 && 210))))));
    var_19 = (((var_5 ? (((var_7 ? 210 : var_4))) : (min(4823716832002497504, 216)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_0 [i_0 + 2]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [18] [i_2] [i_4 - 3] = ((((((((arr_11 [i_0 - 1] [i_1] [i_2] [4] [19] [15] [12]) || 1418016804)) ? (~46) : ((1314789492 ? (arr_1 [11] [i_1]) : (arr_9 [i_0 + 3] [i_3])))))) ? (38 || 23) : (((arr_2 [i_0 + 2] [i_0] [i_0 + 3]) ? (!-4823716832002497505) : (arr_0 [i_0 + 2])))));
                                var_20 -= (max((min((((3915786721 ? (arr_11 [i_1] [i_1] [i_1] [i_2] [10] [i_2] [i_0]) : 23))), (arr_4 [i_1] [i_1]))), (arr_8 [i_3] [i_3])));
                                var_21 = (min((((!(((230 ? 16798 : 45)))))), (min(0, (~3915786721)))));
                                arr_13 [i_1] [i_3] [i_1] = (arr_8 [i_1] [i_3]);
                                var_22 += (max((arr_4 [i_1] [i_4 - 3]), (((~(~31606))))));
                            }
                        }
                    }
                }
                var_23 -= ((~(arr_0 [i_0 + 1])));
                var_24 = (((!209) | ((379180594 & (((37 || (arr_2 [i_0 + 1] [i_0 + 2] [i_0]))))))));
                var_25 = (max(var_25, ((((((209 ? 204 : 3915786721))) <= ((33 ? (((46 << (-433232608769700418 + 433232608769700426)))) : (min((arr_7 [17] [i_1] [22]), (arr_0 [i_0 + 1]))))))))));
            }
        }
    }
    var_26 *= var_3;
    #pragma endscop
}
