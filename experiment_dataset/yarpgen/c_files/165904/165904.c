/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = var_16;
                    var_20 = (max(var_20, (max((min(((16801558987181367869 ? 16801558987181367869 : 0)), ((7756183305983099952 ? 7756183305983099949 : (arr_2 [14]))))), ((((max(var_8, var_14))) ? 10690560767726451664 : ((var_12 ? var_13 : 14107996142474950184))))))));
                }
            }
        }
    }
    var_21 = (var_12 ? var_6 : ((min(2, var_4))));
    #pragma endscop
}
