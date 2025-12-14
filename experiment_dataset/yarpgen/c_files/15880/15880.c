/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_17 = (((((arr_1 [i_0] [i_0]) ? (((arr_0 [i_0] [i_1]) | (arr_1 [i_0] [i_0]))) : (((210499893254154994 ? (arr_0 [i_0] [i_1]) : 15))))) << (!3123594363)));
            var_18 |= (arr_2 [i_1] [i_0]);
            var_19 = 1171372955;
            arr_5 [i_0] = ((((4294967272 ? 4294967266 : ((-16060 ? -17980 : 5868566796989165743)))) * 15));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = (arr_7 [i_0]);
            var_20 -= (((((arr_3 [0] [i_2] [i_2]) ? var_2 : (arr_3 [2] [i_2] [2])))));
        }
        var_21 += (arr_4 [i_0] [6] [i_0]);
        arr_9 [i_0] = var_1;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    {
                        var_22 = ((1376957874 ? 181 : 18003));
                        var_23 = -17980;
                        var_24 ^= (max(var_11, (min((max(74, 1171372933)), ((((arr_12 [i_0] [i_0] [0]) >= 181)))))));
                        arr_18 [i_0] [i_0] [i_3] [i_3] [0] [i_5 - 1] = (arr_0 [i_3] [i_3]);
                    }
                }
            }
        }
    }
    var_25 = var_6;
    var_26 = (min((((((min(var_1, var_15))) ? ((var_15 >> (var_15 - 860441772))) : ((var_1 ? var_15 : var_13))))), (max((max(var_4, 2918009438)), ((720992677689132185 ? 4294967280 : 3294))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                arr_24 [i_6] [0] = ((min((min((arr_23 [i_6] [i_6] [i_6]), (arr_22 [i_7]))), ((1044489636 ? (arr_21 [4] [i_6] [7]) : (arr_23 [21] [1] [i_6]))))));
                var_27 = (min((arr_22 [i_7]), ((((arr_20 [i_6] [i_7]) > 0)))));
                var_28 = (max(13770286086752952184, 65513));
                arr_25 [i_6] [i_6] = (((-3273 * 12) ? (arr_21 [i_7] [i_6] [i_6]) : (((((((arr_22 [i_6]) ? 23 : (arr_20 [i_6] [i_6])))) ? 32767 : (arr_20 [i_7] [i_6]))))));
                arr_26 [i_7] = ((min((arr_23 [1] [i_6] [i_7]), (arr_23 [i_6] [i_6] [i_7]))));
            }
        }
    }
    #pragma endscop
}
