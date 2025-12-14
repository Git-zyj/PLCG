/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1836903828;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (arr_2 [i_0 + 2] [i_1] [15]);
                var_21 += var_14;
                var_22 = ((var_4 * ((min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 2]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 13;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_23 = (((min((arr_2 [i_3 - 1] [i_2] [i_4 - 1]), 1532983056)) < (arr_7 [i_3 - 1] [i_3])));
                            var_24 = ((((-255 || (0 && 41017)))) >= (var_0 - var_12));
                            arr_18 [i_2] [i_2] = (max(30720, 30720));
                        }
                    }
                }
                arr_19 [i_2] [i_2] = (min((max((-236325472 & 6735895717444926199), -202)), (((((arr_1 [i_2]) && (arr_10 [i_2] [i_3] [i_3])))))));
                var_25 -= (arr_17 [i_2] [i_3] [i_2] [i_3]);
                var_26 = ((((((((arr_14 [i_2] [i_3] [i_3]) ? -30720 : var_17)) * ((-(arr_4 [i_2])))))) ? ((((var_14 ? (arr_4 [i_2]) : (arr_1 [i_2]))) * var_2)) : 20232));
            }
        }
    }
    #pragma endscop
}
