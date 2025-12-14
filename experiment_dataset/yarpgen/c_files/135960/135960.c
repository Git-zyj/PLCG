/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~(((!(~1)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1]);
                    arr_11 [i_0] [i_1] [i_2] [i_0] = (((arr_6 [15] [i_1 + 1] [i_2]) * (~var_0)));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_19 += ((((min(11, ((((arr_0 [i_3]) ? 5010794145681218687 : 233)))))) ? ((((arr_8 [i_3] [i_3] [i_3] [i_3]) != var_11))) : 48507));
        var_20 = var_6;

        /* vectorizable */
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_21 = (((var_16 >> (var_6 - 9204))));
            var_22 |= var_3;
            var_23 = (max(var_23, (~-5942023606745747712)));
            var_24 |= 18446744073709551605;
            var_25 = (var_8 * 246733106117173525);
        }
        var_26 = (max(1, ((9027932036807547873 ? var_15 : ((~(arr_7 [i_3])))))));
    }
    #pragma endscop
}
