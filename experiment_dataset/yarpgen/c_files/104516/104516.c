/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_1] = 15564;
                    var_13 = (var_10 ? ((((((min(var_10, var_2))) && ((((arr_5 [i_0] [i_0] [i_0] [i_0]) - var_10))))))) : var_1);
                    arr_7 [i_0] [i_1] = ((((min((arr_5 [i_2 - 2] [i_2 - 3] [0] [i_2 - 1]), (arr_5 [i_2 - 2] [i_2 + 2] [i_2 - 3] [i_2 - 3])))) || (((arr_5 [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_2 + 4]) != 16769024))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (max((((arr_10 [i_3]) ? 57344 : (arr_10 [i_3]))), (max((arr_10 [i_3]), (arr_10 [i_3])))));
        arr_12 [i_3] = ((-(arr_10 [i_3])));
    }
    var_14 = (min(var_14, var_7));
    var_15 = ((-(var_3 || var_1)));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            {
                arr_19 [i_5] = min(((min((arr_0 [i_4] [i_5 + 1]), ((-1521104434 ? var_11 : 4078742718))))), (max((arr_1 [i_4]), (arr_1 [i_4]))));
                var_16 = ((((48 ? var_0 : (arr_9 [i_4 - 1] [i_4 + 2]))) < -var_0));
                var_17 ^= ((((arr_4 [i_5 + 1] [i_5 - 1]) & var_8)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 15;i_7 += 1)
        {
            {
                var_18 = (min(var_18, ((min(((~((var_11 ? 1920 : 10716596034678679300)))), (arr_21 [i_7 - 3]))))));
                var_19 = (min(var_19, (((min((arr_20 [i_7 + 3]), (arr_20 [i_7 - 2])))))));
                var_20 = ((((((((((var_4 + 9223372036854775807) << (var_2 - 1956668421608766622)))) ? (arr_20 [i_7 + 2]) : (((arr_23 [i_6] [i_6]) & (arr_21 [i_6]))))) + 9223372036854775807)) << (((((((~var_7) ? ((-4036551424844545295 ? var_5 : (arr_20 [i_7]))) : (arr_20 [i_7]))) + 995935240)) - 46))));
            }
        }
    }
    #pragma endscop
}
