/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((69 ? 65531 : 1))) ? (--123) : -88));
                arr_7 [i_0] [i_1] = (!(((63161 ^ (((arr_1 [i_0]) ? 14788646910780245150 : 135))))));
            }
        }
    }
    var_13 = 115;
    var_14 = 249;
    var_15 = ((~(((min(76, var_1))))));
    var_16 = (min(1, ((-115 > ((4294967295 ? 1 : var_6))))));
    #pragma endscop
}
