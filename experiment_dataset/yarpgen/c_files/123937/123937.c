/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_12 = ((!(((27029 || 813944079) || (27052 || 59662)))));
        var_13 -= 38484;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_14 = ((9185522157981077900 - (57 * 1)));
        arr_4 [i_1] = ((((((60 || 5) > (20938 > 813944062)))) > 1));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] &= (20939 || -1901252654);
        arr_10 [i_2] = (16449 ^ -1);
    }
    var_15 += 1442804812;
    #pragma endscop
}
