/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((max((-4498281957239761054 || 64512), -4498281957239761067)), var_1));
    var_20 ^= ((((((53281 || var_11) ? (~var_16) : ((4498281957239761053 ? 5482432784411524711 : 8652))))) ? (max(var_3, (-3333130328606768356 + 30591))) : ((((min(0, var_3))) ? -3703889294477736833 : 65534))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = ((var_5 ? var_10 : (((arr_4 [i_0 + 1] [i_1]) ? (arr_4 [i_0] [i_0]) : ((58768 ? (arr_2 [i_1]) : var_10))))));
                var_22 = (max(var_22, (arr_1 [i_0])));
            }
        }
    }
    #pragma endscop
}
