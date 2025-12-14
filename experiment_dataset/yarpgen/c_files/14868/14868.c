/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!1442111198888882363);
    var_19 = var_14;
    var_20 = (min(var_1, (max(var_5, (max(8071921655405661970, 18446744073709551609))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (65535 - 8071921655405661970);
                arr_7 [i_1] = var_0;
                var_22 = (max(var_22, ((min(var_3, (max(var_15, -92)))))));
            }
        }
    }
    #pragma endscop
}
