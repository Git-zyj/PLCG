/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((!((max(((max(707412305, 3587554991))), ((var_10 ? var_7 : 3587554991))))))))));
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = (arr_6 [i_1] [i_1]);
                    arr_8 [i_1] = arr_3 [i_2];
                }
            }
        }

        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_14 += ((arr_1 [7]) ? (arr_3 [i_3]) : (arr_9 [i_0] [i_3] [i_3]));
            var_15 = ((((max((arr_5 [i_0] [i_0] [i_3 - 2]), (arr_5 [i_3] [i_3 - 2] [i_3 - 1])))) ? (-11 || 241) : (((arr_6 [i_3] [i_3]) ? (arr_6 [i_3] [i_0]) : (arr_6 [i_0] [i_3])))));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_13 [i_4] = ((((min((max(218, -6079957606734746200)), (~151)))) ? ((((max((arr_2 [8]), var_9))) ? ((5 ? -4853947431582925106 : var_9)) : (arr_7 [i_4] [i_4] [i_4] [i_4]))) : ((((-1957976312 != ((4 ? (arr_4 [i_4] [i_4]) : 3587554990))))))));

            for (int i_5 = 4; i_5 < 8;i_5 += 1)
            {
                var_16 = ((-(~-11)));
                var_17 = ((((max((arr_15 [i_0] [i_4] [i_5 + 1]), (arr_15 [i_0] [i_4] [i_5 + 4])))) ? (arr_15 [i_5 + 1] [i_5 - 1] [i_5 + 2]) : (arr_5 [i_0] [i_4] [i_4])));
                arr_17 [i_4] [i_4] [i_4] = ((-5 ? ((-(~-1152521914))) : (((-9223372036854775807 - 1) ? var_5 : (arr_15 [i_0] [i_4] [i_5 - 1])))));
            }
        }
        var_18 += (arr_2 [i_0]);
    }
    #pragma endscop
}
