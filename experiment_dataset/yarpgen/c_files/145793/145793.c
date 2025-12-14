/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (max((min(3254438023, 1)), ((-1606699682053378112 ? ((var_7 ? 3254438023 : var_15)) : var_14))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_1 [0] [i_0])));
        var_19 ^= ((!((((arr_1 [i_0] [i_0]) ? var_1 : (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = -3840901094980802158;
        arr_4 [i_1] [i_1] = (arr_2 [i_1] [5]);
        arr_5 [i_1] = (((((var_7 + ((1040529286 ? (arr_3 [i_1]) : 0))))) > 1040529259));
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        arr_8 [i_2] = ((-(arr_6 [i_2 + 2])));
        arr_9 [i_2] = (((0 ? 3254438023 : -1)));
    }
    var_21 = (max(var_21, (((var_13 ? 1160894290 : (((((1040529259 ? var_14 : var_0))) ? (max(10028, 1147912772)) : 21)))))));
    #pragma endscop
}
