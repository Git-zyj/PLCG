/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1174588096;
    var_16 = ((var_2 ? (((var_1 + 2147483647) << (var_11 < var_5))) : (27702 <= var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 = var_0;
                            var_18 = (((max((((var_7 ? var_5 : var_7))), (arr_10 [i_0] [12] [i_2] [i_2] [i_2] [i_3]))) > (!1174588096)));
                            var_19 = (arr_6 [i_1] [i_2]);
                        }
                    }
                }
                var_20 = ((!((((-1839826551132978932 ? 12519929399450361512 : (arr_8 [2] [4] [4] [4] [i_1]))) > var_7))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_21 = (arr_1 [i_0] [i_0]);
                            arr_16 [i_5] [10] [i_4] [i_4] [i_4] [i_4] = (((((~(min(var_14, var_4))))) ? var_4 : (min((min(var_13, var_8)), -var_5))));
                            arr_17 [i_0] [i_5] [i_0] [19] = -1839826551132978932;
                        }
                    }
                }
            }
        }
    }
    var_22 = var_0;
    var_23 = (!var_13);
    #pragma endscop
}
