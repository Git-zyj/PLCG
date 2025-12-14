/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 65280;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (max((~132558673218620933), 1));
        arr_3 [17] = ((((-16 == (((var_12 ? (arr_0 [i_0] [i_0]) : -6692699753783170908))))) ? 238 : (((((2102464674 ? 52 : 1726314059))) ? (var_10 & 1105274401) : ((65528 ? 18446744073709551594 : 6692699753783170907))))));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((((((max(var_14, var_2)) >= 1099575644)))) | ((6692699753783170908 >> (((arr_1 [i_1 - 1] [i_1 - 3]) - 15555727341416068884))))));
        var_18 = (max((((~((1 ? 47755 : var_11))))), var_0));
        arr_8 [i_1] = ((((var_8 || ((min((arr_1 [i_1] [i_1]), 0))))) ? (((((arr_0 [i_1] [i_1 + 1]) > var_9)))) : ((((arr_6 [i_1]) ^ var_10)))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_19 = (arr_0 [i_2] [i_2 - 2]);
        var_20 = (min(var_20, ((~(arr_5 [i_2 - 1] [i_2 - 1])))));
        var_21 = arr_4 [2];
    }
    var_22 ^= (min(-14379855887211713431, (((52276 <= (!3614924089016593158))))));
    var_23 = (max(var_8, ((~((var_9 ? 20 : var_3))))));
    var_24 = var_7;
    #pragma endscop
}
