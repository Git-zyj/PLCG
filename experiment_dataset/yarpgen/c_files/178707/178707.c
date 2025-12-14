/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-273664985, var_10));
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_8 [8] [i_1] [i_2] [i_2] [i_2] [i_2] = (-15010 < 2);
                            arr_9 [i_0] [i_1] [2] [20] = (min(1080863910568919040, -47));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_16 = ((((((arr_12 [i_0]) ? (arr_10 [i_0] [i_1] [i_4] [i_5]) : var_4))) >= (((!var_9) ? ((var_12 ? var_0 : var_7)) : (arr_0 [16] [i_4 + 1])))));
                            var_17 = 10246978031711424390;
                        }
                    }
                }
                var_18 = (((((~(arr_2 [i_0] [i_1] [i_1])))) ? ((var_8 + ((min((arr_4 [i_0] [i_1]), (arr_10 [i_1] [i_1] [i_1] [i_0])))))) : ((((((max(192, 143)))) >= (min(var_6, 1)))))));
                var_19 = (((1023 | 1) / (((0 || 64445) ? (arr_0 [i_0] [i_0]) : ((max((arr_15 [i_0] [i_0] [i_0]), var_12)))))));
            }
        }
    }
    var_20 -= (max((max(1, 17365880163140632574)), ((-3662 ? (64445 & var_1) : ((17365880163140632576 >> (var_12 - 53220)))))));
    #pragma endscop
}
