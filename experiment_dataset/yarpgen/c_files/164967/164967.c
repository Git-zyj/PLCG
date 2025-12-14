/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((var_3 ? (25574 || 4063825084418864477) : ((4063825084418864505 ? (2997365946452329824 && 1) : (arr_0 [15])))));
                var_12 = (((((4063825084418864477 ? (arr_3 [i_0] [i_1 - 2] [i_0]) : (arr_3 [i_0] [8] [i_0 + 2])))) ? -4063825084418864477 : (((38602 ? var_7 : var_5)))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 |= 36;
                    arr_12 [i_2] [i_1] [i_1] [i_2] |= ((((((arr_2 [i_2]) ? (!-4063825084418864477) : (~4063825084418864448)))) ? (arr_9 [i_0] [i_0]) : (max(22944, 4063825084418864476))));
                    var_14 = (arr_4 [i_0 - 1] [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 17;i_4 += 1)
        {
            {
                var_15 = (((min(var_4, 12051027759323544038)) | (min((arr_17 [i_3 + 1] [10] [i_4 + 1]), (arr_17 [i_3] [i_4 - 1] [i_3 - 2])))));
                var_16 = 23535;
                var_17 = -4063825084418864477;
                var_18 = (max(var_18, ((min(((((((arr_3 [3] [i_4] [i_3]) ? var_7 : (arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2])))) ? (max(126, 4063825084418864478)) : ((min((arr_14 [i_3 - 1]), (arr_15 [10] [i_4])))))), (arr_0 [15]))))));
            }
        }
    }
    var_19 = ((var_2 && ((((var_4 | var_5) & (var_1 | var_10))))));
    var_20 = -37;
    #pragma endscop
}
