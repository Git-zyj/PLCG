/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_10 = (+-1);
                                var_11 &= (max((((~(min(0, 518507045))))), (max(-4253489147337678103, 1))));
                                arr_13 [i_0] [i_1 + 2] [i_2] [i_2] = (max(((~(min(-914177879, 137438953471)))), ((max(120, 4294967295)))));
                                var_12 = 81;
                            }
                        }
                    }
                    var_13 = (!5356338751595411047);
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_14 -= ((!((max(18446744073709551615, ((max(4294967295, 114))))))));
                    var_15 = -18481;
                    var_16 = (min(var_16, 12509667281355191868));
                    arr_16 [i_0] [i_1 - 3] [i_5] = 536868864;
                }

                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_17 = ((~(~0)));
                        arr_21 [i_1] [i_6] [i_1] [11] [i_0] [i_0] = 222;
                        arr_22 [i_7] [i_1] [i_1] [i_0] = 20285;
                        var_18 += 58;

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, -4));
                            var_20 = 20;
                            var_21 += 7034053881894875183;
                        }
                        for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_22 = -851766741;
                            var_23 += -55;
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_24 = (max(var_24, (~3242840432)));

                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            var_25 = (+-1049084448);
                            var_26 = (min(var_26, (~57159)));
                            var_27 = -735669644;
                            var_28 += (!0);
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_29 = (~-2920869869850226808);
                            var_30 = (~4294967278);
                            var_31 = 562949416550400;
                            var_32 *= 44726;
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_33 ^= ((!(-9223372036854775807 - 1)));
                            var_34 -= -18012199486226432;
                        }
                        arr_38 [i_0] [i_0] [i_0] = 31524;
                        arr_39 [i_0] [i_1 - 1] [i_6 + 2] [i_1 - 1] = ((~(~-110)));
                    }
                    var_35 = (max(var_35, -116));
                    var_36 = (min(599590638, (min(-91, 3))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_37 ^= 56;
                                var_38 = ((-(~-126)));
                            }
                        }
                    }
                    var_39 = (~255);
                }

                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    var_40 = 1604712917;
                    arr_48 [i_0] [i_1] = (~34);
                }
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    var_41 -= min(1073741824, -238);
                    var_42 ^= (min((~-30392), (max(-8784701814525651552, 30))));
                }
                /* vectorizable */
                for (int i_18 = 1; i_18 < 11;i_18 += 1)
                {
                    var_43 = (max(var_43, -4096));
                    arr_54 [i_18] [i_18] [i_18] [i_18] = -0;
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 12;i_20 += 1)
                        {
                            {
                                var_44 = 9223372036854775807;
                                arr_60 [i_0] [i_0] [i_18] [i_18] [i_18] [i_1] = (~16);
                                var_45 -= ((-(-127 - 1)));
                                var_46 = -19960;
                            }
                        }
                    }
                }
            }
        }
    }
    var_47 += (min(42, (!var_3)));
    var_48 -= var_8;
    #pragma endscop
}
