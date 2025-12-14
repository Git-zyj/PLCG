/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 1));
    var_11 = 10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_12 -= var_0;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_4 - 1] = (max(4294967268, ((min(var_6, -2147483636)))));
                                var_13 = 0;
                            }
                        }
                    }
                }
                var_14 = 2315573406;
                arr_16 [i_0] = ((((max(2315573406, 14262017458277328469))) ? var_7 : (max((-9223372036854775807 - 1), 54128))));
                var_15 += -35;
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_16 = ((-(min(1979393868, var_9))));
        var_17 -= ((((min(var_9, 2315573397))) ? (((max(var_3, 1)))) : (min(18014398509481983, 1979393898))));
        var_18 = (max(((max(-98, var_3))), (((1 ? var_6 : 0)))));
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        var_19 = (max(((13443397844215308544 ? 12654 : var_9)), var_5));
        arr_23 [i_6] [i_6] = (max(0, (max(26775, -1))));
        var_20 = (min(var_20, -10));
        arr_24 [i_6] [i_6] = (min((max(var_3, var_6)), -7458436861916434337));
        arr_25 [i_6] = (max((min(-2147483632, (min(var_7, 4184726615432223134)))), (((-(min(6, var_4)))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_21 = (min(((min(-var_1, 1))), ((7235 ? 14262017458277328445 : 17))));
        arr_29 [i_7] = var_8;
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_22 ^= 0;
                    var_23 = (min(255, -7));
                }
            }
        }
    }
    #pragma endscop
}
