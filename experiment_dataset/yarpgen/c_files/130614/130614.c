/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = 1981900592;
                        var_16 = ((~(max((((arr_4 [i_0] [i_0] [i_0]) ? var_11 : 2528574045)), (arr_1 [i_0])))));
                    }
                    var_17 = ((~(max(var_5, (((1 ? 1 : 181)))))));
                }
            }
        }
    }
    var_18 = 0;
    #pragma endscop
}
