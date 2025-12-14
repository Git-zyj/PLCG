/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((7273346151869312972 | var_0) ? (var_7 * 1) : ((min(var_2, var_1))))), (max(var_17, (max(var_10, var_15))))));
    var_19 &= (-9223372036854775807 - 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_20 &= (-(max(2235371031625398342, -16384)));
                        var_21 = max((max(178679784, (arr_1 [1]))), ((-(arr_4 [i_2] [i_3 + 1] [i_3 + 1] [i_3 - 1]))));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_22 *= (((max(((((-16376 + 2147483647) << (var_10 - 2125471639)))), (arr_6 [i_0] [i_0] [i_0] [i_4 + 1]))) <= (((((max((arr_1 [i_1]), 128))) * 41648)))));
                        var_23 += max(-2108, -16386);
                        arr_13 [i_0] [7] [i_2] [i_2] [i_2] = ((((~269370293) + 2147483647)) >> (((min((arr_9 [i_0] [i_0] [i_0] [i_0]), (max((arr_2 [i_0] [i_0] [2]), 3041409068)))) - 22778)));
                    }
                    var_24 = (max((min((arr_7 [i_0] [i_0] [i_0] [i_0]), 2006486442)), (((((max(-24798, (arr_12 [i_0] [i_0] [i_0] [3] [i_0])))) ? (max((arr_8 [i_0] [i_0] [i_1] [i_2]), 58903)) : (max(var_4, 9223372036854775803)))))));
                }
            }
        }
    }
    #pragma endscop
}
