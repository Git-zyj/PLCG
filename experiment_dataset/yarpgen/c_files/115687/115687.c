/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 = (arr_0 [0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_13 = (arr_3 [i_0]);
            arr_6 [i_1] [i_0] = (arr_0 [5]);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_0] [i_0] = (--126);
            arr_10 [i_0] [i_0] [i_0] = (-127 - 1);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_13 [i_0] = ((~((max(1746, 12432)))));
            var_14 -= min((min((-1459463829024260528 && 127), (-127 - 1))), (((((max(268435455, var_2))) || ((((arr_8 [i_0] [i_0] [i_3]) % 10223233191669336808)))))));
        }
        arr_14 [i_0] = (((((48756 ? 245 : -1740))) ? (arr_4 [i_0] [i_0] [i_0]) : ((3312251280 / (arr_8 [i_0] [i_0] [i_0])))));
        var_15 = min((((!(((-268435465 ? 126 : (arr_5 [i_0] [i_0] [i_0]))))))), var_11);
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = (arr_16 [i_4]);
        var_16 = (max(((max(4874154197503535438, -11))), ((((min(12, 255))) | ((((-127 - 1) || var_11)))))));

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_17 = (min(var_17, ((min(0, ((245 ^ (arr_8 [i_4] [i_4] [i_5]))))))));
            arr_20 [i_4] |= (max((max((min(var_9, 1225319775)), 22139012)), (min((max(var_11, -1802399523)), 1756))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = (arr_15 [i_6]);
        arr_25 [i_6] = ((-((133 ? var_11 : (arr_19 [i_6] [i_6])))));
    }
    var_18 = (((((231 - var_2) << (var_8 - 3611101366767405181))) < ((min(var_9, 1424774632)))));
    #pragma endscop
}
