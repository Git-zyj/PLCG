/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_1);
    var_11 += (var_6 || var_0);
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_4] |= ((!((max(-4074594078690258143, 37790)))));
                                var_13 = ((((max((arr_4 [i_1 + 1] [i_2 + 2] [i_2 + 2] [i_3 - 4]), var_2))) ? (((13124810544920614837 || (!-31)))) : (!var_1)));
                            }
                        }
                    }
                    var_14 = (((arr_10 [i_0] [i_2 - 1] [i_1 - 1] [16] [i_1]) ? (arr_10 [i_0] [i_2 - 1] [i_1 - 3] [6] [9]) : var_8));
                    var_15 -= ((~(((((3 ^ (arr_9 [i_1] [i_1] [i_1] [i_1])))) ? (arr_3 [i_0] [i_1 - 2] [i_0]) : ((5891 ? (arr_8 [i_0] [i_0]) : var_3))))));

                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        var_16 = (max(var_16, (((((max(51836, 1))) != (arr_3 [i_0] [i_0] [i_0]))))));
                        arr_15 [5] [i_1] [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] = var_7;
                        var_17 = (min(var_17, 1));

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_18 = 1;
                            arr_18 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_1 - 3] [i_0] = (((65535 && 255) ? (((arr_16 [i_1 - 2] [i_2 - 1] [i_1 - 2] [i_5 - 2]) ? var_3 : var_2)) : (((!(arr_1 [i_1 + 1]))))));
                        }
                        arr_19 [15] [i_0] [i_1] [i_2 + 2] [i_5] = ((16786299633762322199 ? 1 : (!17782363887181991472)));
                    }
                }
            }
        }
        var_19 = (arr_16 [i_0] [i_0] [i_0] [7]);
        arr_20 [i_0] [i_0] = -6120177967478821820;
    }
    #pragma endscop
}
