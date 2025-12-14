/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = 15648822721051134323;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [1] [i_2] = 18446744073709551615;
                    arr_9 [12] [i_2] = ((59879 ? 13 : var_4));
                    arr_10 [i_0] [i_0] [i_2] = ((-((3536317522 ? 7604130170099427991 : -64))));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_15 = ((((-6097142179996228699 ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : 14669337582627828149)) >> var_6));
                        arr_14 [i_3 + 1] [i_2] [i_1] [i_0] = (!69);
                        arr_15 [i_0] = ((var_10 ? 2512967213 : (arr_6 [i_3] [i_3 + 2] [i_3 + 1] [i_3 - 2])));
                    }
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_1] [i_4] = (((var_5 ? 3777406491081723452 : 1)));
                    var_16 = (((((((arr_7 [5] [3]) < 3489728515)))) ? (1763040072419468339 == 1) : ((3364881064 ? -7604130170099428012 : 4944758215486569297))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_0] [i_0] = (((3239165306 ? (min(1, 7604130170099427994)) : (arr_4 [i_0]))) & (((((arr_1 [i_0]) != var_8)))));
                    var_17 = 47;
                    arr_24 [i_0] [i_0] [i_0] = (((((((max(-27, 1))) ? (113549249 <= 4) : (arr_16 [i_0] [i_1] [i_5] [i_0])))) ? (((65535 <= (~10810)))) : var_3));
                    arr_25 [i_0] [i_0] [i_5] [i_0] = ((!((max(var_4, -3261)))));
                    var_18 = ((~(((arr_17 [i_0] [i_0] [i_0] [i_0]) ? 20803 : (arr_17 [i_0] [i_0] [i_0] [i_0])))));
                }
                var_19 = (min(var_19, -687949398));
                arr_26 [i_0] [1] [i_1] = (0 << 13);
            }
        }
    }
    #pragma endscop
}
