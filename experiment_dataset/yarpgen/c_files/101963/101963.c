/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = var_17;
    var_20 = (4715001673530896775 ^ -3185224964242488687);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [16] [i_1] [i_1] [i_1] = (max((~30), (arr_1 [8])));
                            var_21 &= (((((((((arr_7 [14] [4] [3] [i_2] [2] [11]) ? (arr_3 [8] [13]) : 3185224964242488686))) ? -4715001673530896775 : 221))) ? ((((arr_6 [i_0] [16] [i_1] [i_0]) - ((60 * (arr_7 [i_0] [i_0] [13] [i_0] [9] [5])))))) : (((arr_8 [i_0] [11] [i_1] [16] [i_2] [i_3]) ? (arr_8 [i_3 + 1] [i_1] [i_3] [5] [5] [8]) : (((2126195527 ? -18633 : 175)))))));
                            var_22 = (min(var_22, (min((((-(((!(arr_7 [4] [i_2] [i_2] [i_1] [13] [1]))))))), (min((var_14 && var_5), (arr_2 [i_3 - 1])))))));
                        }
                    }
                }
                var_23 -= var_3;
                var_24 = ((47 ? (max(173, 3640105592)) : (arr_8 [i_0] [i_0] [6] [i_0] [11] [9])));
                arr_10 [i_0] [i_1] [i_1] = (((arr_1 [i_1 + 1]) ? ((~(arr_1 [i_1 + 1]))) : 67));
            }
        }
    }
    var_25 = ((-28241 ? 190 : 101));
    #pragma endscop
}
