/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!var_11) >> (((((max(2147483647, 1881793841))) || var_7)))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_1 [6]), (((!(arr_0 [i_0 + 1]))))));
        var_19 += (!162);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((((((((arr_3 [i_1]) && -1033853450009423428)) ? (arr_3 [i_1]) : (!var_8)))) < (((arr_4 [12] [22]) ? (1881793847 | var_17) : (((arr_3 [i_1]) * (arr_4 [15] [17])))))));
        var_20 = ((((((((((arr_4 [i_1] [i_1]) || (arr_3 [21]))))) != (((arr_4 [i_1] [i_1]) ? 8 : var_8)))))) != (((((4691661314785894666 ? 33845500 : -1881793851))) ? ((14217 * (arr_4 [i_1] [i_1]))) : (arr_3 [i_1]))));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_21 |= (max((((!(60386 >= 0)))), (((arr_4 [i_2 + 2] [i_2 - 1]) ^ (arr_4 [i_2 - 1] [i_2 + 2])))));
        var_22 |= (((((-1881793852 && (!119)))) >= 2147483647));
        var_23 = (-8914559758714738910 * 65530);
        var_24 = ((max((8 <= var_1), (max((arr_9 [i_2] [i_2]), 1)))));
    }
    #pragma endscop
}
