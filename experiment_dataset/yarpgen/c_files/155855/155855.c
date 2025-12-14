/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -8521189890812615879;
    var_16 *= (max(((-1616438637 ? var_5 : (3570102140 >= var_8))), (((((var_12 ? var_7 : 71916856549572608))) ? var_10 : var_9))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((((2037514665 ? (~-75) : (((var_4 || (arr_1 [5] [i_0]))))))) || ((min((min(var_13, (arr_0 [i_0] [i_0]))), var_6)))));
        var_17 = (((((((-1 ? -32 : 1))) > 1566502828)) ? ((((-880451339 ? 18446744073709551605 : (arr_0 [i_0] [i_0]))) - 3)) : -458018905));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
        var_18 = 8843002299356575101;
    }
    var_19 = (min(((!(8176 | 26743))), ((((max(9223372036854775794, var_0))) && (((var_14 >> (1055627037 - 1055627036))))))));
    #pragma endscop
}
