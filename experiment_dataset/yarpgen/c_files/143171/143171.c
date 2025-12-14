/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_11;
    var_13 = (min(var_13, ((var_1 ? (!1771851006) : var_11))));
    var_14 = ((((225 ? 8 : 2114951609))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0]) : (((arr_0 [i_0]) >> (2147483648 - 2147483608)))));
        arr_3 [i_0] = ((((max((((!(arr_0 [i_0])))), ((-(arr_1 [i_0])))))) + 1771851022));
        arr_4 [i_0] = min(((3221225472 ? 1771851018 : 213816379)), ((1 ? 2180015676 : 79)));
    }
    #pragma endscop
}
