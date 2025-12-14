/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (+(((~var_3) ? (!8201468676044765770) : (65535 ^ var_3))));
                var_13 = (max(var_13, (((((min(3488525581, 3205124401))) ? (((max((arr_2 [6]), (arr_2 [12]))))) : (max(3397920196, (max(var_9, -6635722271617762041)))))))));
                var_14 = min((~-67), (min(var_5, var_7)));
            }
        }
    }
    #pragma endscop
}
