/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_2] [i_2] = (~544444504);
                    arr_9 [i_1] [i_2] [i_1] [i_0] = ((((max(544444504, (min(var_3, -544444505))))) ? (((((544444498 / (arr_1 [i_1] [i_1])))) ? (arr_3 [i_2] [i_1] [i_0]) : ((max((arr_6 [i_0] [i_0] [i_2]), 544444525))))) : ((((max((arr_6 [i_2] [i_1] [7]), var_7))) ? ((((arr_5 [i_0 - 4] [i_0 - 4] [i_2]) ? var_10 : var_12))) : (min(-2147483635, 13383102322066243082))))));
                    arr_10 [i_2] [i_1] [i_2] = var_10;
                    arr_11 [i_2] [i_1] [i_2] = (((889427474 && 7315229923826184437) ? -var_2 : var_5));
                    arr_12 [i_0] [i_1] [i_2] = arr_5 [i_0 - 4] [i_2] [i_2];
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_15 [i_0] = arr_2 [i_0] [i_1];
                    arr_16 [i_0] [i_0] [i_0] = var_2;
                    arr_17 [i_0 + 3] [i_1] [i_3] = (min(((-var_8 / (((arr_5 [i_0] [i_1] [i_3]) ? -544444504 : (arr_7 [i_3] [i_1] [i_0]))))), ((503316480 ? ((var_4 ? (arr_7 [i_0] [i_1] [12]) : -544444497)) : ((544444496 ? 7734129260181342081 : 4223786588693235935))))));
                }
                arr_18 [i_0 - 4] = (max(((min(var_3, (var_9 == var_1)))), (((arr_1 [i_0 + 3] [i_1]) ? (arr_2 [i_1] [i_0]) : (arr_13 [i_1] [i_1] [i_1] [i_0])))));
                arr_19 [5] [i_0] [i_0 + 2] = (((((((((arr_6 [i_0] [i_0] [i_1]) <= var_7)))) <= ((9223372036854775807 ? var_1 : -382090137)))) ? (min((min((arr_1 [i_0] [i_1]), var_0)), ((((arr_4 [i_0 + 2] [i_0 - 2] [i_1] [i_1]) && 16734097986938119634))))) : ((((min(var_5, var_0))) ? var_0 : -var_9))));
            }
        }
    }
    var_13 = (((((1985301245 ? (max(9223372036854775785, var_4)) : (-2147483643 < 16734097986938119641)))) <= (min((~4220965683585281682), (min(365964802195157836, var_12))))));
    #pragma endscop
}
