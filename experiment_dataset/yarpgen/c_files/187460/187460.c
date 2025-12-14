/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = max((max((var_5 >= var_0), 3077563109)), (-2147483647 - 1));
        arr_4 [0] = (((1 >= 8375209299902289724) >= (max(13686863501384606739, (-2147483647 - 1)))));
        arr_5 [i_0] = 9535896689307958590;
    }
    var_15 = min((((((min(2147483647, var_12))) >= ((0 ? (-2147483647 - 1) : 548682072064))))), 18446744073709551615);
    var_16 &= (((((((3 ? 4185406130 : 71))) ? (-9223372036854775807 - 1) : 15774)) >= (((var_9 ? 5 : 28)))));
    #pragma endscop
}
