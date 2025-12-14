/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_0));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = 255954923;
            var_19 *= min(61, 78);
        }
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_20 = (arr_5 [i_2]);
        arr_7 [i_2] |= ((((17689723448786896690 ? var_15 : 255954913)) / (((2229595708 ? 480 : 0)))));
        var_21 = (max((min(1, var_6)), ((255954908 ? 1 : 1761439956))));
        var_22 *= ((~((var_12 << (arr_6 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_23 = var_5;
        var_24 ^= var_0;
        var_25 = (109 < 1);
    }
    var_26 |= ((((((max(var_9, 255954928)) | var_0))) ? (min(var_6, (~-103))) : (((var_3 & var_12) ? var_9 : (2065371587 & -2068542417)))));
    #pragma endscop
}
