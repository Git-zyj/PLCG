/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_17 *= 33554431;
            arr_6 [i_0] [i_0] [i_1 + 3] = 0;
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_18 = (max((max((max(63, 16383)), ((max(45881, var_12))))), (max(((max(var_14, 54))), (max(-2147483633, (arr_0 [i_0])))))));
            var_19 = (max((min(((min(var_9, 2047))), (max(8605879196701082542, (arr_5 [i_2] [i_0]))))), ((min((max((arr_4 [14] [1] [5]), (arr_8 [i_0] [i_0 + 1] [i_0]))), ((min(1, -19))))))));
            var_20 = (min(((max((max(54, var_2)), ((max(var_4, 0)))))), (max(((min(-19, 18))), (max(var_12, 2047))))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_21 *= 1;
            var_22 = -17;
            arr_12 [i_0] [i_0] = -17;
            arr_13 [i_0] [i_0] = 4;
        }
        arr_14 [i_0] = (max((min((max(17, 6895181376583774604)), (min(11551562697125777011, -42)))), ((max((max((arr_5 [i_0] [i_0 - 1]), 1)), ((min(-8, -17))))))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_19 [i_4] = (min((min(((min(-22, 54))), (max((arr_7 [i_4] [i_4] [i_4]), -581040471)))), ((min(((max(128, 17))), (max(-19501, (-32767 - 1))))))));
        var_23 *= (max(((min((max(var_12, var_2)), ((max(1, 1)))))), (min((min(581040471, 1)), (min(-54, -738304469))))));
        var_24 = (min((min(((min((arr_9 [i_4] [i_4]), 0))), (max(4294967295, 5)))), (max((min(4, var_2)), ((min((arr_1 [i_4]), var_5)))))));

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_25 = max(((max((max(var_14, var_11)), (max(16383, 24))))), (max((max(0, -32745)), (max((arr_8 [i_5] [i_4] [i_5]), var_8)))));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
            {
                arr_25 [i_5] [i_5] = 3330160431;
                arr_26 [i_5] [i_5] = 54;
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
            {
                var_26 = (-32767 - 1);
                arr_30 [i_4] [i_5] [i_5] [i_5] = 32749;
                var_27 -= -26636;
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_28 |= 32748;
            var_29 += 55;
            arr_35 [i_4] [i_4] = -42;
            arr_36 [i_4] = 0;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_30 = 44;
            var_31 += -1;
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {

            for (int i_11 = 2; i_11 < 8;i_11 += 1)
            {
                arr_44 [i_11] [i_11 - 1] = (min((max(62, (min(523738173, 32753)))), ((max(((min(-4872, 0))), (max(var_11, var_4)))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_32 = (min((max((min(-8658216095134056300, -59)), ((min(1, var_7))))), ((max(((max(-46, (arr_48 [1] [i_10] [1] [i_10] [i_10] [i_10] [i_10])))), (min((arr_40 [i_13] [i_10] [i_10]), 125)))))));
                            var_33 *= (max(((min((max(var_0, -62)), (min((arr_7 [i_4] [i_4] [i_12]), var_2))))), (max((min((arr_0 [i_11]), (arr_37 [i_12] [i_13]))), ((max(46, var_7)))))));
                        }
                    }
                }
                arr_50 [i_4] [i_4] [i_10] [8] = (min(4088, 117));
                var_34 = (min(var_34, ((max((max((max(54, var_0)), ((max(-119, 48))))), (min((min(-1, 33633)), ((min(127, (arr_23 [i_10] [i_4])))))))))));
            }
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                arr_53 [i_14] = (max(((min(((min((arr_28 [i_14] [i_10] [i_10] [i_4]), var_14))), (min(7, -119))))), (max((max(var_9, (arr_0 [i_14]))), ((min(-4868, -54)))))));
                arr_54 [i_4] [i_14] [i_4] = (min(((min(((min(118, -37))), (min((arr_47 [i_4] [i_4] [i_14] [i_14] [i_4]), 105))))), (max((min(-4872, var_8)), ((max((arr_21 [i_4] [i_4]), -59)))))));
            }
            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                arr_57 [i_4] [i_4] [9] = (max(((min(((min(4871, 57))), (max((arr_16 [i_15]), var_7))))), (min((min((arr_27 [6]), 1065353216)), ((min(-4883, 139)))))));
                var_35 = (max(var_35, ((max((max((max(var_16, 3221225472)), (min((arr_34 [i_4]), (arr_52 [i_4] [i_4]))))), ((max((max(6830, 6648)), 139))))))));
                var_36 = (max(((max(((max(var_6, (arr_28 [i_4] [i_10] [i_10] [i_15 + 2])))), (min((arr_56 [i_4] [i_4] [i_4]), (arr_28 [i_4] [i_10] [i_4] [i_15 + 1])))))), (min(((max(-1, var_7))), (max(var_10, (arr_39 [i_15 + 1])))))));
                arr_58 [i_15] [i_10] [i_4] = (min(((max((min((arr_23 [i_4] [i_10]), 168)), ((max((arr_55 [i_10] [i_10]), var_4)))))), (max(((max(var_8, (arr_11 [10] [i_10] [10])))), (min(328213605776750804, (arr_39 [1])))))));
                arr_59 [i_4] [i_10] [i_15] = (min((max(((max((arr_37 [i_10] [i_15 - 1]), (arr_24 [i_10] [8] [i_15] [i_10])))), (min(42, 511)))), ((min((min((arr_46 [i_10] [i_15]), 4846)), (max(var_14, var_2)))))));
            }
            var_37 += (max(-4877, (max((max(65535, 32745)), (min(22361, 31744))))));
            arr_60 [i_10] = (min((min((max((arr_20 [i_10] [i_4]), var_15)), ((min(var_8, var_16))))), (max((min(41877752448212580, var_4)), (min(var_15, 30687))))));
            arr_61 [i_4] [i_4] [i_4] = (min((min(((max(var_6, -4872))), (min((arr_39 [i_4]), -41877752448212586)))), ((max((max((arr_20 [i_4] [i_4]), 6832)), ((min(-1, (arr_55 [i_4] [i_4])))))))));
        }
    }
    var_38 = (min((max((max(var_13, var_8)), ((max(var_3, var_7))))), ((max(58715, -752920991)))));
    var_39 = (min(264241152, 6830));
    #pragma endscop
}
