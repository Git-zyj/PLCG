/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = ((((-((-8501 ? 8500 : 8514)))) == ((-30479 ? ((28672 ? -8501 : -8520)) : (var_13 & var_10)))));
            var_18 -= (((((((max(-8512, var_7))) ? (32767 && -8493) : ((10526 ? var_6 : var_0))))) ? (((((-28673 ? 2283615918 : var_2))) ? -13976 : ((-30320 ? 355500405 : var_6)))) : ((-27235 ? (((-9623 ? 32763 : var_1))) : 4294967291))));
        }
        /* vectorizable */
        for (int i_2 = 4; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_19 = -8512;
            var_20 = ((-28693 ? var_10 : ((19081 ? 2444061518 : -1043882475))));
            var_21 = var_4;
            var_22 ^= (var_13 / 2561611134865232482);
        }
        for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_23 &= (min(1024, 9321009480510835394));
            var_24 = ((((max((((-32767 - 1) ^ var_12)), (var_9 && -32605)))) ? (-8475 / 32766) : ((32156 ? -17188 : -28673))));
        }

        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_25 = (((((((max(15, var_4))) ? ((8 ? var_7 : 32647)) : ((9321009480510835426 ? 0 : var_7))))) ? ((9125734593198716190 ? var_5 : var_1)) : ((max(28658, 32757)))));
            var_26 = (max((((9321009480510835425 | var_2) ? ((3849858359 >> (2047 - 2022))) : var_5)), (((var_11 ? 23763 : (-32767 - 1))))));
            var_27 = var_1;
        }
        var_28 = -1;
        var_29 = (((((min(28689, 32758)))) ? (((max(4, 1)))) : var_12));
    }
    var_30 = ((!((max(-32753, -28673)))));
    var_31 |= (var_1 + var_2);
    #pragma endscop
}
