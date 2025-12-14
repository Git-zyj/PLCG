/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = max(((-1999802072855733302 ? ((1999802072855733302 ? 33546240 : 106)) : 18446744073676005356)), ((min((((122 ? 9 : -121))), (min(2483888106, 114))))));
                arr_6 [13] = ((-(((!7) << (((2775090558 / 65535) - 42317))))));
            }
        }
    }
    var_16 = 1721986860;
    #pragma endscop
}
