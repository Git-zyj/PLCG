/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(var_9 + 1842976266236034570)));
    var_20 = var_15;
    var_21 = (min(8058593616469648828, (255 - 42989)));
    var_22 = ((var_12 ? (42989 ^ -612888376) : (~9145)));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (min(134217216, -1));
        arr_4 [i_0 + 1] [i_0 + 1] = (~3595330482049522682);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_23 *= (((((65535 || (arr_6 [10])))) & (!42)));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_12 [i_1] [i_2] = (((arr_6 [i_2]) < 22546));
            var_24 = (((!(arr_5 [i_2]))));
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_25 = 216;
        arr_15 [1] [17] = -1;
        arr_16 [i_3] = (arr_14 [i_3] [i_3]);
        var_26 = (min(var_26, (((((~(!-8025843436893870822))) * (min((~64), (arr_14 [i_3] [i_3]))))))));
        var_27 ^= (1 ? ((((106 % (arr_13 [i_3]))) * (arr_14 [i_3] [i_3]))) : (((14802362441025916236 == (((max((arr_14 [1] [i_3]), (arr_13 [i_3])))))))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_19 [i_4] = -1;
        var_28 = ((((((arr_18 [i_4] [i_4]) > 65535))) ^ ((((2147483647 ? 33875 : 47))))));
    }
    #pragma endscop
}
