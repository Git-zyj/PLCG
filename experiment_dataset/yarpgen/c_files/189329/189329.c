/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_4 [0] = (min((!var_0), -240));
        arr_5 [i_0] = (3780031252 & 13885354370178949447);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_9 [i_1] = (((((var_0 % 240) ? (arr_7 [i_1]) : 240)) * (16663 + 40416)));
        arr_10 [i_1] [i_1] = ((((~(arr_7 [i_1]))) | (0 < 13)));
        arr_11 [14] [14] = var_1;
        arr_12 [i_1] = (((32767 & 252) >> ((((251 ? 238 : (arr_1 [i_1] [i_1]))) - 230))));
        arr_13 [i_1] = (max((((((var_10 ? var_0 : var_11))) ? ((23 ? 2076995415 : 21)) : (((arr_7 [i_1]) ? var_8 : 10052)))), 31));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_17 [i_2] = (max((((((arr_15 [i_2] [i_2]) > -103)))), ((-(-7282794675309816942 + -23)))));
        arr_18 [i_2] [i_2] = (((arr_16 [i_2]) % 2737883640));
        arr_19 [i_2] = ((240 ? 65533 : 239));
        arr_20 [i_2] [i_2] = var_11;
    }
    var_12 = ((var_0 ? var_9 : (((var_5 ? var_2 : 12)))));
    #pragma endscop
}
