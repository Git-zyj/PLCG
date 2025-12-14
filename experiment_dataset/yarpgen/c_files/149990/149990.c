/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -1;
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] [i_0] = 0;
        arr_6 [i_0] [i_0] = 18446744073709551615;
        var_17 = ((((((-290515592 + 2147483647) << (18446744073709551609 - 18446744073709551609)))) / 14540762013632060112));
    }
    var_18 *= (max((max((15919279379393151227 ^ -2021866955), var_9)), var_4));
    #pragma endscop
}
