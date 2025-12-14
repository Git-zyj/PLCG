/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((var_6 * (max((min(11397785553799504313, 3705884373002281770)), ((-65 ? 7048958519910047302 : 7048958519910047302))))));
    var_13 = 5637;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        arr_3 [i_0] = ((((((-5650 > ((5637 ? 2322670574 : 133)))))) < (min((min((arr_1 [i_0]), var_5)), (max((arr_0 [i_0]), var_4))))));
    }
    #pragma endscop
}
