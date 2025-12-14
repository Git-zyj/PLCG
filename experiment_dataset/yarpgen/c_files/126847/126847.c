/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((1944119421120984922 ? 42765 : -357535852));
    var_16 = ((!(((min(22770, 42754))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = (!6704);

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_17 ^= -30996;
                        arr_11 [i_3] [i_1] [i_3] [8] [i_3] = 34848;
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        var_18 = 1607258018;
                        arr_14 [4] [i_1] [i_0] = -1;
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_19 = 1534660841;
                        var_20 = -4294967295;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_1] [i_6] [4] &= (!37450);
                        var_21 = ((~((9223372036854775807 ? -17 : 32768))));
                        arr_20 [i_0] [i_1] [4] [4] = 2009444521;
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_22 = (!89);
                        var_23 = -3875539820;
                        arr_23 [i_2] [i_1] = -30;
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_24 = 4294967286;
                        arr_26 [i_0] [i_1] [1] [i_0] [i_0] = (min(31442, 419427477));
                        arr_27 [i_0] [i_8] [i_0] [i_8] = (~1502093131);
                        var_25 ^= ((0 ? 1231104482 : 1607258025));
                        var_26 = 419427497;
                    }
                }
            }
        }
    }
    #pragma endscop
}
