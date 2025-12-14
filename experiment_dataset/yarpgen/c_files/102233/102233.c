/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_16 = ((!var_5) == (~131));
                    arr_10 [i_1] [i_1] [i_1] = ((~46) ? ((((((~(arr_8 [i_1]))) <= (var_11 < 8892594392703046332))))) : var_6);
                    arr_11 [i_0 - 1] [i_1] [i_2] [i_1] = (((((-(!var_12)))) ? ((116 ? var_8 : var_9)) : 119));
                    arr_12 [i_0] [i_0] [i_1] [i_2 + 1] = ((!(((-127 ? (arr_3 [i_1] [i_1]) : var_13)))));

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_17 += var_5;
                            var_18 = (!203);
                            var_19 = 14912826563774217996;
                            var_20 = 44128;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 ^= ((((-(14698 / 30318))) <= ((((97 / 53) <= (11390503169862999147 | var_7))))));
                            var_22 = (max(56564, (((arr_5 [i_0 - 1] [i_1]) ? var_10 : var_1))));
                            arr_19 [i_0 - 2] [i_1] [i_2 - 2] [i_3 + 2] [i_5] = var_14;
                        }
                        var_23 = (max(var_23, (((!(((7365171735853048907 ? (arr_1 [i_0 - 3]) : 31922))))))));
                        arr_20 [i_0 - 4] [i_1] = ((~(3191 - 197)));
                        var_24 = (min((~61589), ((min((arr_3 [i_2 + 1] [i_1]), 2)))));
                        arr_21 [i_0] [i_1 + 2] [i_1] [i_0] [i_3] [i_0] |= ((!(-8526422037981800415 || var_3)));
                    }
                }
                var_25 ^= var_2;
                var_26 = (max(((((arr_7 [i_0 - 1]) ? (arr_7 [i_0 - 2]) : -26366))), (min(7055, -2999163011785213583))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 8;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 7;i_8 += 1)
            {
                {
                    arr_28 [i_6 + 3] [i_8] [i_8 + 2] = 248;
                    arr_29 [i_8] [i_7] = -39;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_27 ^= (min((var_15 + 180), ((26 ? 17797 : 9554149681006505284))));
                                var_28 &= 1;
                            }
                        }
                    }
                    arr_38 [i_8 + 2] [i_7] [i_6] = var_2;
                    var_29 -= 0;
                }
            }
        }
    }
    #pragma endscop
}
