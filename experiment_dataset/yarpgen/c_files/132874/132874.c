/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((((var_11 && var_0) > ((min(var_1, var_7)))))), (min(var_15, 1656362206059536949))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = var_11;
                var_20 = (max(var_20, ((((((((((arr_2 [i_1 + 4] [i_1 + 1] [i_0]) ? (arr_4 [4] [i_1]) : (arr_0 [i_0])))) ? -var_8 : (((((arr_3 [i_0] [7]) && (arr_3 [i_0] [5])))))))) ? ((((arr_3 [i_0] [i_1 + 1]) != (arr_2 [i_1] [i_1] [i_1])))) : (-14527 && 2458966857652852207))))));
            }
        }
    }
    var_21 = (((min((min(2458966857652852200, 2458966857652852207)), (~15987777216056699409))) == (((var_16 * var_12) % (var_11 ^ var_12)))));
    #pragma endscop
}
