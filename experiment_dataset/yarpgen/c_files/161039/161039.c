/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= 35397;
    var_18 = 1529151461;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = ((var_4 ? ((((min(-951462861, 91))) ? ((var_4 ? 253 : (arr_0 [i_0] [i_0]))) : ((~(arr_2 [i_0]))))) : (((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0])))));

        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((((min(7288823051595816244, 7288823051595816244))) ? (arr_3 [i_1]) : (arr_4 [i_0] [i_0])));
            var_20 = (max(var_20, ((((((((max(0, (arr_0 [i_0] [i_1])))) ? ((max(var_3, (arr_4 [i_0] [i_1 + 1])))) : ((var_5 ? 255 : -30910))))) ? (((max((max((arr_3 [i_1]), (arr_1 [i_0] [i_0]))), (arr_4 [i_1 - 1] [i_1 - 1]))))) : ((max(80, var_16))))))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            var_21 = (((arr_1 [i_2 + 3] [i_2]) ? (arr_4 [i_2 - 3] [i_2 - 1]) : var_5));
            var_22 = (255 ? (((arr_7 [i_0] [i_0] [i_0]) ? 3906642886 : (arr_2 [i_0]))) : (arr_6 [i_2] [i_2 + 1] [24]));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_23 = (arr_6 [i_3] [i_0] [i_0]);
            arr_12 [i_0] [i_0] [i_0] = ((147 ? 175 : 7288823051595816233));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_24 |= 1;

            /* vectorizable */
            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
            {
                var_25 = (arr_0 [i_0] [i_5]);
                var_26 = (((arr_6 [i_0] [i_0] [i_0]) ? 9 : (arr_14 [i_0] [i_0] [i_4])));
                var_27 = ((!(arr_9 [8])));
                var_28 = ((106 ? 3330500563 : 5003));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    var_29 |= (((32624 ? 75 : 97)));
                    arr_25 [1] [1] [1] [i_0] [1] = ((4983 ? (arr_24 [i_6] [i_4] [i_7] [i_7] [i_6] [i_6]) : (((3203255491 ? (arr_21 [i_7] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 + 1]) : var_2)))));
                    var_30 = (((arr_4 [i_0] [i_7 + 1]) ? (arr_17 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2]) : (arr_4 [i_4] [i_7 - 2])));
                }
                var_31 = (arr_23 [i_0] [i_0] [i_0] [i_0]);
                var_32 = (((arr_1 [19] [i_6]) ? ((1341130268 ? 6856 : 255)) : 1144840158));
            }
        }
    }
    #pragma endscop
}
