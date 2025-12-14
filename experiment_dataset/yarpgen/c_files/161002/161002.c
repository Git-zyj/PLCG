/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 ^= (((max(2350511523, (max(1944455798, var_4))))) > (17405409764723313628 % 30160));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((arr_2 [i_0] [i_0]) ? (arr_2 [i_1] [i_0]) : 2350511498))) ? ((-(arr_2 [i_0] [i_1]))) : ((((arr_2 [i_1] [i_0]) > (arr_2 [i_0] [i_1]))))));
                var_13 = ((((1631816925 || ((min(0, 2350511522))))) ? (((-(((arr_1 [2] [i_1]) ? 40 : -650514166))))) : 2350511540));
            }
        }
    }
    #pragma endscop
}
