/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] = ((17053 + ((1015 ? 0 : 1008))));
                    var_15 = ((-var_5 != (min((!var_4), ((var_5 ? 64521 : var_1))))));
                }
            }
        }
    }
    var_16 = (((((-(min(var_4, var_13))))) >= ((var_13 ? var_13 : (min(4503599593816064, 14754286452990169726))))));
    var_17 = 1015;
    var_18 = ((((((max(1, 18014398509481983)) / (-8540330824064029789 / 7323080082342766345)))) ? 0 : 1));
    #pragma endscop
}
