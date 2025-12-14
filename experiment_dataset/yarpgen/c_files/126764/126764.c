/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] |= var_4;
        arr_5 [i_0] = ((~((((arr_0 [i_0]) >= 2472496107511837217)))));
        arr_6 [i_0] = (min((min(-6729041643159404948, var_9)), 20627));
        arr_7 [i_0] [i_0] = ((((max(((var_11 ? var_7 : -23320)), ((max((arr_2 [i_0]), (arr_2 [i_0]))))))) ? ((((((arr_3 [i_0] [i_0]) ? var_0 : var_7)) >= (min(var_1, var_8))))) : ((((((20627 | (arr_1 [i_0])))) == (max(var_0, (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, -8164754757094087083));
        var_17 = (min(var_17, var_9));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_13 [1] = (((max((((32767 ? (arr_12 [i_2]) : (arr_11 [i_2] [i_2])))), ((26781 ? var_6 : (arr_11 [i_2] [i_2]))))) / 20627));
        var_18 = (!(((((var_2 ? var_7 : var_3)) / (((arr_12 [i_2]) / var_9))))));
    }
    var_19 = (max(var_11, var_13));
    var_20 = (((var_12 >= var_12) > var_10));
    #pragma endscop
}
