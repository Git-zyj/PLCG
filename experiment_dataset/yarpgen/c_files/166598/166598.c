/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max(((65535 ? 2324151872409576930 : 4294967295)), (var_6 / 1))), (min((max(10814471265313187024, 9282381670682019790)), var_15))));
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((((((!(arr_4 [i_1]))))) - (min(1810086367, 4294967292))));
                arr_6 [i_1] = ((1322930558 ? 4294967292 : 4187338181));

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_11 [i_2] [i_2] [i_2] = ((((32760 / (arr_0 [i_2 - 1])))) ? (5310181804665881263 / -16024) : ((((min(4223890856598633086, (arr_7 [i_0] [i_1] [5] [11])))) ? (arr_1 [i_2 - 1] [i_2 + 1]) : 14715081426372537164)));
                    arr_12 [6] [i_2] [i_2] [i_2] = max(2345033454544390901, (11912092424692288754 != 13832374887135836508));
                    var_20 = (var_3 >> (var_1 - 7807717969183124012));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_21 = (((((-(arr_3 [i_3])))) ? (((arr_0 [i_3]) ? var_10 : var_14)) : (arr_0 [5])));
                    arr_17 [i_3] = ((!(arr_4 [i_3])));
                }
            }
        }
    }
    var_22 = var_1;
    #pragma endscop
}
