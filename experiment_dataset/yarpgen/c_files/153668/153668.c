/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (!-32766);
        arr_5 [i_0] [i_0] = (--0);
    }
    var_14 &= (((min(var_6, 18446744073709551612)) - var_3));
    var_15 = ((((min(3978328600, -95))) ? var_2 : (~-1)));
    var_16 = (((((max(18112400741859748923, 1)))) % 18446744073709551606));
    var_17 = 12;
    #pragma endscop
}
