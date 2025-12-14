/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] = (((~var_3) * (arr_2 [i_0] [i_1])));
            var_12 = -881368189;
            var_13 = (min(var_13, (((8811885985168271801 ? -24890 : 24576)))));
            var_14 = (var_4 ^ 43363);
        }
        var_15 = (min(var_15, (var_5 || 15)));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 16;i_4 += 1)
            {
                {
                    var_16 = -8107679603930947168;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, 26730));
                                arr_16 [i_2] [i_3] [i_2] [4] = 16383;
                                var_18 = (max(var_18, -1326424741));
                                arr_17 [i_3] = (63 + 48812);
                            }
                        }
                    }
                }
            }
        }
        var_19 = (min((((~5561) ? 44706 : (~var_6))), (arr_10 [i_2] [10] [10] [i_2])));
    }
    var_20 = var_11;

    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_21 = (max(var_21, (((~(((-127 - 1) ? ((min(0, 96))) : -1654)))))));
        var_22 = (arr_3 [i_7]);
        var_23 = (min(var_23, ((((arr_10 [i_7] [2] [12] [2]) ? 1039405213 : (((((((arr_5 [i_7]) ^ (arr_10 [i_7] [10] [i_7] [i_7])))) == 1080863910568919040))))))));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_24 = (min(var_24, ((((((arr_20 [i_8] [i_8]) ? (arr_20 [i_8] [i_8]) : (arr_20 [i_8] [i_8]))) < (4294967287 != -1))))));
        arr_23 [i_8] = ((-(arr_22 [i_8] [i_8])));
        arr_24 [8] |= ((-100 ? (((arr_21 [i_8]) & 16368)) : -1));
    }
    #pragma endscop
}
