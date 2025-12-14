/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (((((((arr_0 [14] [14]) / var_13)))) + (arr_0 [i_0] [i_0])));
        var_20 = (min((arr_1 [i_0]), (arr_2 [i_0])));
    }
    var_21 = (min(var_6, (min(var_8, var_2))));

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 = ((min((max(8487195051829505145, -32533), 502450513))));
        var_23 = (min(var_23, ((max(var_16, ((max(-8487195051829505146, 8487195051829505150))))))));
        var_24 ^= (((max((max(var_8, var_14)), -32747)) >= (arr_3 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_25 ^= (arr_4 [i_2] [i_2]);
        arr_7 [i_2] = (~var_2);
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_12 [1] [i_3] = (max(3792516782, (arr_1 [i_3])));
        var_26 ^= (arr_5 [i_3] [5]);
        arr_13 [i_3] = (max((min(((max(502450522, 63))), (arr_3 [i_3]))), ((((max(59, -1924))) ? (max(1253601908, var_4)) : ((max(1412615111, -4734)))))));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_27 = arr_16 [i_4];
                            arr_27 [i_8] [i_4] [i_6] [i_5] [i_4] [i_4] = (~var_1);
                        }
                    }
                }
            }
            var_28 = (arr_23 [i_4] [i_4] [i_4] [i_5 + 3] [i_5]);
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_29 = (max(var_29, ((((arr_16 [i_9]) ? (var_13 ^ var_11) : var_5)))));
            var_30 = var_1;
            var_31 = (!116);
            arr_30 [i_4] = var_5;

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_41 [i_12] [i_4] [3] [i_4] [i_4] = 109;
                            var_32 = var_12;
                        }
                    }
                }
                var_33 = (!var_6);
            }
            for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 9;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        {
                            arr_48 [i_4] [8] [i_9] [i_4] = (((arr_22 [i_14] [i_14] [i_14] [i_4]) && (arr_24 [i_4])));
                            var_34 = (max(var_34, 31025));
                            var_35 = (((arr_4 [i_14 + 3] [i_14 + 3]) & (arr_4 [i_14 - 1] [i_15])));
                        }
                    }
                }
                var_36 ^= ((((arr_22 [i_9] [i_9] [2] [i_9]) && 0)) ? (arr_4 [i_4] [i_9]) : ((((1253601893 && (arr_33 [i_4]))))));
            }
            for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
            {
                var_37 ^= (arr_38 [i_16] [i_9] [i_16] [9] [i_4] [i_16] [i_9]);
                var_38 = (arr_45 [i_4] [i_9] [i_4]);
            }
        }
        var_39 += var_12;
    }
    for (int i_17 = 1; i_17 < 17;i_17 += 1)
    {
        arr_55 [i_17 + 2] = (min(var_3, 3041365397));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 19;i_20 += 1)
                {
                    {
                        arr_65 [14] [6] [i_19 + 3] [i_18] [i_19 + 1] = (min((var_15 - 16777215), (max((max(var_11, (arr_2 [0]))), ((min((arr_2 [i_17 + 2]), var_5)))))));
                        arr_66 [i_17 + 2] [i_18] [i_17 + 2] [i_20] [i_18] = min((max(((var_17 ? 121 : (arr_52 [i_18]))), ((min(var_3, (arr_62 [i_18] [i_18])))))), (max((min(100, (arr_4 [i_17] [i_18]))), (arr_62 [i_17] [i_18]))));
                        var_40 += (max((((arr_54 [12] [i_17 - 1]) ? (arr_54 [i_17 + 2] [i_19 - 1]) : 502450501)), (arr_59 [i_18] [14] [14])));
                    }
                }
            }
        }
        arr_67 [i_17] = ((max((arr_62 [i_17 + 2] [12]), (arr_62 [i_17 + 1] [10]))));

        for (int i_21 = 2; i_21 < 17;i_21 += 1)
        {
            arr_71 [i_17] = ((((67108860 & (3041365400 == var_11))) & (((max(var_16, (arr_0 [i_17] [i_17])))))));
            arr_72 [i_17] [i_17] [i_21 - 1] = (max(67108860, 32767));
            arr_73 [i_17] = (min(23855, (arr_60 [i_17] [6] [i_21])));
        }
    }
    #pragma endscop
}
