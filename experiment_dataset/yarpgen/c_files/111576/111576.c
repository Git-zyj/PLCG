/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((-((var_0 ? var_5 : var_8)))) % ((12229623281422477155 ? 27 : 122))));
    var_13 *= (((((var_10 ? var_4 : (max(var_4, var_10))))) ? 1180550226 : (max((~-11), (max(0, -1806531657))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = ((((min(122, 127))) ? 15141395344330850122 : (max(var_9, (arr_1 [i_0 - 1])))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_15 = (max(var_15, (arr_1 [4])));
                    var_16 = ((15 | (((max((!var_2), var_0))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = (arr_6 [i_2]);
                }
                arr_11 [i_0] [i_0] = (arr_3 [i_0 + 1]);
            }
        }
    }
    #pragma endscop
}
