/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                var_19 = (min(var_19, (9146283222097526612 <= 65535)));
                var_20 = var_12;
                arr_10 [i_1] [15] [i_1] = arr_6 [i_0] [i_0];
                arr_11 [i_1] [i_1] [i_1 - 1] = (!1);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_21 ^= (max((((((min(-35, 1))) <= (~1)))), ((-((var_2 ? (arr_13 [i_3] [i_1] [i_0]) : 126))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    arr_19 [i_0] [1] [i_1] [i_0] &= 0;
                    arr_20 [i_0] [i_0] [i_1] [i_0] = (~-13);
                    var_22 &= ((~(0 != var_1)));
                    var_23 = (arr_7 [i_0] [i_1] [i_1 - 1] [i_1 - 1]);

                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        arr_25 [i_0] [i_1] [12] [i_4] [12] = ((23 ? (arr_18 [i_1 + 1] [12] [i_1] [i_1 + 1]) : 1));
                        var_24 = 1099710925039728525;
                        var_25 = 42;
                    }
                }
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_26 -= (-11 && ((!(arr_24 [i_6] [i_6] [i_6] [i_1 + 1] [8] [i_1 - 1]))));
                var_27 = min(8191, var_8);
                var_28 = (min(var_28, (((+(((arr_26 [i_0] [i_0]) ? (var_8 && 0) : ((-(arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                var_29 = 26;
            }
            var_30 = 102;
        }
        var_31 -= (((((741082500126165156 ? 1 : 4))) ? ((((1 != (~var_16))))) : ((-((1 ? 11987715198461615812 : -96))))));
        var_32 = (min(var_32, -21));
        arr_28 [1] = (((!-94) && 51));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_33 = 1;
        var_34 = (max(var_34, ((((!-80) && ((max(-361382483102287017, (((!(arr_3 [i_7] [i_7] [i_7]))))))))))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_34 [3] = -23;
        arr_35 [i_8] = ((var_16 <= (((((arr_21 [1] [i_8] [i_8] [i_8] [i_8] [i_8]) <= (arr_8 [16] [i_8] [i_8])))))));
        var_35 = (((((84 - -7982138823465089005) - (0 + -1))) / -29));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_36 = (min(var_36, var_1));
        arr_39 [i_9] [i_9] = (((-((max((arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), -63))))));
    }
    var_37 = 30336;
    var_38 = 7907933068737246825;
    #pragma endscop
}
