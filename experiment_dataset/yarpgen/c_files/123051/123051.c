/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(31446, 148));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (-10 * 118);
            arr_8 [i_0] = (((((arr_0 [i_0] [i_1]) % (arr_5 [i_0] [i_1] [i_1]))) >> (108 - 73)));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_21 = ((0 * (arr_4 [i_0] [i_0] [i_2 + 2])));
            var_22 = (max(var_22, (arr_9 [i_2 - 1] [i_2 + 2] [i_2 + 2])));
            var_23 ^= (min(130, 8191));
        }
        var_24 = (((((arr_9 [i_0] [i_0] [i_0]) ? var_9 : (arr_9 [i_0] [i_0] [i_0]))) + (((((((arr_2 [i_0]) > 7609431517088592659))) == (((7609431517088592659 && (arr_0 [i_0] [14])))))))));
        var_25 = ((123 << (7609431517088592673 || 7609431517088592659)));
    }
    var_26 = (((!(((var_19 ? 102 : 0))))));
    var_27 = (max(var_27, (var_6 != 123)));
    #pragma endscop
}
