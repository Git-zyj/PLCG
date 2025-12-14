/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 7787827032604350847;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = ((18446744073709551603 ? 1 : 1));
        var_17 = ((-var_3 ? ((max(((18640 ? 1 : 7787827032604350847)), ((((arr_0 [i_0]) ? 13050 : (arr_1 [i_0] [i_0]))))))) : (((arr_0 [14]) ? 4 : (arr_0 [i_0])))));
        var_18 *= (((arr_0 [1]) << ((((var_6 ? -7 : (arr_1 [i_0] [i_0]))) - 4294967279))));
        arr_2 [i_0] = (max((((450531839 != -11458) & (arr_1 [i_0] [17]))), (((0 != (-1600601548 & 0))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_0 [9]) > 1));
        arr_7 [i_1] = ((~(((var_7 <= (arr_5 [i_1]))))));
    }
    var_19 = var_9;
    #pragma endscop
}
