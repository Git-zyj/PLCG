/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 += ((((18446744073709551601 ? 19486 : var_11)) ^ ((63249 ? 129024 : 16167424531777061535))));
                arr_5 [i_0 - 1] [i_1] [i_0] = (((arr_0 [i_0] [i_0]) >= (((arr_0 [i_1] [i_0 - 1]) >> (((arr_2 [i_0 - 1]) - 141))))));
                var_16 = (((max(1023, 1165589944)) >= ((((((4294838271 ? (arr_1 [i_1]) : 151))) ? (min(0, (arr_0 [i_0] [i_1]))) : 40952)))));
                var_17 = 4294838271;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_12 [i_2] = 1;
                var_18 = min((arr_6 [i_2 + 2]), ((((arr_11 [4] [i_2 - 3]) & (arr_11 [2] [i_2 + 4])))));
            }
        }
    }
    var_19 = 1;
    #pragma endscop
}
