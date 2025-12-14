/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((!((min((-2147483647 - 1), 4025578287))))));
    var_18 += ((-(--32764)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (((min((min(-1430269899, -32764)), ((3206502337 ? -1430269899 : -32763)))) / ((var_11 >> (7228131621714015178 - 7228131621714015176)))));
                arr_8 [i_0] [i_0] [i_0] = ((-((-(min(-6570, 1430269878))))));
                arr_9 [i_0] [i_1] [i_0] = ((((min(32764, 27788))) ? (((1 ? var_13 : var_13))) : (-32763 * 3)));
                var_20 = (!0);
            }
        }
    }
    #pragma endscop
}
