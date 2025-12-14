/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((((7939249378684510011 || (!4294967295))) && (!0)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_2] [i_1] = max((!var_2), (max((var_8 || var_1), 253)));
                        var_12 = (~22378);
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        arr_18 [i_4] = (~1686);
        arr_19 [i_4] [i_4] = ((!(((1 ? 4272947908 : 0)))));
        var_13 = (min(var_13, ((min(32768, 22019391)))));
    }
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        var_14 -= ((((((((11592605470994679126 ? var_10 : var_9))) ? ((var_7 ? 32768 : 22019391)) : (((32768 ? 249 : 128)))))) ? ((-((91 ? 4272947905 : 22019392)))) : var_11));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_30 [10] [i_6] [i_5] [i_7] [i_6] = ((236 ? var_0 : ((((var_5 ? var_4 : var_3))))));
                        var_15 = -var_6;
                        arr_31 [i_5] [1] [i_5] [i_5] [i_8] = (((18446744073709551607 ^ -8418992) ? ((0 << (var_6 - 1448421881))) : ((((var_4 ? var_7 : var_0)) | var_1))));
                    }
                }
            }
        }
        var_16 = (max((var_5 ^ 267329515), (min(1573357841, var_5))));
    }
    var_17 -= ((var_2 != ((4502500115742720 ? var_1 : var_4))));
    var_18 = (((((~(~-3338994288650576910)))) ? var_3 : var_9));
    #pragma endscop
}
