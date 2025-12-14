/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_13 ? var_5 : ((min(var_2, 1977536753)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (((((max(87, -7349)) ? (((arr_3 [i_0]) % var_0)) : (((1977536742 ? (arr_4 [i_0] [i_0]) : var_10)))))));
                    var_17 = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_0] = var_2;
                                var_18 ^= 10061869913439088481;
                                var_19 = (max(var_19, ((min((max(-var_4, -52)), var_3)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, (arr_3 [1])));
                                var_21 = (max(((((min(var_2, 1977536741))) ? 1977536745 : (((arr_10 [i_6] [i_5] [i_1] [i_1] [i_0]) ? 1977536745 : 10061869913439088512)))), ((min((min(2317430541, 1977536741)), var_2)))));
                                arr_18 [i_0] [i_0] [11] = 10832;
                                arr_19 [i_0] [i_0] [i_6] = 4194272;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            {
                var_22 = 8384874160270463122;
                var_23 = ((((2317430550 ? var_0 : (arr_10 [i_7] [i_7] [i_7] [i_8] [i_7])))));

                for (int i_9 = 3; i_9 < 8;i_9 += 1)
                {
                    var_24 ^= (((8384874160270463104 - var_1) + ((var_0 ? 127 : var_7))));
                    var_25 *= var_14;
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 8;i_10 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, var_0));
                    var_27 = var_5;
                    arr_30 [i_7] [i_8] [i_8] = 8384874160270463104;
                    var_28 *= var_5;
                }
                for (int i_11 = 2; i_11 < 8;i_11 += 1) /* same iter space */
                {
                    var_29 = (((arr_7 [i_7] [17]) >= (min(-1941452498, ((min(var_14, 0)))))));
                    var_30 = max(8384874160270463135, (max(var_12, (arr_24 [i_7 + 1] [i_11 + 1]))));
                }
                for (int i_12 = 2; i_12 < 8;i_12 += 1) /* same iter space */
                {
                    var_31 *= max(((~(max(8384874160270463104, 2317430542)))), (+-1941452523));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            {
                                var_32 = 88;
                                arr_39 [i_14] [i_14] [i_7] [i_8] [i_7] [i_8] [i_7] = (min((arr_4 [i_7] [i_7]), (arr_36 [i_8] [i_12] [i_8] [4])));
                                var_33 = ((((((arr_2 [10] [1] [i_7]) ? 0 : var_1)) <= (arr_13 [i_13] [4]))));
                                arr_40 [i_7] [i_7] [i_13] [i_7] [i_13] [i_13] [i_8] = (max((((((65011712 ? var_1 : -22366))) ? -4229955584 : (((var_9 ? -784950016 : 1))))), (min((min(2095104, var_1)), (arr_9 [15] [15] [i_12] [15] [i_8])))));
                            }
                        }
                    }
                }

                for (int i_15 = 1; i_15 < 1;i_15 += 1)
                {
                    var_34 = ((1 ? -114 : 12435319936151769907));
                    var_35 &= ((!(((max(var_4, 2317430528))))));
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 8;i_17 += 1)
                        {
                            {
                                arr_48 [i_7] [i_7] [2] = (max(((((max(var_14, 860056178424341236))) ? var_7 : (507 <= var_14))), (((-1941452512 ? ((-(arr_8 [i_7] [i_8] [i_15 - 1] [i_7]))) : (arr_14 [i_7 + 1] [i_17] [i_7]))))));
                                arr_49 [i_7] [i_7] = (((min(0, ((min(var_13, 1))))) >= (1 <= -1549561217)));
                                var_36 = (min(var_10, -88));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
