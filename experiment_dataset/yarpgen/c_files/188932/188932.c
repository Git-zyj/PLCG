/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_2] = ((1234601429 ? 1234601429 : -1234601430));
                    arr_9 [i_0] [i_2] [i_2] [6] = (min(-1234601430, 67));
                }
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] = (arr_3 [i_0]);

                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_18 = (((60 ? (arr_2 [i_3 - 4] [i_4]) : (arr_2 [i_0] [i_0]))));
                        var_19 = (min(var_19, ((min(((((((arr_0 [i_4]) | 235))) ? 0 : (arr_11 [i_4] [i_0]))), ((((arr_3 [i_1]) ? (arr_14 [i_3 + 4] [i_3 + 4] [i_4] [i_4]) : 2420))))))));
                        var_20 = ((-59 ? ((((18446744073709551615 * 960) ? var_3 : (((arr_0 [i_3]) ? var_1 : (arr_13 [i_0] [i_1] [i_3] [i_4])))))) : var_16));
                        var_21 = (~var_4);
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, (((789694931 ? 893878709 : 4294967295)))));
                        var_23 = (min(((60 ? 2147483647 : 4294967295)), ((0 ? -981777590 : ((60 ? -961 : 582196121))))));
                        var_24 = (((((var_16 ? (~var_5) : var_1))) ? 14823 : (arr_15 [i_3 + 4] [i_1] [i_3])));
                        arr_19 [16] [i_1] [16] [i_3] [i_3] [0] = ((~((min((arr_13 [i_0] [i_1] [i_1] [i_0]), (!var_16))))));
                        var_25 = 13828857607743303059;
                    }
                    var_26 = (max((-2147483647 - 1), 2305843009209499648));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = (arr_18 [i_0] [i_1] [i_3] [7]);
                }
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    var_27 = (((((~(arr_4 [i_6 + 2] [i_6 + 1])))) + (min((arr_13 [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_0]), var_11))));
                    var_28 = (((((~(arr_13 [i_6 + 2] [i_6] [i_1] [i_0])))) ? (arr_17 [i_0] [i_0] [i_1] [i_1] [14] [i_6]) : -var_11));
                }
                arr_23 [i_1] [i_1] [i_1] = min(var_12, -var_12);
                arr_24 [i_0] = (min((max(4294967295, 13)), (arr_17 [i_0] [i_0] [i_0] [i_0] [6] [i_0])));
                var_29 = min(((~(arr_14 [i_0] [i_0] [i_0] [i_0]))), (var_16 != var_7));
                var_30 = (max((max((arr_11 [i_0] [i_0]), var_17)), 127));
            }
        }
    }
    var_31 = (min(((!(((var_17 ? var_4 : var_3))))), var_15));
    #pragma endscop
}
