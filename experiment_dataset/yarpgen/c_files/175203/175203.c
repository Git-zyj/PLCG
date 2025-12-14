/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = ((((((var_1 ? var_2 : 7158434183042757960)) + (59004 * 11288309890666793656))) - ((var_7 - ((11288309890666793655 ? 255 : 11288309890666793655))))));
                    var_10 = (max((((arr_7 [i_0] [i_1] [i_2]) ? 7158434183042757960 : var_9)), (((+(((arr_4 [i_0] [i_0] [i_2]) / var_7)))))));
                }
            }
        }
    }
    var_11 -= (max((min((-2147483647 - 1), (min(var_2, var_1)))), var_7));
    #pragma endscop
}
