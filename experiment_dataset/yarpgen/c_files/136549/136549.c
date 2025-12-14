/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((var_0 < (var_3 & var_1)));
    var_12 = 6531111285852786649;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((-16479 > ((((((var_6 + 9223372036854775807) >> 1)) >= (((max((arr_1 [i_0]), 1)))))))));
                var_14 = ((-((((7609016840734950113 != 1054360934) <= (arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
                var_15 = (((((min((!2576061611184978783), (-98 | 19516))) + 2147483647)) << (((max((var_9 + var_4), (arr_2 [i_0]))) - 228))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_3] = 186;
                arr_12 [i_3] [i_3] |= (((arr_9 [i_2] [i_3] [i_2]) - 15870682462524572832));
            }
        }
    }
    #pragma endscop
}
