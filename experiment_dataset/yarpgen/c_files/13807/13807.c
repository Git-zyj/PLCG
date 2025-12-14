/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (max(var_9, (((var_12 ? var_3 : var_1)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((((min(1530733222, (min(1530733222, (arr_1 [1] [9])))))) / (((((-(arr_1 [2] [i_0])))) ? (arr_3 [i_0]) : 1))));
        arr_4 [i_0] = 242;
        var_17 |= (((((var_10 ? 81 : (arr_3 [8])))) ? ((min((var_7 || var_6), (max(var_6, var_6))))) : ((~((min(var_4, var_0)))))));
        var_18 = (min((((((875925232639712249 ? 4368021133310769759 : 0))) ? var_12 : ((var_9 % (arr_2 [i_0]))))), 250));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                var_19 = (min(var_19, ((-(arr_9 [i_1 - 2])))));
                var_20 = (arr_7 [i_1] [i_3]);
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_21 = (~var_8);
                arr_17 [i_1] [i_1 - 2] = ((!(arr_11 [i_2] [i_2] [i_2 - 1] [i_4])));
                var_22 &= ((~(arr_11 [i_1 + 1] [i_2] [i_2] [i_2])));
            }
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                var_23 = var_9;
                var_24 = (max(var_24, ((min(var_2, -var_13)))));
                var_25 = ((((max(((1 ? var_7 : var_4)), ((var_1 ? 255 : (arr_16 [i_1] [i_1] [i_1 + 2] [i_1])))))) >= (min(708737937757579797, 5988))));

                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    arr_22 [i_1] [i_2] [i_6] [i_6] [1] = ((-(((((arr_5 [i_1]) || var_2)) ? var_4 : (arr_6 [i_2 + 1])))));
                    var_26 = -243;
                    var_27 = ((((min((arr_8 [i_6]), (arr_15 [i_1] [i_2] [i_2] [i_6])))) && ((min((!65535), (arr_11 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 2]))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_28 -= 1;
                        var_29 = (-8497850375464468262 / 3499871620643156607);
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_30 [i_1] [i_9] [i_1] [i_7] [i_9] |= (arr_20 [i_2 - 2] [11] [i_2 - 1] [i_2]);
                        arr_31 [i_1] [i_1] = (arr_29 [i_1] [i_1] [i_1 - 1] [i_2] [i_2]);
                    }
                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {
                        var_30 = (((96 ? var_7 : var_7)));
                        var_31 ^= (arr_18 [i_5] [i_2 - 1]);
                    }
                    var_32 = 166;
                }
            }
            var_33 = (min(var_33, 2010353495));
            var_34 = (min(var_34, (((((max((arr_7 [i_2 - 2] [i_1 - 2]), (arr_10 [i_1])))) ? (((~(arr_10 [i_1 - 2])))) : (min((arr_29 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_2]), var_10)))))));
            var_35 = 128;
            var_36 = ((+(min((arr_28 [i_1 + 2]), (arr_6 [i_1 + 1])))));
        }
        var_37 &= (((((-240 ? var_10 : (((-(arr_12 [i_1] [i_1] [i_1] [i_1 - 1]))))))) == -8497850375464468271));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {

        for (int i_12 = 4; i_12 < 13;i_12 += 1)
        {
            var_38 = ((var_1 ^ ((min((arr_21 [15] [i_11] [i_11] [i_12 - 1] [i_12]), -1933584785119847900)))));
            var_39 = (min(var_39, ((((arr_26 [i_11] [17] [i_12] [i_12] [i_12 - 2]) < (((-(arr_9 [i_12 - 2])))))))));
        }
        arr_41 [i_11] = (min((max(var_6, (arr_13 [i_11] [i_11] [i_11]))), (arr_13 [i_11] [i_11] [i_11])));
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 8;i_13 += 1)
    {
        arr_45 [i_13] = var_12;
        var_40 = -var_4;
        var_41 = (~(arr_14 [15] [i_13 + 1]));
    }
    var_42 = max(-8497850375464468263, 2952326102482333006);
    var_43 = var_2;
    #pragma endscop
}
