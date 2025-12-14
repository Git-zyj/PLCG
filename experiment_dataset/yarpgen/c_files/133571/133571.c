/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 3623;
    var_14 = (max(var_14, var_11));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((-2734943954327267101 ? 2503020731774812751 : -2734943954327267101)));
        var_15 ^= ((-var_7 / (arr_1 [8])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = (min(var_16, (arr_1 [10])));
            var_17 = (min(var_17, (((arr_0 [i_0 - 1]) ? 22219955 : (((arr_0 [i_1]) & 25606129))))));
            var_18 = (~-1233670718881130585);
        }
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_19 ^= max((min((~var_8), ((398061513906684341 - (arr_6 [i_2]))))), (22219958 ^ 0));
        var_20 += (max(115, ((((((var_11 ? 6547141889847621377 : 885613204))) && 115)))));
    }
    #pragma endscop
}
