/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = var_9;
        var_18 ^= (max(((((max(-127, var_3))) | (((!(arr_3 [i_0])))))), (((((-(arr_2 [i_0])))) ? (!576460752303423487) : -1))));
        var_19 += (max(-8585871200092093570, -5103487558255255254));
        var_20 = (((((-((-3969228225050067348 ? -8585871200092093566 : -8061311933563629849))))) ? (max(var_10, var_7)) : (max((~576460752303423477), ((576460752303423452 ? var_3 : var_10))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] = var_2;
        arr_9 [i_1] = -576460752303423487;
        var_21 ^= (min(((((var_5 ? 111 : var_13)) < (max(-8291503717987898342, (arr_5 [i_1]))))), (((arr_7 [i_1]) >= (arr_7 [19])))));
        var_22 = (var_10 | -58);
    }
    var_23 = 8585871200092093570;
    var_24 = (((!(~var_13))) ? (var_12 + var_16) : var_2);
    #pragma endscop
}
