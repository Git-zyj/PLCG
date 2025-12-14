/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = ((84 ? var_11 : (max((((var_14 ? 5 : var_6))), 11042951074928838128))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 |= ((((((~105) ? (((arr_6 [i_0] [i_0] [14]) ? (arr_0 [1]) : 5921567501186367042)) : (~50350)))) ? (((5952897565735019520 ? 5921567501186367046 : 18446744073709551615))) : ((((((arr_1 [i_1]) ? (arr_7 [i_2] [1] [1] [i_0]) : -5921567501186367043))) ? 5921567501186367048 : ((8009126746635119169 ? -5921567501186367048 : (arr_6 [i_0] [i_0] [i_2])))))));
                    arr_8 [i_1] [i_2] [i_1] [i_1] = 6423603854723968697;
                    var_19 = (max((arr_7 [i_1 - 2] [i_1] [9] [i_2]), ((-((3286481013664448327 ? -110 : 0))))));
                    var_20 = ((((35 > (arr_1 [1]))) ? ((~((((arr_3 [i_1]) > (arr_4 [i_1] [i_1 - 3] [i_1 - 3] [i_1 - 2])))))) : 84));
                    var_21 *= (min((arr_7 [i_1] [1] [1] [i_1 - 2]), (((arr_7 [i_1 + 2] [12] [12] [i_1 + 2]) ? var_8 : 1625578147))));
                }
            }
        }
    }
    var_22 = 84;
    #pragma endscop
}
