/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_10 += ((+(((arr_0 [i_0 + 1]) ? var_7 : (arr_0 [i_0 + 1])))));
        var_11 = var_8;

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_12 = (min(var_12, var_4));
            var_13 = (min(var_13, ((((arr_3 [i_0]) ? (-6343400686015004255 / -325) : (min(var_1, (arr_2 [i_1]))))))));
            var_14 = ((((-8524877500490835631 ? 305 : -1161313690)) == ((min(-1, -325)))));
            var_15 = (min(var_15, (((~-325) >= ((18446744073709551615 ? -316 : -1711932689))))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_0 - 1] = (((arr_5 [i_2] [i_0]) ^ var_6));
            arr_9 [i_0] [i_2] = (max(var_7, ((-1 ? (!var_9) : (arr_2 [i_2])))));
            var_16 *= (arr_0 [i_2]);
        }
        arr_10 [6] = ((~(arr_1 [i_0 + 3] [i_0 - 1])));
    }
    var_17 = var_0;
    #pragma endscop
}
