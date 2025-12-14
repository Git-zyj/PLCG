/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((1301595057 != 2993372253) ? 4099360715 : var_8))) ? var_11 : ((((var_4 != 1301595059) != 2993372234)))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = 2993372238;
        arr_4 [i_0 - 1] [i_0 - 2] = (max(0, 1301595058));
        arr_5 [1] = (arr_1 [8] [i_0 - 3]);
    }
    var_17 = (!var_5);
    var_18 = (((var_8 ? 1301595058 : (min(1714480731, var_3)))) & ((max(var_15, 0))));
    var_19 = (1301595072 & var_6);
    #pragma endscop
}
