/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 ^= (max(34173, (max(4151626500, (31362 | 1848831084)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 += ((2268373952 ? (max(var_0, (arr_3 [i_0]))) : (arr_9 [i_3] [i_3] [i_3] [i_3])));
                            var_14 = ((((!(((arr_4 [i_0] [i_0]) || 45193)))) ? (((var_2 ^ 12) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_1] [i_2] [i_1]) : (arr_3 [i_2]))) : (((2413798395 ? (arr_1 [i_0] [9]) : -2001648199))))) : ((((arr_11 [8] [10] [i_2] [i_2] [i_3] [i_3]) ? (((~(arr_1 [i_2] [i_1])))) : (((arr_10 [i_3] [i_2] [i_1] [i_0]) ? (arr_4 [i_2] [i_3]) : 6778577070565578749)))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = 255;
    var_16 = var_0;
    var_17 = ((((((((177 ? 14 : 3761155371))) ? (((max(32756, 158)))) : var_7))) || 31349));
    #pragma endscop
}
