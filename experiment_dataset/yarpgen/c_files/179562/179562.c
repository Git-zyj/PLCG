/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((~(3561355277 < 3721566871552215646))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_19 = ((!(~-5)));
        arr_4 [i_0] [i_0] = ((!((((((3561355257 ? 18446744073709551611 : (-32767 - 1)))) ? 65535 : (!7789533555208373900))))));
        var_20 += ((-((9223372036854775807 ? -7789533555208373894 : 1))));
        var_21 = -18446744073709551596;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (~23);
        var_22 = (!122);
    }
    var_23 = ((-(+-0)));
    #pragma endscop
}
