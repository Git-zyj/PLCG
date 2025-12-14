/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (27024 ^ 40840);
    var_16 = var_3;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((0 ? (max((255 * 0), 18010146135154546017)) : (40840 + 0)));
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? (((arr_0 [i_0]) << (17204134753607777085 - 17204134753607777047))) : (arr_1 [i_0 + 2] [i_0 + 3])))) && ((255 < (min(602894899, (arr_1 [i_0] [i_0])))))));
        var_17 += -1;

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_6 [10] = (arr_5 [i_0 + 2] [i_1 - 1]);
            arr_7 [i_0] [i_0] [i_1] = ((((((arr_1 [i_1 - 1] [i_0 + 2]) ? (arr_4 [i_0 + 1]) : -3))) < (arr_0 [i_1])));
            arr_8 [i_0] [i_1] [i_1] = (min(576460752302374912, (~4294967295)));
            arr_9 [i_0] = ((((((max(2, -256)) <= ((~(arr_1 [i_0 - 1] [i_1])))))) << ((((-(arr_4 [i_0 + 1]))) + 160))));
        }
        arr_10 [i_0] [4] |= ((((((!-3787) << (((arr_4 [i_0]) - 147))))) ? (arr_0 [i_0]) : ((max((arr_5 [i_0 - 1] [i_0 + 2]), (arr_1 [i_0 + 2] [i_0 + 2]))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_14 [i_2] &= ((((179 ^ (arr_12 [i_2]))) + (arr_13 [i_2 - 1])));
        arr_15 [i_2] = (((arr_13 [i_2 + 1]) / (-8269546314369918220 <= 250)));
    }
    var_18 = (!var_9);
    #pragma endscop
}
