/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((-(arr_2 [i_1 - 1] [i_1 - 2]))));
                var_19 = (((-49 && 0) > (var_3 * 0)));
                var_20 = min(-1162711976861783522, ((((min((arr_1 [1] [i_1]), (arr_3 [i_0] [i_1])))) ? (max((arr_3 [i_0] [i_1 + 1]), (arr_2 [i_0] [19]))) : var_13)));
                var_21 = (min((((arr_1 [i_1 - 2] [i_1 - 2]) >> (((arr_2 [i_0] [i_1]) ? 49 : (arr_1 [i_0] [i_1 - 1]))))), ((1297714790850671304 ? 0 : 1162711976861783522))));
            }
        }
    }
    var_22 = ((((((-(-32767 - 1))))) && var_14));
    #pragma endscop
}
