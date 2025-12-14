/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((0 ? 0 : 1))) && 32400));
    var_13 = (((((((((-32767 - 1) / -3669346449058826253))) * 0))) ? (((var_3 <= (var_3 <= 913038624)))) : var_2));
    var_14 = var_4;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 += (((((((4644825541041246235 ? (arr_1 [i_0]) : (arr_0 [i_0]))) <= (((arr_1 [i_0]) ^ (arr_1 [i_0])))))) < ((var_3 >> (var_1 - 116)))));
        var_16 += (((var_2 / (arr_2 [i_0]))) <= (((((((arr_1 [i_0]) & var_1)) <= (((2059027222162843122 << (18446744073709551615 - 18446744073709551614)))))))));
        arr_3 [i_0] [i_0] = ((-((((arr_0 [i_0 - 1]) <= (arr_1 [i_0 + 1]))))));
    }
    #pragma endscop
}
