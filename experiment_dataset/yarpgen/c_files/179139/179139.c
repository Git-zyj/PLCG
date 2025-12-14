/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 3951861264;
    var_20 &= ((min(246774724, (((-26750 ? 246774745 : 2818))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [i_1] [i_2] [i_2] [i_1] [i_2] |= (max(((-(((arr_12 [i_0] [i_3] [i_2] [i_0]) ? -530315910 : (arr_4 [0]))))), 796868694));
                                arr_14 [i_4] [i_1] [i_2] [i_3] [i_4] [i_0] [i_0] = (((!32761) * (min(3951861264, (max((arr_3 [i_0]), 14596662735858872738))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_21 += 27;
                                arr_25 [i_0] [i_7 + 3] = (min(-13229, (arr_5 [10])));
                                var_22 = (min(((min(((32757 ? 1 : 129)), ((max(23686, 5295)))))), (((((-6949454974624692317 ? 8978618702675278941 : (arr_11 [i_5] [i_0] [i_5] [i_1 - 1] [i_0])))) ? 2527945415523858671 : (((max(114, 1))))))));
                                var_23 = (min(var_23, ((min((arr_9 [i_6] [i_1] [i_0 - 1]), ((628894950 ? (arr_11 [7] [i_7] [i_7 + 4] [i_6 - 1] [i_5]) : -100)))))));
                                var_24 += (((min(1, (arr_11 [i_6] [i_0 + 1] [i_6] [i_6] [i_1 - 1])))) ? (((min(114, 103)))) : (((-2147483647 - 1) ? 23686 : (arr_6 [10] [10] [i_6 - 3] [0]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
