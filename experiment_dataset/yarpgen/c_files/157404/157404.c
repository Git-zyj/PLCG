/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_8 * var_3) ? var_5 : (var_9 == 18))) ^ var_10);
    var_12 = ((~(((((var_2 ? var_3 : 4294967293))) ? 1 : ((33 ? 18446744073709551609 : 1))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_13 = (max(var_13, (((var_2 * ((((!(arr_0 [i_0 + 2]))))))))));
        var_14 = (min((arr_0 [i_0]), (((!(((-15699 ? 13 : 26))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = ((((((((arr_5 [6]) && 45)) ? (arr_5 [12]) : ((-9223372036854775805 ? 1 : 1))))) ? (((255 >= (max(var_2, var_3))))) : (((!(1 && 1))))));
        arr_8 [i_1] [i_1] = (arr_3 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_13 [i_2] = (max((((!(-2147483647 - 1)))), (max(3, (arr_12 [i_2])))));
        var_15 = (min(var_15, (((!(((((arr_11 [i_2]) ? var_4 : var_5)))))))));
    }
    var_16 = var_10;
    #pragma endscop
}
