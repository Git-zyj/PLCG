/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_6;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (((((~(arr_0 [i_0])))) ? (arr_0 [i_0]) : ((~(arr_0 [i_0])))));
        arr_3 [22] |= 2215786041;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_16 = (min(((((55830 ? -107 : 1421792132132995318)) & 1421792132132995318)), (arr_1 [i_1 + 1])));
        var_17 = (min(var_17, (((((~(arr_1 [i_1 - 1]))) - (arr_1 [i_1 - 1]))))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_18 = ((max(2854135688, ((((arr_0 [i_2 - 1]) == (arr_4 [i_2 + 1])))))) & ((((((min((arr_6 [i_2] [i_2]), 4294967282))) == ((121 ? -1421792132132995319 : (arr_4 [i_2 - 1]))))))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [4] = (min((((arr_2 [i_2 - 1]) ? (arr_2 [i_2 + 1]) : 2791654489041087005)), (arr_2 [i_2 - 1])));
                                arr_18 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2 - 1] [i_2 + 1] = (arr_15 [i_2 - 1] [i_3 + 1] [i_3 - 3] [i_6] [i_2 - 1]);
                                var_19 = (arr_11 [7] [i_3] [6] [i_6]);
                                var_20 += 420750168137033618;
                                var_21 = (max(var_21, ((max((arr_7 [10]), (max((arr_5 [i_6]), (~9223372036854775807))))))));
                            }
                        }
                    }
                    var_22 -= (max(((max(2854135695, -127))), (((((1421792132132995308 ? 2232751576 : (arr_15 [i_4] [i_3 - 1] [i_2 + 1] [i_2] [i_2])))) ? ((9223372036854775807 ? 2791654489041087005 : 3097616728229036787)) : (arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
                }
            }
        }
        var_23 = (min((arr_14 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]), (arr_8 [i_2] [i_2 - 1] [i_2 + 1])));
    }
    var_24 = (!var_0);
    var_25 = (max((~var_10), var_4));
    #pragma endscop
}
