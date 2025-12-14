/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_16 ? 11959833555208667581 : 18446744073709551603))) ? (max(18446744073709551615, 17443393769271205156)) : 3087770706771607121))) ? var_14 : var_13);
    var_20 = max((min((min(-5972979900418687720, 16791182388087604840)), (min(18243365941926843042, var_11)))), ((var_9 | (min(0, 9187343239835811840)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = (((((arr_1 [i_0] [0]) ? -5227675401627849485 : (!-4487691571926390219))) <= ((((!(((-9223372036854775807 - 1) && (arr_0 [12])))))))));
        var_22 = (((!17528273543756335832) ? var_7 : (min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
