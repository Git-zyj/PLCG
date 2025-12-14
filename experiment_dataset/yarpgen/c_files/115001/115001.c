/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    var_18 = (max(var_18, var_1));
                    arr_8 [i_0] [i_2] [i_2] [i_2] = (((((arr_1 [i_2] [i_2]) ? ((var_14 ? 10458435996229524269 : 177)) : ((((arr_5 [3] [5]) ? var_0 : (arr_0 [i_1])))))) | (((((arr_2 [i_0 + 1] [i_0] [i_0 - 2]) && (arr_2 [i_0 + 1] [i_0] [i_0 + 1])))))));
                    var_19 = (((!((min((arr_0 [i_0]), 17248311531755974881))))));
                    var_20 = ((((min((max(146, (arr_7 [i_2]))), (((var_15 > (arr_0 [i_2 + 2]))))))) && ((max((((1198432541953576729 ? (arr_2 [i_0] [i_1] [i_2]) : var_14))), (min(var_5, 8989607068696576)))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_21 = (min((((arr_2 [i_3] [i_3] [i_5 + 1]) ? ((var_4 | (arr_6 [i_5] [i_5] [i_3] [i_5]))) : (arr_16 [i_5 - 1] [i_0] [i_0]))), (arr_2 [i_0] [i_0] [i_5 + 1])));
                                var_22 = 48913;
                                var_23 = (((((var_9 ? (arr_12 [i_5] [i_5 + 1] [i_1 - 1] [i_1 - 1]) : ((var_0 ? var_9 : var_7))))) ? ((max(((var_4 / (arr_6 [i_5] [i_3] [i_5] [i_5]))), (arr_14 [i_0] [i_1] [i_3] [i_4] [i_4])))) : (~8989607068696590)));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1 + 1] [i_1] [i_1 + 1] = ((((!(arr_9 [i_0 - 2]))) ? var_16 : var_0));
                }
                var_24 |= (+((min((arr_17 [i_0] [i_1] [i_0 - 2] [i_1]), (arr_17 [i_0] [i_0] [i_0] [i_0])))));
                var_25 = (((((~(arr_7 [i_0])))) ? var_4 : (max(((((arr_10 [i_1 + 1] [i_1 + 1] [i_0]) && (arr_6 [i_0] [i_0] [i_1 + 2] [i_0])))), 17248311531755974904))));
            }
        }
    }
    var_26 = (((var_13 > ((var_9 ? var_14 : var_11)))) ? ((var_3 ? (((var_15 ? var_3 : var_12))) : -1198432541953576723)) : ((min(-1784983310, (!1023)))));
    var_27 -= ((var_8 ? ((max(var_16, ((var_6 ? var_14 : var_12))))) : (min(((2147483642 ? var_14 : 12968079564525285900)), var_13))));
    #pragma endscop
}
