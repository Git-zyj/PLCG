/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = 9223372036854775807;
        var_16 = -9223372036854775807;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_17 = (((9223372036854775807 ? var_14 : (arr_12 [i_1] [i_1 + 1] [i_1] [i_2 + 2]))));
                            var_18 &= (min((arr_5 [i_2]), (max(((0 ? -737888939 : 30)), 0))));
                            var_19 = var_4;
                        }
                        for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_4 + 4] [i_4 + 4] [i_1] [i_2] [i_1 - 1] = (((((-341040189351361282 ? var_12 : var_9))) ? (4294967275 >= 271507850) : -1847978007));
                            var_20 = (arr_16 [i_1 - 1]);
                        }
                        for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_21 = (arr_24 [i_3 + 1] [i_3 + 1] [3] [i_3] [i_3 - 1] [i_3]);
                            var_22 = (min(var_22, (((26428 ? (-9223372036854775807 - 1) : 1984)))));
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            arr_28 [i_1] [i_2] [i_3] [i_2] [i_1] = ((180 ? 7033729150053189781 : 1));
                            arr_29 [i_1 - 2] [i_2 - 2] [i_2 - 2] [i_8] [7] [i_1] = var_13;
                            var_23 = ((((((arr_20 [i_1] [i_3]) ? 59526 : 0))) || ((((17545021797910583424 ? 9223372036854775798 : var_14))))));
                            var_24 ^= ((var_11 % var_2) + -109);
                        }
                        var_25 = (min(var_25, ((((((arr_2 [i_1 - 1]) < -12200)) ? (arr_21 [i_4] [i_3] [i_2]) : 48)))));
                        var_26 = (arr_7 [i_1]);
                    }
                }
            }
        }
        arr_30 [i_1 - 2] [i_1] = var_5;
    }
    for (int i_9 = 1; i_9 < 11;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    var_27 = (((arr_23 [i_9 - 1] [i_10] [5] [i_10] [1]) ^ -3026));
                    arr_40 [i_10] [i_10] [1] [i_10] = 3;
                }
            }
        }
        var_28 = 0;
        var_29 = ((var_15 ? 238 : (max(-9223372036854775805, (max(var_8, 5421))))));
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_30 = (arr_41 [i_12]);
        var_31 = var_14;
    }
    var_32 = var_1;
    var_33 = -127;
    #pragma endscop
}
