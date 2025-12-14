/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 = ((-(((-29 + var_11) ? (-1487615135 * 18446744073709551615) : ((((arr_1 [i_0]) * (arr_1 [17]))))))));
                            var_20 ^= (max(15, (((((8388607 ? -8534 : -1)) > var_3)))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [6] = ((1 > ((-(max(3, (arr_8 [i_0] [14])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                var_21 = 4294967293;
                arr_19 [3] [14] [4] = (((min((4294967283 ^ 3), -2400729923))) ? (min((~var_10), (~var_16))) : (min(18, 4294967283)));
                var_22 = (arr_11 [i_4] [2]);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_23 = (max(var_23, (((-16589678021057552480 ^ (arr_5 [3]))))));
                            arr_27 [i_6] [1] [10] [i_4] = -25666;
                            var_24 = ((~(arr_17 [13] [2])));
                        }
                    }
                }
                arr_28 [i_4] = ((max((arr_25 [i_5] [10] [i_5]), ((min(var_5, (arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5])))))) - var_15);
            }
        }
    }
    var_25 = var_13;
    #pragma endscop
}
