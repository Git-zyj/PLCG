/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((~((min(var_9, var_3)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (arr_1 [i_0] [17]);

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] &= (((arr_1 [i_1 - 1] [i_1 - 1]) ? ((((max(var_1, var_6)) > (((((arr_4 [i_0]) < var_13))))))) : (((((((2452466554025531812 <= (arr_2 [i_1]))))) > var_14)))));
            arr_6 [i_0] [i_1] [10] = (-16550 || 13256);
            arr_7 [i_1] [i_1] = (max((3 && 0), ((4051650111 * (((57729 ? 57 : 2147483647)))))));
        }
        var_17 += (arr_0 [i_0]);
    }
    var_18 = ((((((557581223 & var_1) ? (var_4 | 255) : var_4))) ? (!var_7) : ((~((min(1, var_9)))))));
    var_19 = ((var_6 && ((((((min(var_2, var_2)) + 2147483647)) >> (var_12 - 248))))));
    #pragma endscop
}
