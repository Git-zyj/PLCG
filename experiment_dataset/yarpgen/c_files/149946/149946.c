/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_7);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!var_4);

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_16 = (min(var_16, (1 || -1)));
            arr_6 [i_1] = (+-3202365585933836856);
            arr_7 [i_0] [i_0] [i_0] = ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (255 - 236))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [16] [2] = ((+(((!var_8) >> (-var_11 + 213)))));
            var_17 = (min(var_17, -5033053542565501336));
        }
    }
    var_18 = -32767;
    var_19 = var_7;
    #pragma endscop
}
