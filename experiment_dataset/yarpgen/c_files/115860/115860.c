/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 += (((((var_9 >= 5402058957979650517) <= 5402058957979650517)) ? (((((!(arr_7 [i_0] [i_0] [i_0] [i_0])))))) : var_6));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_18 *= ((!((((((((arr_9 [i_3] [i_3] [i_3] [i_3]) && var_1)))) / ((var_0 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 5402058957979650517)))))));
                        var_19 ^= (((max((5402058957979650517 / 1703162335), ((((arr_11 [10]) ? var_14 : 23382))))) < ((~(arr_2 [i_3])))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_16 [i_0] [i_3] [i_0] [i_1] [i_0] = (min(var_14, ((((((arr_10 [i_0] [i_1]) ? var_1 : 23382))) ? (arr_14 [6] [i_1] [i_1] [6] [i_1] [i_1] [i_1]) : (max((arr_0 [i_0] [i_1]), (arr_1 [i_3])))))));
                            arr_17 [5] [i_0] [i_2] [2] [2] [6] [i_4] = ((((((((97 ? 97 : 127))) ? (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4]) : 18))) + var_2));
                            var_20 = (((arr_3 [i_0]) ? (arr_8 [i_0] [i_1]) : (min((arr_0 [i_0] [i_4]), (!var_6)))));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_21 &= ((arr_9 [i_1] [i_3] [i_1] [i_5]) ? (((!42748) ? ((var_3 ? (arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3] [i_5]) : 5402058957979650517)) : (~-5402058957979650517))) : (((((((var_2 ? var_11 : var_7))) && var_13)))));
                            var_22 = (max(var_22, ((((((((var_15 <= (arr_19 [i_3] [i_1] [i_3] [i_1] [8]))) ? ((30766 ? var_2 : 29059)) : ((((arr_4 [i_0] [i_3] [i_0]) ? 3730720998 : var_1)))))) ? ((min((((126550165 ? (arr_6 [i_3] [0]) : (arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))), (((arr_6 [i_3] [i_3]) ? (arr_2 [i_3]) : (arr_8 [i_3] [i_3])))))) : (arr_13 [i_1] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((var_8 ? (((((max(1703162335, var_6))) ? (var_8 / 6758) : ((var_0 ? -4616480762314893372 : var_0))))) : (((max(126550165, var_2)) | -19))));
    #pragma endscop
}
