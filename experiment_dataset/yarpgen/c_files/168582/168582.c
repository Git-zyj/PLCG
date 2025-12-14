/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = max((min(-20840, (min(4294967295, -2457894348905005521)))), ((18014397972611072 << (!2251797666201600))));
        var_16 = (min(var_16, (((min((~var_12), ((max((arr_1 [i_0] [i_0]), var_3)))))))));
        arr_2 [i_0] = (max((arr_1 [i_0] [i_0]), (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 += (arr_6 [i_0] [i_0]);
            arr_7 [i_0] = ((max(var_10, var_13)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = ((var_11 >> (((arr_6 [i_0] [i_2]) - 3032667176))));
            arr_10 [i_0] = 1071422031;
        }
        var_19 = (arr_3 [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = 4506283960536136102;
        var_21 ^= (max((((arr_12 [i_3]) ^ (arr_12 [i_3]))), -var_2));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_22 ^= (arr_14 [i_3] [18]);
                    arr_19 [8] [i_4] &= -90;
                }
            }
        }
        var_23 -= (min(var_0, 16));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_24 [i_6] = (arr_12 [i_6]);
        var_24 = (min((((var_5 >= (((-(arr_8 [i_6] [i_6] [i_6]))))))), (min((max(9829045390493394891, (arr_5 [i_6]))), (!var_0)))));
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_25 -= (var_3 * var_5);
            var_26 = (max(var_26, (max((max(var_6, 2351030238)), (arr_25 [i_8])))));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_27 |= var_0;
                arr_33 [i_7] [i_7] [i_7] [i_7] = (arr_13 [i_7 + 1] [i_9]);
            }
        }

        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_36 [i_7] = -120;
            var_28 = (max(var_28, ((((max((!var_7), var_13)) > var_0)))));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_29 -= (max((var_10 / var_4), ((max((max(var_6, 3223545286)), (arr_9 [i_7] [2]))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 8;i_13 += 1)
                {
                    {
                        var_30 = (arr_30 [i_13] [i_13 + 2] [i_7 + 1] [5]);

                        for (int i_14 = 2; i_14 < 7;i_14 += 1)
                        {
                            var_31 = ((!var_2) != var_5);
                            arr_49 [i_7] = min((min(var_10, (-32767 - 1))), var_9);
                            var_32 -= 4362143215172466647;
                            var_33 += min(((((arr_39 [i_13] [i_14 - 2]) >> (-21236 + 21258)))), ((-(var_5 * var_9))));
                            arr_50 [i_7] [i_13] [i_12] [i_11] [i_7] = (((max((-127 - 1), var_1)) == (~var_14)));
                        }
                    }
                }
            }
            arr_51 [i_7] = var_2;
        }
    }

    /* vectorizable */
    for (int i_15 = 0; i_15 < 18;i_15 += 1)
    {
        arr_54 [i_15] [i_15] = (~24274);
        var_34 = 1071422031;
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        arr_57 [0] &= (!-67);
        var_35 += 1997540254;
    }
    var_36 = (-127 - 1);
    var_37 ^= (max((!var_2), var_12));
    #pragma endscop
}
