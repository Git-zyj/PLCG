/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (arr_0 [5] [i_1]);
                var_15 = (max((max(3546287971, 8954353844528884625)), (((((((arr_2 [0] [i_0]) % (-32767 - 1)))) < (arr_0 [i_1 - 1] [4]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_16 = (arr_0 [i_2] [i_2]);
        arr_10 [i_2] = (max(((max((max((arr_2 [i_2] [i_2]), 2540)), 9425))), (max((max((arr_3 [8]), 4294967295)), (arr_3 [i_2])))));
        var_17 = (((arr_3 [i_2]) ? 55 : -1024));
        arr_11 [8] = (min(9425, 32165));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 6;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 6;i_4 += 1)
            {
                {
                    var_18 ^= (max(127, (-9116446602130218076 * var_2)));
                    var_19 = 17814502638798416249;
                    var_20 ^= 7108;
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 9;i_5 += 1)
    {
        var_21 = (max(var_21, 1213170331968211683));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                arr_26 [i_7] [i_5] [i_5] [i_5] = 1;
                var_22 = 294393953;
                var_23 = 6298350845386117551;
                var_24 = 127;
                var_25 = (((32754 + 2147483647) >> (52472 || 46)));
            }
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                var_26 = (var_9 && 2540);
                var_27 = (((12148393228323434070 | var_12) ? (arr_0 [i_5 - 1] [i_8 + 1]) : 14125));
                var_28 = 748679325;
            }
            var_29 = (arr_29 [i_5]);
        }
    }
    var_30 = (max((((((max(var_10, var_7)))) % var_9)), var_0));
    #pragma endscop
}
