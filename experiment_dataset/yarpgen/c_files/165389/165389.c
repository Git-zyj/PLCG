/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(16406983725976060160, var_0));
                arr_6 [i_0] [9] [i_1 - 2] = (min((max(((var_5 ? (arr_0 [i_0]) : (arr_5 [i_0]))), 33967)), (((((39794 ? 2039760347733491455 : -838114099)) == (~73))))));
            }
        }
    }
    var_17 = var_13;
    #pragma endscop
}
