/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 *= var_2;
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = 107;
        var_18 = (max(var_18, (((var_11 & (((var_2 * (arr_0 [i_1])))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((9223372036854775807 ? (var_11 >= var_9) : var_9));
        arr_12 [4] |= (arr_4 [i_2]);

        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_19 = ((1389525420 >> ((((var_10 - (arr_4 [i_2]))) - 4270246728))));
            arr_17 [i_2] [i_2] [14] |= (((arr_10 [1]) ? (arr_14 [i_3 + 4] [i_3 - 1]) : (arr_15 [i_2] [i_3 - 2] [i_3])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_20 = 122;
                        var_21 = ((-(arr_14 [i_3 + 1] [i_3 + 3])));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_22 = (((((1389525425 ? (arr_7 [i_2]) : var_12))) ? 1389525417 : (~var_3)));
                            var_23 = (min(var_23, (~var_0)));
                            var_24 = (((var_14 != var_16) ? (((((arr_25 [i_6] [i_3 - 1] [i_4]) <= var_3)))) : (arr_10 [i_2])));
                            arr_27 [i_2] [i_3] [i_2] [i_5] [i_6] = ((var_13 ? (!-1389525426) : (arr_21 [i_3] [i_2] [i_3 - 1])));
                        }
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_25 = ((-(var_0 + 1389525447)));
                            var_26 = ((5309260088916948568 ? ((-5309260088916948569 & (arr_10 [i_4]))) : (arr_22 [i_7 - 2] [i_7 - 1] [i_4] [20] [i_7 + 1] [i_7 + 1])));
                            var_27 += ((var_4 == (((arr_3 [i_2]) ? var_3 : var_4))));
                            arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_26 [i_2]);
                        }
                        var_28 = (((arr_29 [i_2] [i_3 + 2]) ? (arr_26 [i_2]) : (arr_26 [i_2])));
                    }
                }
            }
            var_29 = (((arr_10 [i_2]) | -1389525455));
            var_30 = (max(var_30, ((((((11763 ? 1389525417 : (-127 - 1)))) ? ((((arr_22 [i_2] [i_2] [0] [i_3] [i_3] [i_3]) ? (arr_3 [i_2]) : (arr_30 [i_2] [i_3 - 1] [i_3] [i_3 - 2] [i_2] [i_2])))) : ((-(arr_1 [i_2]))))))));
        }
        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {
            var_31 ^= ((-(1389525405 < 3505098601698700544)));
            var_32 ^= ((~(arr_20 [10] [i_2] [i_2] [i_2])));
            arr_35 [i_2] [9] [i_2] = ((1277125643 ? (arr_22 [i_2] [i_8 - 3] [i_2] [2] [i_8 - 1] [i_8]) : ((((arr_13 [i_2]) + (arr_18 [i_2] [i_2] [i_2]))))));
            arr_36 [i_2] = var_8;
            var_33 = (arr_14 [i_8 - 2] [i_8 - 2]);
        }
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        var_34 = (max(var_34, ((((2256157375 ? 8929180863663572455 : (-14 != var_9))) ^ (((arr_24 [i_12] [i_11] [i_11 + 1]) ? 2834377252093285050 : (arr_24 [i_12] [i_12] [i_11 - 1])))))));
                        arr_48 [i_9] [i_9] [i_9] [i_9] = ((!(((-(arr_8 [i_9] [i_12]))))));
                    }
                }
            }
        }
        var_35 -= (((((1389525447 >> (((arr_37 [i_9]) - 9813573372693820385))))) + (arr_9 [i_9])));
    }
    var_36 = (max(var_15, 1389525412));
    var_37 = var_13;
    #pragma endscop
}
