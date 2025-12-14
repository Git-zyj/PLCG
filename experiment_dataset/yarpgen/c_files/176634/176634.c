/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(((-85614031 - var_4) & (!var_10)))));
    var_13 = (~8358967642789504525);

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (min((arr_2 [i_1]), (arr_2 [i_0])));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_7 [i_0] = ((((!(~2047)))));
                var_15 = ((((max(9529, 116))) ? (~1) : ((+(((arr_0 [6]) / 7))))));
            }
            arr_8 [i_0] = (arr_6 [i_0 + 1] [i_0] [i_0] [i_1]);
        }
        arr_9 [i_0] [i_0] = ((+(((arr_2 [i_0 + 1]) % ((~(arr_6 [5] [i_0] [i_0] [i_0])))))));
        arr_10 [i_0] = (((max(((153 ? 5963522657506502128 : 3857877557)), -4148665906)) % ((((34 ? 44 : (arr_6 [i_0] [5] [i_0] [i_0])))))));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_16 = ((arr_5 [i_3 + 1] [i_3] [i_3 + 1] [i_3]) ? (((!((max(-361822171636281675, -119)))))) : (!-48));
        arr_13 [i_3] [i_3 + 2] = (max(((124 ? -1010671501 : (arr_12 [i_3]))), (arr_1 [i_3 - 1] [i_3])));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_16 [i_3] [i_4] = ((-4193508778416295764 ? (((2039341025797568937 ? 63 : 1))) : 2147483645));
            var_17 -= ((~((~(arr_3 [14] [i_3 + 2] [4])))));
        }
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            arr_20 [i_3] = (((max((arr_5 [i_5 + 1] [i_3] [i_3] [i_3 + 1]), (arr_5 [i_3] [i_3] [i_5] [i_5]))) ? (((3613161692433590744 ? (arr_15 [i_3 + 1] [i_5 - 1] [i_5]) : (arr_15 [i_3 + 1] [i_5 + 1] [i_5])))) : (arr_4 [i_3] [i_5] [i_3])));
            arr_21 [i_3] [i_5] = ((-(53208 + 58385)));
            arr_22 [i_3] [i_3] = ((+((((max((arr_19 [i_3]), 1))) ? -6685366613435451025 : (((-(arr_14 [15] [i_3] [i_3]))))))));
        }
        arr_23 [i_3] [6] &= max(((((((arr_14 [6] [12] [i_3]) / (arr_11 [i_3 + 2]))) == (arr_4 [i_3 + 1] [i_3 + 1] [18])))), 475323706);
    }
    #pragma endscop
}
