/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (min(((max((-2147483647 - 1), 1))), (((((var_4 ? var_9 : var_15))) ? ((var_1 ? var_1 : 2147483647)) : (((56859 << (2147483647 - 2147483639))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (max(var_17, ((!(arr_2 [i_0] [i_0])))));
        var_18 |= (-1672660997 / 65535);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_8 [i_0] [14] [i_1] [22] = 6432651677901998265;
                var_19 = var_7;
            }
            arr_9 [i_0] [i_1] = arr_7 [i_1] [i_0] [i_0];
            var_20 = (min(var_20, ((((arr_0 [i_0]) - (arr_0 [i_1]))))));
        }
    }
    var_21 = var_13;
    #pragma endscop
}
