/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= -49;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [0] |= ((((((!(4294967295 & 8657))))) * (~10246403778003585443)));
                var_20 = (((arr_0 [i_1]) ? 8200340295705966199 : 10246403778003585443));
            }
        }
    }
    var_21 = 65535;
    #pragma endscop
}
