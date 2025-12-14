/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = ((~(arr_4 [i_0] [i_1] [21])));
                    var_17 = (max(var_17, (((max(((-147890484 ? 147890483 : 44)), (min(147890481, 147890481))))))));
                    var_18 = (max(var_18, (arr_1 [i_0] [i_0])));
                    var_19 = ((-32765 ? 35053 : 3538));
                }
            }
        }
    }
    var_20 = (min(var_20, ((min(2093, (((!(!-90)))))))));
    #pragma endscop
}
