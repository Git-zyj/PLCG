/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [14] = ((~(((arr_1 [i_0]) << ((-(arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] = ((((((((arr_0 [1] [i_0]) ? ((((!(arr_0 [i_0] [i_0]))))) : (~9223372036854775807))) + 9223372036854775807)) + 9223372036854775807)) << (((((min((((var_9 > (arr_1 [i_0])))), (((arr_1 [i_0]) ? var_10 : var_4)))) + 6380538257587692546)) - 46)));
        arr_4 [i_0] = max((max((~var_9), var_10)), (((!(max(1, (arr_0 [i_0] [i_0])))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_1] = ((max(9223372036854775807, (1 < 0))) << (1 - 1));
            var_11 = (max(var_11, ((min((((var_6 ^ 1) * var_1)), ((~((min((arr_0 [i_0] [12]), (arr_1 [i_0])))))))))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_12 = (max(var_12, (((((max(4130486459442994583, (((arr_7 [i_0] [i_0]) ? (arr_5 [i_2] [i_2] [i_2 - 1]) : var_7))))) ? (((!(((var_0 ? (arr_1 [i_2]) : (arr_1 [18]))))))) : ((max((arr_6 [i_0] [1]), (max(1, (arr_0 [i_0] [i_0])))))))))));
            arr_11 [i_0] [i_2] = (((((1 || ((((arr_5 [i_2] [i_2 - 1] [i_0]) ? (arr_9 [i_2]) : var_6)))))) * ((1 ? 1 : 1))));
            arr_12 [i_2] [1] = ((((((!(8043982651721365054 < -6197623434019761525))))) / (((arr_7 [i_2 - 1] [i_2 - 1]) ? (arr_7 [i_2 - 1] [i_2 - 1]) : var_0))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_17 [i_0] |= ((arr_10 [i_3 - 1] [1]) || (arr_10 [i_3 - 1] [i_3]));
            arr_18 [i_0] = ((arr_5 [1] [i_0] [i_0]) - (~var_5));
        }
    }
    var_13 = var_10;
    #pragma endscop
}
