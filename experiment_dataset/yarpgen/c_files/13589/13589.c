/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 ^= ((~(arr_3 [i_0] [i_0])));
        var_13 = ((((min(((var_11 ? var_2 : (arr_0 [i_0]))), var_2))) & (((arr_3 [i_0] [i_0]) ? 9223371761976868864 : (arr_1 [20])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = (!var_9);
        arr_7 [i_1] [i_1] = arr_4 [i_1] [i_1];
        arr_8 [i_1] [i_1] = (arr_3 [i_1] [i_1]);

        for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_12 [i_1] = (max(((min(var_6, (((!(arr_5 [i_1] [3]))))))), (((arr_10 [i_2] [i_2 + 2]) ? -64 : (arr_5 [i_2] [i_2 - 2])))));
            var_15 = (((var_8 + (arr_10 [i_2 + 2] [i_2 + 1]))));
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_16 *= (arr_1 [i_3 - 1]);
            var_17 = (arr_6 [i_3]);
            var_18 = (arr_1 [i_3]);
        }
    }
    var_19 *= var_7;
    var_20 = -var_0;
    #pragma endscop
}
