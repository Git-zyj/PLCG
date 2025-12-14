/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_3 [14] [i_0] = var_12;
        arr_4 [22] = ((!(((-32 % (min(var_7, -587476591)))))));
        arr_5 [i_0] [i_0] = (max(21080, 251));
        arr_6 [i_0] = (~var_10);
        arr_7 [i_0] [i_0] = ((18446744073709551612 ? 8374447169269766742 : -24398));
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        arr_12 [i_1] [i_1] = (max(27711, ((((((min((-32767 - 1), 9878))) + 2147483647)) >> (12917 - 12898)))));
        arr_13 [i_1] [i_1] = ((var_11 ? (max((~var_13), var_10)) : ((min(0, (((4294967291 ? -18689 : 9023))))))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_16 [i_2] = (max(-12900, (min(var_7, 16))));
        arr_17 [i_2] [i_2] = ((!(((127 ? ((max(var_5, -1))) : -216172782113783808)))));

        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            arr_20 [i_3] [i_3] = var_12;
            arr_21 [i_3] [i_3] = ((-8790452028481407927 ? (((!((min(var_13, var_6)))))) : (-var_13 < 10385841554060023875)));
            arr_22 [i_2] [i_3] = (((var_0 | 32743) ? ((max(var_2, var_2))) : (min(((min(var_3, 1340612454))), (min(3, 12043589225660547994))))));
            arr_23 [i_3] [i_3] = -16955;
        }
        arr_24 [i_2 + 1] = ((!(((min(var_11, 3800091423))))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_27 [7] = 32768;
        arr_28 [i_4] [i_4] = ((~(max(2769210285220977317, (!-1340517573)))));
        arr_29 [i_4] = (((((((min(7183416164286088563, -28402))) ? 0 : -25))) ? 1087682929 : ((((max((-32767 - 1), 0)))))));
    }
    var_14 = (!var_5);
    var_15 = (!((min(var_3, (max(1802179248698669301, -12900))))));
    #pragma endscop
}
