/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_1;
    var_15 = 0;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_16 = (max(var_16, -276712558));
                var_17 = 4071765511;
                var_18 = var_6;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_19 = (min(var_19, (var_13 & 1813263921)));
                            arr_14 [i_0 - 2] [i_0] [19] [6] [i_1] = ((3503090011 > (arr_1 [i_0 - 1])));
                            var_20 = var_4;
                        }
                    }
                }
                arr_15 [i_1] [10] [10] [10] = ((var_13 && (arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1] [6])));
            }
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                arr_18 [19] [i_1] = (arr_5 [i_5 + 1] [0] [i_5 + 2]);
                arr_19 [i_0 + 1] [i_1] [i_1] = -596352893;
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    arr_24 [i_1] [i_1 + 1] [i_1] = ((var_9 ? ((1 ? 223201784 : var_5)) : ((791877285 * (arr_20 [i_1] [i_6] [i_7 + 1])))));

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_21 = ((-8211131459226957939 >> (3503089997 - 3503089988)));
                        var_22 = (arr_13 [i_6 - 2] [i_1] [i_6 - 1] [i_6 - 2] [i_8]);
                        var_23 = 1558903941;
                    }
                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        var_24 = 122;
                        var_25 = var_3;
                        var_26 ^= (~223201783);
                    }
                    var_27 *= var_2;
                }
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {

                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        var_28 = (var_6 & 1);
                        var_29 = 241;
                    }
                    var_30 = ((2058898099 ? (((arr_0 [i_0 + 4]) ? var_1 : 1)) : var_4));
                    var_31 = 2736063329;
                    var_32 = (max(var_32, 2058898099));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_33 = (9437725463842184518 >= 0);
                            var_34 = (max(var_34, 503775921));
                        }
                    }
                }
            }
            var_35 ^= var_2;
        }
        var_36 = -2093928988975913855;
    }
    var_37 = (min(var_1, ((~(var_12 >= 8211131459226957939)))));
    #pragma endscop
}
