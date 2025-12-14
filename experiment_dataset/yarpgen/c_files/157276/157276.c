/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] = (min((arr_0 [i_0 - 2] [i_0 - 1]), (min(var_9, ((152 ? var_7 : (arr_0 [i_0 - 4] [20])))))));
        var_13 = (arr_0 [i_0 - 1] [i_0 - 4]);
        arr_3 [2] = ((!((((6130566774736548217 ? (arr_1 [i_0]) : 7501702547887135748))))));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 = ((-((min(215, (!28005))))));
        var_15 *= (!-28027);
        var_16 = (min(var_16, (((-(~52782))))));
    }
    var_17 -= (-16 - (~-3803046701));
    #pragma endscop
}
