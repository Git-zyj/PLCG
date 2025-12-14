/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += 48808;
    var_17 = var_1;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        var_18 += ((+(((arr_1 [i_0 + 2] [i_0 - 1]) ? -1 : (arr_1 [5] [i_0 - 2])))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = -25;
        arr_8 [i_1 - 2] = (+-15554);
        var_19 = (min(var_19, ((((283513490 ? 4011453811 : (arr_1 [i_1 - 2] [i_1 - 2])))))));
        arr_9 [i_1 - 1] [i_1] = 33764;

        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            var_20 = (min(var_20, 4011453802));
            var_21 = (arr_1 [i_1] [i_2]);
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_22 = (max(var_22, 283513484));
            arr_15 [9] [i_3] [i_3] = (arr_13 [i_3]);

            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_23 = 3;

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        arr_24 [i_4] [i_4] = (arr_13 [i_1]);
                        var_24 = (arr_21 [i_5]);
                        arr_25 [i_1] [i_3] [i_1] [i_1] [i_6 - 1] &= 216;
                        arr_26 [i_4] [1] [i_5] [4] [i_3] [i_1] [i_4] = (arr_21 [i_5]);
                    }
                }
                arr_27 [i_4] [i_1] [i_3] [i_4] = 3;
                var_25 = 283513514;
                arr_28 [i_1] [i_4] [i_4] [i_4] = ((17287900411285463506 ? 4011453787 : (!4011453807)));
            }
            arr_29 [i_3] [i_1 + 1] = -27730;
            arr_30 [i_1] [i_3] = (arr_19 [i_1] [i_3] [i_3] [i_3] [i_3] [i_3]);
        }
    }
    var_26 = 4026531840;
    var_27 |= var_2;
    #pragma endscop
}
