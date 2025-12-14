/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [18] [18] [i_2] [i_1 - 2] |= (arr_10 [i_2 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                            var_17 = ((((!(arr_2 [i_0]))) || ((max((((arr_1 [i_1]) % 12202152529688375278)), var_12)))));
                        }
                    }
                }
                var_18 = ((-20 && (((((var_0 ? var_4 : 227)) | ((var_8 ? 207 : var_4)))))));
                var_19 = ((!((max((((arr_4 [i_0 - 1]) ? 1 : -1)), (arr_1 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
