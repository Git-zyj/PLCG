/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0 + 1] = (((arr_6 [i_0 - 1]) % (((((255 ? 8732193061234238734 : -7506983422003004795))) ? (((((arr_5 [i_0] [i_1] [i_1]) || (arr_1 [i_0]))))) : ((748 ? 9223372036854775807 : (arr_1 [i_0 + 1])))))));
            arr_8 [i_0] [i_0] [i_1] = (~(arr_4 [i_0] [i_1]));
            var_13 = ((-4118025667124117886 ? -7506983422003004798 : 32767));
        }
        var_14 = (((arr_1 [i_0]) == (arr_5 [i_0] [i_0] [i_0])));
    }
    var_15 = (min(var_15, (((((((~-16751) ? 9223372036854775807 : var_7))) ? -19192 : (~var_9))))));
    #pragma endscop
}
