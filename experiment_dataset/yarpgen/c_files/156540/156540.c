/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(var_14, (min(18446744073709551615, var_2)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (arr_2 [i_0]);
        var_19 -= (-119 - 123);
        var_20 = ((!(arr_2 [3])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = ((((var_9 && ((max(var_3, var_13))))) ? ((((((arr_1 [i_1]) ? 1 : (arr_2 [i_1])))) | (arr_5 [i_1]))) : ((((!((min(836595827, (arr_2 [7]))))))))));
        var_21 = ((56978 ? 7286 : 899244255596001889));
    }
    #pragma endscop
}
