/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-(var_10 % var_5))) == (min(var_0, (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> 0)))));
    var_18 &= (((((var_11 ? var_7 : (min(825252740, 278809700))))) ^ (min(var_14, (~var_10)))));
    var_19 = ((((max(var_8, (var_8 - var_12)))) || ((((var_9 || var_7) ? var_12 : var_3)))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_20 = ((+((((arr_0 [i_0 - 2]) && (arr_0 [i_0 + 1]))))));
        var_21 = ((1 == ((6906690399129167970 ? 19017 : 10086))));
    }
    var_22 = min((var_8 * -var_8), var_5);
    #pragma endscop
}
