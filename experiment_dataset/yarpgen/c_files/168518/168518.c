/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_10 = ((!((min((min(var_9, var_4)), (~var_9))))));
                                var_11 = (min(var_11, ((min((min((max(var_0, var_0)), var_8)), (max((max(var_1, var_4)), var_8)))))));
                            }
                        }
                    }
                    var_12 = (((!-772491978) ? ((min(var_7, (var_6 ^ var_9)))) : (max((min(var_8, var_3)), (((var_6 ? var_8 : var_9)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_13 ^= ((((max((!var_8), (min(var_0, var_6))))) ? ((var_9 ^ (((min(65535, 1)))))) : var_8));
                                var_14 = ((((max((min(var_9, var_0)), (((-1992465608784686698 ? 1763880907 : -5335)))))) ? (((var_8 / var_4) ? (min(var_5, var_3)) : ((var_6 ? var_0 : var_2)))) : (((((var_3 >> (var_4 - 76)))) ? (max(var_4, var_0)) : (~var_0)))));
                            }
                        }
                    }
                }
            }
        }
        var_15 = (max(((min(2147483647, -8114015609073801082))), (min(((min(var_2, var_7))), (max(var_1, var_5))))));

        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {
            var_16 = var_9;
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_17 = ((var_6 ? (((((max(var_7, var_3)) >= var_4)))) : ((((max(var_1, var_0))) ? var_2 : var_7))));
                            var_18 = ((~(max(var_0, (((var_8 ? var_8 : var_2)))))));
                            var_19 |= var_8;
                            var_20 = (min((max(((var_5 ? var_2 : var_7)), (min(var_9, var_2)))), ((var_2 ? (!var_2) : (min(var_9, var_8))))));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {
            var_21 = (max((max((max(var_3, var_4)), ((max(var_6, var_6))))), (min(((min(var_8, var_2))), (min(15198870788209988135, 1))))));
            var_22 = (min(var_22, ((max(1, -100)))));
        }

        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_23 *= (max(15198870788209988153, 27580));
                            var_24 = ((((((((1 ? 3387877177878772491 : 3830375820))) ? ((min(var_9, var_5))) : (min(var_0, var_3))))) ? (((((var_1 << (var_0 - 10573932912774562884)))) ? (max(var_8, var_0)) : ((var_0 ? var_3 : var_0)))) : ((((var_3 ? var_7 : var_3)) / var_8))));
                            var_25 = (max(var_25, ((min(((max((min(var_6, var_2)), (((var_2 ? var_7 : var_5)))))), ((((max(var_4, var_0))) ? (var_2 / var_3) : (var_4 | var_0))))))));
                            var_26 *= ((((min((min(var_1, var_2)), (max(var_3, var_2))))) ? ((((max(var_6, var_2))) ? (min(var_2, var_1)) : (min(var_2, var_1)))) : (((max(var_2, var_3)) + ((var_2 ? var_8 : var_0))))));
                            var_27 = ((((max(((max(var_6, var_8))), (min(var_5, var_0))))) ? ((max(((var_5 ? var_8 : var_6)), ((var_4 ? var_7 : var_5))))) : (min(-43519, (max(var_9, var_0))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 16;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    {
                        var_28 = ((((((var_9 - var_5) ? ((max(var_8, var_7))) : ((var_0 ? var_5 : var_8))))) ? (((((((max(var_8, var_5)))) >= ((var_6 ? var_2 : var_2)))))) : (((-932436112 || 163877793) ? var_0 : ((min(-8887110452763839748, 4143757765)))))));

                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            var_29 = ((((max((max(22029, 0)), (max(var_7, var_5))))) ? ((min(574454236, -163877822))) : (((!((min(var_0, var_0))))))));
                            var_30 = (var_0 * var_8);
                            var_31 = (min(((min(50934, -59))), ((-1 / (min(var_1, var_6))))));
                            var_32 ^= (((((var_4 ? var_3 : ((var_7 ? var_3 : var_5))))) ? (var_4 - var_2) : (((-7584789443139404355 ? ((min(204, -9978))) : (27065 || -9985))))));
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            var_33 = (min(var_33, (max((((-32767 - 1) ? -2411178465631194623 : 8887110452763839769)), ((((65522 ? -10002 : 1))))))));
            var_34 = (((~var_8) ? (min((min(var_3, var_3)), ((min(var_9, var_6))))) : ((((var_4 << (var_6 - 48)))))));
            var_35 = (max(var_35, (45495 < -2435966204449064745)));
            var_36 = min((max(((max(var_5, var_4))), var_0)), ((min((~var_2), ((var_0 ? var_6 : var_2))))));
            var_37 = ((((min((max(var_8, var_9)), (max(var_7, var_2))))) <= (min(((min(1, -8887110452763839748))), (min(var_0, var_0))))));
        }
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 17;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 17;i_21 += 1)
            {
                {
                    var_38 = (min((!var_9), var_5));
                    var_39 = (min(3247873285499563481, -2084467476));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 22;i_22 += 1)
    {
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 22;i_23 += 1)
        {
            for (int i_24 = 1; i_24 < 21;i_24 += 1)
            {
                {
                    var_40 *= (!var_9);
                    var_41 = (~var_0);
                }
            }
        }

        for (int i_25 = 0; i_25 < 22;i_25 += 1)
        {
            var_42 += (!var_7);
            var_43 = ((-2435966204449064763 - -7584789443139404355) ? (-4265110751053937240 ^ -1) : 1110);
            var_44 = ((var_9 ? (((2435966204449064744 ? 48835327 : 11152))) : ((var_9 ? var_9 : var_1))));
        }
        for (int i_26 = 0; i_26 < 22;i_26 += 1)
        {
            var_45 = (((((1 ? 2764 : 133109685))) ? ((var_2 ? var_2 : var_9)) : -var_4));
            var_46 = ((!(~95)));
        }
        var_47 = (1 >= 1);
    }
    /* LoopNest 3 */
    for (int i_27 = 0; i_27 < 23;i_27 += 1)
    {
        for (int i_28 = 0; i_28 < 23;i_28 += 1)
        {
            for (int i_29 = 2; i_29 < 22;i_29 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_30 = 1; i_30 < 20;i_30 += 1)
                    {
                        for (int i_31 = 0; i_31 < 23;i_31 += 1)
                        {
                            {
                                var_48 = (min((min((((var_7 ? var_6 : var_5))), var_3)), (((var_6 <= var_3) ? (((max(var_8, var_5)))) : (max(0, 15198870788209988133))))));
                                var_49 = (((((1 ? 8125393196766129042 : -1))) ? (min((min(var_0, var_8)), ((var_6 ? var_4 : var_0)))) : (((max(var_8, var_5))))));
                            }
                        }
                    }
                    var_50 = (!-1114376125301390626);
                    /* LoopNest 2 */
                    for (int i_32 = 0; i_32 < 23;i_32 += 1)
                    {
                        for (int i_33 = 0; i_33 < 23;i_33 += 1)
                        {
                            {
                                var_51 = min((min(((var_9 ? var_4 : var_9)), ((min(var_7, var_4))))), var_7);
                                var_52 = (!((min(var_2, (min(var_3, var_4))))));
                                var_53 = ((((min((((490223275 ? 73 : -26002))), ((var_6 ? var_2 : var_2))))) ? var_6 : (((((var_1 ? var_6 : var_6))) ^ ((var_7 ? var_4 : var_2))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_54 = (min(((((var_4 * var_8) && (((var_9 ? var_0 : var_1)))))), (((((var_5 ? var_5 : var_0))) ? ((58752 ? 32762 : 1)) : ((var_4 >> (var_8 - 6888)))))));
    #pragma endscop
}
