/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 32767));
    var_19 = -var_14;
    var_20 = (min(var_20, ((((max(-2430429781153034947, -1)) / (var_12 | var_1))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_5 [6] [6])));
                    var_22 = (((((((arr_6 [i_0]) ? 9223372036854775801 : (arr_5 [i_2] [i_1]))) / var_6)) < ((((!(arr_3 [i_1 + 1] [i_2 + 2])))))));
                    arr_7 [i_0] [i_1 - 1] [i_2] = (((((10590 ? 49 : -8349098774611075552))) ? (((!(arr_0 [i_0])))) : ((max((!8596687333019662628), (arr_0 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_23 = ((+(((((arr_10 [i_3] [1] [i_2] [i_3] [i_4]) != (arr_4 [i_1] [i_2])))))));
                                arr_12 [i_2] = var_17;
                            }
                        }
                    }
                    arr_13 [i_2 - 1] [i_0] [i_2 - 1] [i_2] = (((((arr_3 [i_0] [i_0]) ? 109 : (arr_4 [i_0] [i_1 + 2])))) ? (arr_1 [i_1]) : (((arr_10 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 + 2]) + 7978223642855862821)));
                }
            }
        }
        var_24 &= ((var_1 ? ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (var_4 - -1) : -32767))) : -9223372036854775793));

        /* vectorizable */
        for (int i_5 = 4; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_25 = var_1;
                var_26 = 16;
                var_27 = 8;
                var_28 = -4864;
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_29 = ((236 ? (!60) : var_12));
                var_30 += (((arr_2 [i_0] [i_0] [i_7]) + var_17));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_31 = (min(var_31, ((((var_16 ? -32753 : var_3))))));
                var_32 = (((var_17 * 221) ? var_1 : 195));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_33 = (min(var_33, 28072));
                            arr_31 [i_10] = 384;
                            var_34 = ((((((arr_1 [i_10]) >= 30690))) * (var_15 / 24035)));
                            var_35 = ((-27010 < ((-1 ? 8191 : 4194303))));
                        }
                    }
                }
                var_36 = ((1073741823 <= (7032 && var_12)));
            }
            var_37 = 32759;
            var_38 = var_3;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        var_39 = var_11;
                        arr_37 [i_0] [i_0] [i_0] [i_11] = (6129955560331765268 | 18);
                    }
                }
            }
            arr_38 [i_5 + 1] = (((((arr_0 [i_0]) - 5303244078737249886)) >= (~0)));
        }
        arr_39 [i_0] = ((!(~var_3)));
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
    {
        var_40 = (((((min(-1, (arr_8 [i_13]))))) < (min(((((var_13 + 2147483647) << (((var_1 + 27606) - 9))))), ((9223372036854775807 ? -6082249142869570471 : (arr_42 [i_13])))))));
        var_41 = (min(var_41, (((max(var_14, (arr_24 [i_13] [i_13])))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        var_42 = (((arr_42 [10]) / (arr_19 [i_14] [18] [i_14] [i_14])));
        var_43 += ((((84 ? -3072131420915818950 : 249)) & (7754338567365152091 ^ -3532653547939421691)));
    }
    for (int i_15 = 1; i_15 < 10;i_15 += 1)
    {
        var_44 = (((arr_15 [i_15 + 1] [i_15 + 1]) ? (arr_2 [i_15] [i_15 - 1] [i_15 - 1]) : (((arr_16 [i_15 - 1] [i_15 + 1] [i_15 + 1]) ? (arr_15 [i_15 + 1] [i_15 + 1]) : (arr_15 [i_15 - 1] [i_15 + 1])))));
        var_45 |= (!8647621500978632837);
        var_46 = var_12;
        var_47 = (max(((min(((!(arr_45 [i_15 - 1]))), ((210 && (arr_23 [i_15] [i_15 + 1] [i_15])))))), (arr_1 [i_15 - 1])));
    }
    #pragma endscop
}
