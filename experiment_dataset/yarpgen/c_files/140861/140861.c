/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_10 ? var_10 : var_4) / (((2750844115598595924 ? 66 : 524288)))))));
    var_12 = ((var_1 || (((max(1, 792123432468487791)) >= (var_10 >= var_9)))));
    var_13 = (((((~-122) & (min(var_5, -1284055428)))) ^ (((((max(var_1, var_6))) | var_6)))));
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (max((((max(792123432468487791, 13615419946119355599)) & (arr_2 [i_0]))), (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_16 = (15962181394437185379 % 197);
                arr_8 [i_0] [i_1] [11] &= ((!var_6) ? ((((!(arr_5 [i_0] [i_1] [i_2]))))) : (((arr_7 [i_1]) ? (min((arr_3 [i_1] [i_1]), 32767)) : (var_9 || var_1))));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [1] [i_0] [i_0] = (((((arr_9 [i_0] [i_3] [i_4]) && -6212158232727772817)) ? (((arr_3 [i_0] [i_0]) + var_3)) : (((max(var_6, (arr_9 [i_0] [i_1] [i_3])))))));
                        var_17 = 0;
                    }
                }
            }
        }
        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            arr_17 [i_0] [i_5] = -13423;
            var_18 = -649011117359203697;
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_23 [i_7] = (arr_7 [i_6]);
                        var_19 = ((((var_0 == ((min(-2789657396095262165, (arr_6 [i_0] [i_5 + 2] [i_7 - 1])))))) ? ((-var_7 % ((var_4 * (arr_11 [i_0] [i_0] [i_0] [i_6 - 1] [i_6 - 1]))))) : ((((26450 >> (-7929376174740316164 + 7929376174740316166)))))));
                        arr_24 [i_7] [i_6 - 1] [i_7] = ((var_5 ? (arr_9 [i_0] [i_0] [i_0]) : ((-649011117359203697 ? 1284055422 : 2047))));
                    }
                }
            }
            var_20 = (min(var_20, ((((max(((4463 ? (arr_2 [i_5]) : var_5)), (((771144334 & (arr_6 [i_0] [i_0] [i_0]))))))) ? ((4 ? -1099302415871771766 : 22)) : var_6))));
        }
    }
    #pragma endscop
}
