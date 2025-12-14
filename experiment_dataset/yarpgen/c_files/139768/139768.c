/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 49;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = (~49);
        var_22 = (max(((min(var_15, var_1))), 35));
        var_23 = (max(var_23, 12288));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_4 [i_1] = (max((arr_3 [i_1]), (arr_3 [i_1])));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_24 = var_2;
            var_25 = (min((~220), ((-22 | (!35)))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_26 = (((min((arr_2 [i_1]), (-64 * var_2))) > var_3));
            var_27 = ((((max(((207 << (-12289 + 12293))), -104))) ? var_4 : (-12298 & 58)));
            arr_11 [i_1] [i_3] = (arr_7 [i_3] [i_1] [i_1]);
            var_28 = ((max(var_17, -73)));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    {
                        var_29 = (max(-414655630, ((-(arr_10 [i_5 + 1] [i_5 - 2])))));
                        var_30 = (max(var_30, ((max(4055849801057806257, -25785)))));

                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_31 = (arr_18 [i_1] [10] [11] [i_1]);
                            var_32 = (arr_12 [i_3] [i_5 + 2] [i_3]);
                            var_33 += (max((arr_13 [i_1] [i_1]), (((var_18 <= (~-1584528620))))));
                            var_34 = 8372224;
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_35 = 65;
                            arr_23 [i_3] [i_3] [i_4] [i_3] [i_3] = ((~((var_14 + ((max(var_12, var_9)))))));
                        }
                        var_36 = 49;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {

        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            var_37 = (arr_22 [i_8] [i_9] [i_8] [i_8] [i_8]);
            var_38 *= ((var_15 ? (var_11 == var_6) : var_18));
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            var_39 = (max(var_39, -var_2));
            var_40 = ((arr_31 [i_8] [i_10] [0]) ^ 255);
        }
        var_41 = 223;
    }
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        var_42 += (arr_5 [22] [i_11]);
        var_43 *= (max((arr_8 [i_11 + 1] [i_11 + 1]), ((((arr_21 [i_11 + 1] [i_11] [i_11 + 1] [i_11] [i_11 + 1]) && 65535)))));
        var_44 = (((arr_33 [i_11]) ? (arr_33 [i_11]) : ((max((arr_33 [i_11]), var_6)))));
    }
    var_45 = var_17;
    var_46 = ((((((max(var_7, 26)) & 0))) ? var_18 : ((max((!var_12), var_1)))));
    #pragma endscop
}
