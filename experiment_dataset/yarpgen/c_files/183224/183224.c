/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (!15)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_2] [8] [i_2] [0] = (~134);
                            var_11 = ((((min((~5792125140621632821), (arr_5 [i_0] [i_0])))) ? (!94) : 48));
                        }
                    }
                }
            }
        }
    }
    var_12 *= ((-((-((-51 ? 3765265890 : 529701388))))));
    #pragma endscop
}
