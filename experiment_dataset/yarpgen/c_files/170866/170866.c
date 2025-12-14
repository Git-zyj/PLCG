/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_20 = ((var_13 & (arr_6 [i_0] [i_1] [i_2] [i_2])));
                    arr_10 [i_0 - 1] [i_2] [i_1] [i_3] = (((-(arr_3 [i_0] [i_0]))) / (arr_6 [i_2] [i_1] [i_0] [i_2]));
                    var_21 = arr_6 [i_0] [i_1] [i_2] [i_2];
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_13 [i_0] [i_1] [i_1] [i_2] = (((arr_0 [i_0 - 1]) | (((arr_8 [i_0] [i_1] [i_2] [i_0] [i_4] [i_4]) ? 9223372036854775807 : (arr_8 [i_4] [i_4] [i_2] [i_4] [i_4] [i_4])))));
                    var_22 -= (((arr_7 [i_0] [i_4] [i_4]) >> (((arr_6 [i_0 - 1] [i_1] [i_2] [i_1]) + 966118147445625206))));
                    var_23 = (arr_9 [i_0 - 1] [i_0 - 2]);
                }
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    var_24 = 9177405600020158339;

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_18 [i_0] [i_2] [i_6] [i_0] [i_6] = ((((var_1 + (arr_12 [i_2] [i_1] [i_1] [i_1] [i_1]))) <= 1703921184));
                        arr_19 [i_0 - 2] [i_1] [i_6] [i_1] [i_6] |= (((arr_7 [i_5] [i_1] [i_0]) + -32598));
                    }
                }
                var_25 *= var_16;
                arr_20 [i_2] [i_1] [i_1] = (((((11909 ? 1965603221 : (arr_6 [i_2] [i_2] [i_1] [i_2])))) ? (arr_16 [i_2] [i_0 - 2] [i_1] [i_1] [i_1]) : 1296927283));
                arr_21 [i_0] [i_1] [i_2] [i_2] = (((arr_11 [i_0 - 3] [i_1] [i_0 - 3] [i_2]) << (((arr_11 [i_0 - 3] [i_1] [i_1] [i_1]) - 8270892056310699294))));
            }
            arr_22 [i_0] = ((((!(arr_0 [i_1]))) ? -32598 : -1451224272));
            var_26 = var_13;
        }
        var_27 *= ((-(max(6984642439745707134, 1965603238))));
    }
    #pragma endscop
}
