/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_14));
    var_21 = (min(var_21, ((min(-622434320, (((!((max(-1, -52)))))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = (max(var_22, (((+(min((arr_1 [i_0] [i_0]), ((1269020337 ? (arr_1 [22] [i_0]) : var_3)))))))));
        var_23 ^= ((~(arr_1 [i_0] [i_0])));
        var_24 = (max(var_24, var_7));
        var_25 = (max(var_25, ((((arr_1 [i_0] [4]) ? (!1) : ((-622434318 ? 120 : 7639365602206145783)))))));
        var_26 &= (0 < 4032);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        arr_4 [2] [i_1] &= (((!var_7) % (arr_0 [i_1] [i_1 + 1])));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_27 -= ((var_7 ^ (~var_9)));
                            var_28 = (min(var_28, (((~(((arr_1 [10] [i_2]) ? 2151356096144292868 : 13268017797038150715)))))));
                            var_29 += (var_18 || (((var_4 ? var_16 : -1237762428))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_30 = (max(var_30, var_2));
                            var_31 = (max(var_31, ((((2336403436 ^ 2151356096144292868) / (622434312 | -4888376115151212906))))));
                            var_32 &= (((arr_21 [i_1 + 2] [i_1 - 2]) ? (arr_21 [i_1 + 1] [i_1 - 1]) : (arr_21 [i_1 + 2] [i_1 - 2])));
                        }
                    }
                }
            }
            var_33 = (min(var_33, (arr_10 [i_1] [i_1 + 1] [i_1] [i_1])));
        }
        var_34 = (min(var_34, (((var_10 ? 127896332 : (arr_2 [i_1 + 1]))))));
        var_35 = (min(var_35, 5127087763167653762));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_36 = (min(var_36, (arr_0 [i_9] [i_9])));
        var_37 = (min(var_37, ((((-1576008378753460849 ? 1809536556 : (arr_0 [i_9] [i_9])))))));
        arr_25 [i_9] [5] &= ((((5127087763167653762 >> (67 - 33))) * (arr_24 [14] [i_9])));
    }
    #pragma endscop
}
