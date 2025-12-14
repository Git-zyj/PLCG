/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (max(1, (~253)));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    var_22 = ((39634 ? 18 : 6144));
                    arr_11 [i_1] [i_0] = var_8;
                    var_23 = -1296255224244946033;
                }
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_16 [i_0] [10] [i_0] [i_4] = (8211021899354699664 & -2138626203098721855);
                        var_24 -= (max((arr_0 [i_4]), ((((((arr_12 [i_1]) ? var_6 : var_10))) ? (~1086166806277536149) : -20))));
                        arr_17 [8] [8] [8] [i_0] [i_1 - 1] [i_1] = 2;
                        arr_18 [i_0] [i_1 + 1] [i_0] [i_1 + 1] = ((~((var_13 & (~4294967295)))));
                        var_25 = (arr_14 [i_3 - 3] [i_4]);
                    }
                    var_26 = (max(((max((((var_0 || (arr_8 [i_0] [i_1 + 1])))), 2147483647))), (max(((1048064 ? var_19 : (arr_14 [i_0] [i_0]))), (arr_3 [i_0])))));
                    var_27 = ((!((max((max((arr_12 [i_3]), (arr_3 [i_0]))), (!14259010770277908030))))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_28 = (min(var_28, 1337891327682636750));
                    arr_21 [i_0] [i_0] [i_0] [i_0] = (max(12003549883828703075, -23286));
                }
                var_29 ^= 0;
                arr_22 [i_0] = (max(((((((-2147483647 - 1) >= var_3)) || -1))), (((4294967295 | -14606) ? var_10 : (max(19576, (arr_12 [15])))))));
                var_30 = (max(var_30, 1152921504606814208));
            }
        }
    }
    #pragma endscop
}
