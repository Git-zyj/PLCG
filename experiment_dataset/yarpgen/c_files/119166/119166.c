/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((((~var_11) ? ((min(var_16, -22689))) : (min(var_10, var_0))))) ? (((var_11 - 1) + ((min(var_6, var_2))))) : var_5);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (-1876862784 | 859074898369446373);
        arr_3 [i_0] = (min(24799, 17587669175340105242));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] = 1;
            var_19 = (min(var_19, ((((((~(((arr_4 [i_0]) ^ (arr_4 [i_1])))))) ? ((5739685983799737896 % (((min(1, 13)))))) : (arr_6 [i_0] [i_1] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_20 = (min(((min((arr_2 [i_0]), ((-(arr_5 [5] [i_2])))))), (arr_6 [i_0] [i_0] [i_2])));
            var_21 = ((((-19005 <= (arr_0 [i_0])))) != ((-(arr_5 [i_0] [i_2]))));
        }
    }
    var_22 = 2298036282;
    #pragma endscop
}
