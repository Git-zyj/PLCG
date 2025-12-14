/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 || (((var_6 ? var_0 : (~var_4))))));
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = 1441197298;

            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                arr_8 [i_0] [i_0] = (32768 % 13487146247332770836);

                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_15 += (var_10 ? var_4 : 3596408267);

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (var_7 > var_0);
                        arr_16 [11] [i_0] = 5146205979987263297;
                    }
                }
            }
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                var_16 = (((((((var_0 ? var_12 : var_10))) != (var_12 * var_3))) ? 21586 : ((43968 ? ((var_6 ? 40983 : var_0)) : var_12))));
                arr_19 [i_0] [i_0] = ((var_1 % ((43968 ? (((var_10 ? var_7 : var_11))) : var_4))));
            }
        }
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            var_17 = ((((((((var_6 ? var_6 : var_8))) ? 4891857271869364640 : -var_9))) ? var_11 : (0 * 21576)));
            arr_22 [i_0] [i_0] = (-32735 || 1);
            var_18 += ((127 ? (((((var_4 ? var_7 : 698559028))) ? ((var_11 ? 1 : 187)) : 1)) : var_11));
            arr_23 [i_0] [i_0] = (((1 && var_5) ? (!var_7) : 13));
            var_19 = (max(var_19, ((((((!43968) ? var_5 : 1)) >= 9)))));
        }
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            var_20 = (min(var_20, (((!(((var_2 ? var_3 : -1429623862447372193))))))));
            var_21 = ((~(var_10 * var_6)));
            arr_28 [10] |= ((var_8 ? ((4959597826376780780 ? ((var_0 ? -1429623862447372171 : var_6)) : (var_7 && var_10))) : (((-4959597826376780779 ? ((31979 ? 3849440878 : 51865)) : ((var_3 << (-3800 + 3805))))))));
            var_22 = -123;
            arr_29 [i_0] = (((((14468 ? -28866 : 13487146247332770836)) > var_1)) ? 33539 : (16765170058127172655 / var_9));
        }
        var_23 ^= ((43959 ? (((4959597826376780811 - 3796) ^ 43988)) : (((var_11 ? var_0 : -5927946231558898658)))));
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 9;i_10 += 1)
                {
                    {
                        var_24 = 21570;

                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            var_25 = (max(var_25, var_6));
                            var_26 = (max(var_26, -113));
                        }
                        var_27 = (((33556 ? var_11 : var_7)));
                        var_28 = 199;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 4; i_12 < 15;i_12 += 1)
    {
        arr_41 [i_12 - 3] = 4959597826376780780;
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    arr_49 [i_13] [i_14] = (((4959597826376780780 ? 2376364358 : var_7)));
                    var_29 = 32347;
                }
            }
        }
        var_30 = (max(var_30, 13487146247332770828));
    }
    for (int i_15 = 0; i_15 < 0;i_15 += 1)
    {
        var_31 = ((var_1 > ((((19879 ? var_7 : var_6)) & 483393743))));
        var_32 = (min(var_32, (~43950)));
        var_33 ^= ((var_3 ? ((((1 ? var_4 : -1303140549)) & 11410994471483590236)) : -4067636518510065061));
    }
    var_34 = 33554431;
    #pragma endscop
}
