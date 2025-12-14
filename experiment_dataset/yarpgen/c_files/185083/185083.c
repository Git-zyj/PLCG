/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 19;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [12] [12] = (((arr_0 [i_0] [i_1]) <= var_9));
            arr_5 [i_0] = (-32746 / -1);
            arr_6 [i_0] = ((-(((!(-32767 - 1))))));
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_2] [i_2] = (~var_15);
            arr_12 [i_0] = -16128;
            arr_13 [i_0] [i_0] [i_0] = ((var_14 ? -32728 : 18446744073709551608));
            arr_14 [i_2] [8] [8] = (((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_1 [i_2])));
        }
        arr_15 [10] = var_2;
        arr_16 [i_0] = (-32735 + -32764);
        arr_17 [6] = ((var_5 || (((-(arr_8 [i_0] [i_0]))))));
    }
    var_17 = (((((((max(32767, 13930)))) > ((49407 ? 2199023255551 : 65534)))) ? ((min(32744, (49 < var_13)))) : var_12));
    #pragma endscop
}
