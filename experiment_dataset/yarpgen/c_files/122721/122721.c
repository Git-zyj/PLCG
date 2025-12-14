/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_17 |= min(((min((3575319930 && 0), 17))), (min((!36155), (min(var_7, 13720400836929933087)))));
                var_18 = ((((~((1853027167 >> (719647365 - 719647336))))) | (((var_13 ? ((4239607317 ? -1161679368 : var_13)) : (~-1161679368))))));

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    var_19 = ((((3575319925 - (arr_3 [i_0] [i_2])))));
                    arr_6 [i_1] = var_4;
                }
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
