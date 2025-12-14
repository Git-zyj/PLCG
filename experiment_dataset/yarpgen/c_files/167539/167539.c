/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, -3277982293586226603));
                    var_21 = 3277982293586226601;
                    var_22 ^= -3277982293586226603;
                }
            }
        }
        var_23 = (min(var_23, -3277982293586226605));
        var_24 *= -515839609428593256;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            arr_12 [i_3] [i_3] [i_3] = 206;
            arr_13 [i_3] [i_4] [i_4] |= -118;
            arr_14 [i_3] [i_3] [i_3] = 4650119547162308317;
        }
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            var_25 = 10583040609055572886;

            /* vectorizable */
            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    arr_22 [i_3] [i_5] [13] = 8514916542492209493;
                    arr_23 [i_3] [i_5] = 3277982293586226605;
                    arr_24 [12] [12] [i_5] [6] = 2647122702;
                }
                var_26 *= 11437507319648919014;
                var_27 = 3679625828;
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_28 = 3760489754;

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    arr_31 [i_3] [15] [6] [i_9] [i_5] [i_9] = 3115189274;
                    var_29 = 51;
                }
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                {
                    arr_36 [i_5] = 32762;
                    arr_37 [i_3] [i_3] [i_3] [i_3] [i_5] = 15;
                    var_30 &= 1185144710;
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                {
                    arr_42 [i_5] [i_5 + 3] [i_10] [i_12] = 15289244178952836068;
                    var_31 = 91;
                    var_32 = 2537108889;
                }
                for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                {
                    var_33 = -89;
                    arr_46 [i_3] [4] [i_10] [i_5] [i_13] [i_13] = 0;
                }
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    var_34 = -32762;
                    arr_49 [i_3] [i_5 - 1] [i_10] [i_5] = 77;
                    var_35 = 14420182785982763492;
                    var_36 = -7244921648477006207;
                }
                arr_50 [i_3] [i_5] [i_10] [i_5] = 4294967295;
                arr_51 [i_5] [i_5] = 1757858406;
                var_37 = 6372200967020635063;
            }
        }
        arr_52 [i_3] = -5648;
    }
    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        /* LoopNest 3 */
        for (int i_16 = 4; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            arr_64 [i_15] [i_18] [i_15] = 32752;
                            arr_65 [i_15] [i_16] [i_17] [i_18] = 31870;
                            arr_66 [i_16 + 1] [5] [i_16 + 1] [i_18] [i_19] [i_16 + 1] = 665172731515076372;
                        }
                        var_38 = 20;

                        for (int i_20 = 1; i_20 < 16;i_20 += 1)
                        {
                            arr_71 [i_20] [i_20 + 1] = 15730893765902398181;
                            var_39 = (max(var_39, -41));
                        }
                        var_40 = -8329097574283121694;
                    }
                }
            }
        }
        var_41 = (min(var_41, 6859971147008152076));
    }
    var_42 = var_10;
    #pragma endscop
}
