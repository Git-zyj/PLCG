/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((((((-14 ? var_6 : 15088622966463339302))) ? (!var_2) : (1875769169 != var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = ((var_4 && (var_2 >= 814305707)));
                var_12 = (max(209, 524287));
                arr_6 [i_0] = 46;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_4] = -770787545;
                    var_13 = max(var_0, -814305707);
                    var_14 = (max(var_14, ((!(!-30428)))));
                    arr_14 [i_2] [i_3] [i_2] = ((!((min((!var_4), var_4)))));
                    var_15 = var_3;
                }
            }
        }
    }
    #pragma endscop
}
