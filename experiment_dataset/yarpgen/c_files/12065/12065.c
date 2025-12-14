/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 ^= 1023;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 = 1;
                    var_21 = var_10;
                }
                arr_7 [i_0] = 496820011985412318;

                /* vectorizable */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_22 = -1023;

                        for (int i_5 = 3; i_5 < 19;i_5 += 1)
                        {
                            var_23 = var_7;
                            arr_15 [i_0] [i_1] [i_0] [i_4] [i_5] = 2888686060;
                            var_24 = var_6;
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            var_25 &= 256313227370878355;
                            var_26 = 35150012350464;
                            var_27 = ((var_1 ? ((14395494214461868437 ? 1274270886 : 0)) : -1462861824));
                        }
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            arr_20 [i_0] [i_4] [i_0] [i_4] [i_4] [i_7] = ((!(((52 ? -6777963190224964103 : 1022)))));
                            var_28 = (((((var_11 ? var_13 : var_5))) ? 1313667451 : var_4));
                        }
                    }
                    arr_21 [i_0] [i_3] [i_1] [i_0] = 255;
                    arr_22 [i_0] [i_1] [i_0] = var_6;
                    arr_23 [i_0] [i_1] [i_3] = ((1 ? var_8 : var_16));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] [i_1] [i_3] [i_3] [i_9] [i_0] = ((41 ? 6580687141046885392 : var_11));
                                var_29 = (min(var_29, (((70368744177663 ? 4294967295 : -1)))));
                                var_30 = ((var_2 ? (!34088) : 1024));
                                arr_32 [i_1] [i_0] [i_1] [i_1] = ((14395494214461868437 ? var_13 : var_10));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_41 [i_12] [i_11] [i_0] [i_0] [i_1] [i_0] = (-(min(255, var_10)));
                                var_31 = ((((((var_3 ? 72 : 3516663438))) ? 4347339780140442255 : 1)));
                            }
                        }
                    }
                    var_32 ^= 573372117;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 19;i_14 += 1)
                        {
                            {
                                var_33 ^= (226 ? (((22048 ? ((min(var_8, -103))) : 0))) : (((((6643612157328987310 ? 44 : 112))) ? (min(var_17, 19)) : var_7)));
                                arr_47 [i_1] [i_0] = (((((var_17 ? var_11 : ((var_4 ? 1 : var_9))))) ? (((((var_4 ? -1 : var_7))) ? 50 : 547182355857133456)) : -var_13));
                            }
                        }
                    }
                    var_34 = (min(var_8, -1129088635116566957));
                }
            }
        }
    }
    var_35 = min(((-1001665817 ? 1 : var_15)), (~var_16));
    #pragma endscop
}
