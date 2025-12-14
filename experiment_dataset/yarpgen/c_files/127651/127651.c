/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (((!10654613474120182590) ? ((10654613474120182582 ? 0 : (max((arr_0 [17] [i_0]), 10654613474120182595)))) : var_4));
        arr_3 [i_0] [i_0] = ((((!(((1 ? -23000 : 7792130599589369033))))) ? (((max((arr_1 [i_0]), (arr_1 [i_0]))))) : ((23 ? 10654613474120182588 : 0))));
        var_12 = (arr_1 [i_0]);
        var_13 = (((((7792130599589369014 ? ((~(arr_1 [i_0]))) : 32767))) ? (((max(96, (arr_1 [i_0]))))) : ((((min((arr_1 [i_0]), 8388604))) + (max(-1326505722041829076, var_8))))));
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (arr_0 [i_1] [i_1]);
        arr_7 [i_1] = ((((-192 ? 7792130599589369022 : 0)) - (min(((((arr_5 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : var_11))), (min(10654613474120182593, (arr_0 [i_1] [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_14 |= (min((max((((arr_0 [i_2] [i_2]) ? -97 : 1)), ((max((arr_9 [i_2] [0]), (arr_0 [i_2] [5])))))), ((max((arr_0 [i_2] [i_2]), (arr_11 [i_2]))))));
        var_15 = (max(-118, 7792130599589369045));
        var_16 = (max(-1326505722041829075, (arr_0 [i_2] [i_2])));
    }
    #pragma endscop
}
