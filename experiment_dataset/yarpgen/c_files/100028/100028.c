/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((arr_3 [i_0] [i_0]) > (arr_3 [i_1] [i_1]))));
                arr_6 [i_0] [14] |= ((((((arr_4 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_1 [i_1])))) ? ((611799731531063159 - (arr_4 [i_0] [i_1] [i_0]))) : (arr_3 [i_1] [i_1])));
                arr_7 [19] [i_1] [19] = 0;
                var_12 ^= (((arr_3 [15] [i_0]) ? (max(18446744073709551615, 18363941815437582533)) : (arr_1 [1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_13 = (min(var_13, 2213338404));
                    var_14 = (min(var_14, 240));
                    var_15 |= (((min((1723799375 & 203575487), (arr_10 [i_3 + 1])))) ? 1023 : (((arr_15 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]) ? 2213338387 : var_9)));
                }
            }
        }
    }
    var_16 = (var_10 * var_7);
    var_17 = (min(var_17, var_8));
    #pragma endscop
}
