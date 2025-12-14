/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (((((15339409215621812500 & (arr_1 [i_0] [i_0])))) || -4194304));
        var_18 += max((max((14173132924247033463 ^ 14173132924247033463), ((min(646424965, 646424965))))), ((max((18446744073709551615 || 2147483647), (arr_1 [i_0] [i_0])))));
        var_19 = (15339409215621812500 - 15949764371154224278);
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_20 = ((min(15339409215621812500, (-2147483647 - 1))) << (3502246667530391462 - 3502246667530391461));
        arr_6 [i_1] [9] = max(4025298389738368433, (((-1457748155 || ((max(2147483647, 2147483647)))))));
    }
    var_21 ^= -1330003356;
    var_22 = 536805766;
    var_23 = var_7;
    #pragma endscop
}
