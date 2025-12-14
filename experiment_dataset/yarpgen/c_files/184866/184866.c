/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (14419070146044624988 + -2037145414);
    var_14 |= ((-(-2037145427 / 2037145414)));
    var_15 = (((min(var_11, -2037145427)) / ((~(max(var_7, 25412))))));
    var_16 = ((-((var_6 ? -var_8 : ((min(var_6, var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((arr_1 [i_0]) ? 13 : (arr_3 [i_0] [i_0])));
                var_17 += ((((min((max((arr_0 [1] [1]), (arr_0 [i_0] [i_1]))), 25412))) ? ((-(min((arr_3 [i_0] [i_1]), var_9)))) : ((32756 << ((((((0 ? (-2147483647 - 1) : -2037145416)) + 2037145433)) - 6))))));
                var_18 = ((!((((arr_2 [9] [9] [i_0 - 1]) ? (arr_2 [i_0 - 1] [i_0 - 1] [i_1]) : 3582731538)))));
                arr_5 [i_0] [i_1] [15] = (max((min(11596, (~-11297))), (((((-2037145429 ? 0 : (arr_2 [i_0] [i_1] [i_0])))) ? (arr_2 [i_1] [i_0 - 1] [i_1]) : ((var_7 ? (arr_2 [i_0] [i_0 + 1] [i_1]) : (arr_0 [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
