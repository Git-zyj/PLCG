/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 25383;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] = 236;
            arr_6 [i_0] = var_5;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_17 [i_3] = var_5;
                            var_14 = ((var_3 < (0 & -1)));
                            var_15 += (arr_1 [i_4] [i_1]);
                            var_16 = 45328;
                        }
                    }
                }
            }
        }
        var_17 = (202 ? 66 : ((var_8 << (((arr_0 [i_0]) + 6886436142026859418)))));
        var_18 = ((207 ? 31 : (arr_3 [i_0])));
        var_19 = ((0 ? 15 : 63028));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_20 [i_5] = (((arr_19 [i_5]) ? (((min(0, 0)))) : ((((((arr_18 [4]) ? 668575034 : var_7))) ? (max(32767, 2)) : var_6))));
        var_20 -= (arr_18 [i_5]);
        var_21 = ((!(((10742089392866000645 % (arr_19 [i_5]))))));
    }
    var_22 = ((192 / (((((var_3 ? -11713 : 0))) ? -58 : 7704654680843550983))));
    #pragma endscop
}
