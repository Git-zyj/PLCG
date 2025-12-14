/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] = var_12;
            arr_5 [i_0] |= -var_4;
            var_15 += (-9223372036854775807 - 1);
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] = 6;
            var_16 = -var_13;
            arr_9 [8] [i_2] = ((-(arr_1 [i_0])));
        }
        for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_3] = (arr_0 [i_0] [i_0]);
            arr_14 [i_0] [i_3] [i_3 - 2] = (min((var_9 << 1), var_10));
        }
        for (int i_4 = 4; i_4 < 18;i_4 += 1)
        {
            arr_18 [i_0] = (max((((6999812884384535282 >> (var_4 + 92)))), ((min(((var_8 < (arr_15 [i_0]))), (arr_7 [8] [i_4 - 3]))))));
            /* LoopNest 3 */
            for (int i_5 = 4; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_17 = (arr_15 [6]);
                            arr_25 [i_0] [i_4] [i_5] [i_6] [i_7] = (arr_3 [i_5 - 3] [i_4 + 3] [i_4 + 3]);
                            arr_26 [i_0] [i_4 + 1] [i_5] [i_6] [i_7] [i_5] [i_5] = ((((((min(var_9, 1)) ? (~1) : (max((arr_21 [i_5] [i_4] [i_5 + 2] [i_5]), (arr_1 [i_7])))))) ? 1 : (((((1 ? (arr_1 [i_7]) : 9874)) <= (arr_19 [6] [i_4] [i_6] [i_6]))))));
                            var_18 = (min(var_18, (((((-581214634 ? ((~(arr_21 [8] [8] [i_6] [i_7]))) : (var_2 != 123))) / (max((arr_20 [i_7] [i_6] [i_0]), (arr_10 [i_4 + 1] [14]))))))));
                        }
                    }
                }
            }
            var_19 = (!(((+(((arr_10 [i_0] [6]) * 65535))))));
            var_20 = ((~(((arr_11 [19] [i_4]) ? (arr_11 [i_0] [i_4 - 4]) : (arr_11 [i_0] [i_4 - 2])))));
        }
        arr_27 [i_0] = ((((-15 ? 55506 : 0)) * ((2895108193 ? (arr_11 [i_0] [i_0]) : 55661))));
        var_21 = (581214634 >> (min(0, 0)));
        arr_28 [i_0] = 1756416117;
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 14;i_11 += 1)
                {
                    {
                        var_22 = (min(var_22, (((arr_7 [i_10] [i_8]) ? (((((arr_30 [i_8]) ? var_8 : 1399859103)))) : ((~(arr_19 [i_8] [i_9 + 4] [i_10] [i_11 - 1])))))));
                        var_23 = (min(var_23, 1));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                {
                    arr_44 [i_13] = (min(((min((arr_38 [i_13 + 1] [i_12] [i_8 - 1] [i_12 - 1]), (arr_32 [i_8] [i_12] [i_13])))), (max(-4294967295, ((var_1 ? 70744268 : 0))))));
                    var_24 = (min(var_24, (arr_32 [i_13 + 1] [i_13] [i_13])));
                    arr_45 [i_13] [i_12] [i_13] = min(((min(((max(var_4, 0))), (((arr_37 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_8]) - var_13))))), ((-(arr_30 [i_8]))));
                }
            }
        }
        var_25 *= ((max((arr_6 [i_8] [i_8 - 1]), var_5)));
    }
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        arr_48 [i_14] = ((min((arr_16 [i_14] [i_14]), (arr_16 [i_14] [i_14]))));
        var_26 *= ((1 ? ((0 ? (!70744268) : -1)) : (max(-9, (arr_22 [i_14] [i_14] [i_14] [i_14])))));
    }
    for (int i_15 = 0; i_15 < 16;i_15 += 1)
    {
        arr_51 [i_15] = (min((max((arr_38 [i_15] [i_15] [i_15] [i_15]), (~5))), (arr_43 [i_15] [i_15] [i_15])));
        var_27 |= ((max((((arr_32 [i_15] [i_15] [i_15]) * 0)), ((163 ? 8682166605642832338 : 17)))));
    }
    var_28 = (max(var_28, ((((-((698207529 ? var_1 : var_12)))) <= (((-var_9 ? (max(var_13, 107)) : ((min(-13, 55661))))))))));
    var_29 = (((2 ? ((~(-9223372036854775807 - 1)) : (((max(var_4, 2))))))));
    #pragma endscop
}
