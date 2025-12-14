/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (max((((100 % var_14) / 103)), ((max(36, 25)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((((103 ? 5 : 0)) | ((53 ? -5449879163833175058 : var_12))));
        var_19 = (((arr_3 [i_0] [0]) ? ((((arr_2 [i_0]) & ((~(arr_0 [i_0] [i_0])))))) : ((((((((arr_0 [i_0] [i_0]) + 2147483647)) << (((arr_1 [3] [3]) - 7542))))) ? (arr_2 [i_0]) : ((var_7 ? 16 : 18446741874686296064))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 = (((arr_1 [i_0] [i_1]) | var_12));
            arr_8 [i_1] [i_0] = 13345;
            arr_9 [i_1] = ((87 ^ (arr_2 [i_0])));
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = -121;
        arr_13 [i_2] = ((((arr_10 [i_2] [i_2]) ? (arr_10 [i_2] [i_2]) : (arr_11 [i_2] [i_2]))));
    }
    #pragma endscop
}
