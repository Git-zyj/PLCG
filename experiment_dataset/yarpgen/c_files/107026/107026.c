/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = 43516;
        arr_2 [i_0] &= ((2643338990 ? ((((arr_1 [i_0]) || (!35167192219648)))) : -35167192219649));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 &= ((max((35167192219648 || 9223372036854775802), 1952)));
        var_20 = (max(var_20, ((((((arr_0 [i_1] [i_1]) == ((((arr_1 [i_1]) / (arr_1 [i_1])))))) || ((max((max(1, 35167192219650)), ((max(96, (arr_0 [i_1] [i_1]))))))))))));
    }
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        var_21 *= ((58569 ? (((arr_1 [i_2 + 1]) ? (arr_4 [i_2 - 2]) : (arr_1 [i_2 + 2]))) : (((2460538327 ? -35167192219649 : (arr_5 [i_2 + 1]))))));
        arr_7 [i_2] = (max(((((((arr_4 [i_2]) ? 4768628499768916669 : 1565455318))) ? (((arr_6 [i_2] [1]) ? 35167192219648 : 1085761107)) : (arr_1 [i_2]))), (((-(arr_3 [i_2]))))));
        var_22 &= ((-1326150627 >= ((((min((arr_0 [i_2] [i_2]), 1))) ? ((-67 ? (arr_6 [i_2] [10]) : (arr_4 [i_2]))) : (((-(arr_0 [i_2] [i_2]))))))));
        var_23 = (min(var_23, ((((min((min(9223372036854775802, 2862769162)), (max((arr_1 [i_2]), 35167192219648)))) > ((((max(127, -35167192219629))))))))));
    }
    var_24 = (max(var_24, var_12));
    var_25 = ((35167192219653 ? 3326217188623328765 : (((var_1 ? var_9 : 222)))));
    #pragma endscop
}
