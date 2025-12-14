/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (--102);
    var_14 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (!3172785961);
        var_15 = 13933438083749067984;
        arr_5 [1] = -20712;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_16 = ((1 ? (((-8264985772370178586 ? 31828 : -2762465063937293155))) : -517908448));
        arr_9 [4] [i_1] = 4264881908;
        var_17 = 172918791;
        arr_10 [0] = (((--1) ? (((-6934749147553534549 ? (!-13443) : 20711))) : (+-4789204040737331479)));
    }
    var_18 = ((((((!-9223372036854775796) ? -172918792 : var_9))) ? -15202 : (~4240662533)));
    var_19 = var_5;
    #pragma endscop
}
