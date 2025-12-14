/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_20 -= -28457;
        arr_3 [i_0] [i_0 - 1] = ((((((max(-1547895655, -28443))) ? 45972 : (((arr_1 [i_0]) ? -1655221973 : (arr_0 [i_0 + 2] [i_0])))))) ? 19563 : (max((arr_2 [i_0 + 4] [i_0 + 2]), (((arr_0 [i_0 + 2] [i_0 + 2]) ? var_15 : 27977)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_6 [1] [1] [i_1] = (((19286 - -19286) < (var_0 > var_2)));
            var_21 = (-1 || -10206);
            arr_7 [14] [i_0] = (~var_17);
            arr_8 [16] = (-(15356 != -21189));
            arr_9 [i_0] = ((!(arr_0 [i_0 + 2] [i_1 + 3])));
        }
    }
    var_22 = (!var_5);
    var_23 = (min(var_23, ((65535 ? 27977 : 19535))));
    var_24 = ((var_3 == ((((max(1655221972, var_13)) != (!var_19))))));
    #pragma endscop
}
