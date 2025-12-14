/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((!((min(7783895606898336611, (!127))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 ^= (((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0 - 1]) : 3479628644));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((arr_2 [i_1] [4]) ? -32744 : var_0));
            arr_6 [i_0] [i_0] = (((((var_0 ? 4095 : 0))) ? -2127725934 : ((15 ? (arr_4 [i_0] [i_0 - 1] [i_0]) : var_7))));
            var_17 = (max(var_17, var_0));
            var_18 = (max(var_18, 815338659));
        }
        var_19 = (min(var_19, ((31 ? (((~(arr_4 [i_0] [i_0 - 1] [i_0])))) : 3855803124))));

        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            var_20 = (min(var_20, (23 / -1328351765)));
            var_21 = -1570370886525446148;
            var_22 = ((~(arr_2 [i_0 - 1] [i_0 - 1])));
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_23 = (min(var_23, ((((var_2 & (arr_9 [i_3 + 2])))))));
            var_24 = ((((((arr_8 [i_0]) ? (-32767 - 1) : 54219615))) ? -var_3 : (((arr_10 [i_0] [7] [i_0 - 1]) ? 1328351764 : (arr_1 [i_0] [i_3])))));
            arr_12 [i_0] = (var_0 ? (arr_11 [i_3 - 1] [i_3]) : (arr_11 [i_3 + 2] [i_3 + 1]));
        }
        var_25 = ((((((arr_2 [i_0] [i_0]) ? 1469001223 : var_0))) ? (((var_0 < (arr_11 [i_0 - 1] [i_0])))) : (arr_7 [i_0 - 1])));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_26 -= max((((((4086 ? var_13 : 115))) / 4240747672)), ((((min((arr_13 [i_4] [i_4]), var_2))) ? (arr_13 [i_4] [i_4]) : (((arr_13 [i_4] [i_4]) ? (arr_14 [i_4]) : var_1)))));
        arr_15 [i_4] = (~1570370886525446147);
    }
    #pragma endscop
}
