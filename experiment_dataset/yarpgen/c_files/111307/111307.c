/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 = ((((2702333332 ? var_4 : ((((arr_1 [i_0]) ? var_12 : 127))))) - (((((((arr_1 [i_0 + 3]) - (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0 + 2]) : (207 < var_0))))));
        var_20 = (207 || 48);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((((-(((arr_2 [i_1]) ? var_3 : -1209490796)))) - ((((-3647605538082435575 == 208) != (((39 <= (arr_0 [i_1] [i_1 - 1])))))))));
        var_21 = ((((65535 != 2111386119089751668) <= 1)));
    }
    #pragma endscop
}
