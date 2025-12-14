/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = ((-69 ? -1314442991 : -90));
        arr_4 [i_0] = ((((((-7925906706523694797 == var_9) + (((arr_0 [i_0]) | (arr_3 [i_0])))))) ? (((((var_12 / (arr_0 [i_0])))) ? var_4 : 9113025476766127132)) : ((((arr_1 [i_0]) / (arr_2 [i_0]))))));
    }
    var_15 = ((((((-1751890576 ? 9223372036854775807 : -305439872897708092)) >= ((-5777200341062095639 ? -7040725312915225085 : -3354917910943044263)))) ? 9223372036854775807 : ((((4738 && (((18446744073709551615 ? -120 : 9223372036854775807)))))))));
    var_16 &= ((((((20 | 971542896) ? ((var_4 ? -3992749816845173274 : var_3)) : var_8))) || ((((18446744073709551615 + var_8) + 9223372036854775796)))));
    #pragma endscop
}
