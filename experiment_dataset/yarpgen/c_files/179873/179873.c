/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = 2147483647;
        arr_4 [i_0] = 2147483647;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_8 [5] = var_3;
        var_11 = (((((((((arr_6 [i_1]) ? 65528 : -25694))) ? -2147483647 : (7 & var_2)))) ? (-2147483638 && 2147483647) : ((((max(-125, 37381))) ? (65528 && 65528) : (8 ^ 1)))));
        arr_9 [i_1] = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_12 = ((2147483647 & (((arr_10 [i_2]) ^ (arr_10 [i_2])))));
        arr_12 [i_2] [i_2] = ((((-65528 ? (9284745284417660320 & 18446744073709551613) : 8)) - (((+((25741 ? (arr_3 [i_2] [i_2]) : 9223372036854775807)))))));
    }
    var_13 = -var_9;
    var_14 &= (1 & var_5);
    #pragma endscop
}
