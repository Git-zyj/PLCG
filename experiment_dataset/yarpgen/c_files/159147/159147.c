/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = ((((((var_11 ? var_5 : var_11)) % 7003272671394450718)) << (((((((var_14 ? 1599656385336486219 : var_11))) ? var_7 : var_14)) - 4149382393487422126))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((var_4 & 16847087688373065388) ? var_9 : 16847087688373065396));
        arr_3 [i_0] = ((((((((arr_1 [i_0]) + (arr_1 [i_0]))) / (arr_0 [i_0])))) ? (arr_1 [i_0]) : (max(0, 1599656385336486215))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] = ((((((arr_5 [i_1]) ? 255 : var_11))) || ((min((((3136076476321245390 || (-2147483647 - 1)))), 9100486486878760306)))));
        var_19 = ((((max((((1599656385336486216 || (arr_5 [i_1])))), 2107377363))) == (((arr_4 [i_1]) ? var_6 : (arr_4 [i_1])))));
    }
    var_20 = 226;
    var_21 = (0 ? var_7 : ((((!(!var_14))))));
    #pragma endscop
}
