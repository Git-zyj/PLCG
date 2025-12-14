/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130203
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
                arr_4 [i_1] = (min((!-256), ((-6447157926088101145 ? (min(112925708672503064, -256)) : (min(503, 3423407796260187434))))));
                arr_5 [i_0] [i_1] [i_1] = ((6733400703481187171 ? -12 : 120));
            }
        }
    }
    var_15 = (max(((((min(13027910041745824829, 12))) ? ((min(-9, var_6))) : (var_7 >> 1))), ((~((var_9 ? 29881 : var_5))))));
    var_16 = (max(3423407796260187415, (min(17553372021507110453, (((var_8 ? 1 : -957734768)))))));
    var_17 = (min(var_17, ((min(((((((-28711 ? 7699102243216495628 : -6447157926088101145))) ? (~var_13) : ((1 ? var_4 : 28378191))))), (max(10095087200917562686, 3423407796260187415)))))));
    #pragma endscop
}
