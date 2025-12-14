/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max(83, var_17)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_19 = -220091629;
                    var_20 ^= ((-1679455558 * (-220091641 >= 1679455559)));
                    arr_8 [i_0] = (((4294967295 && 1679455557) || 1));
                    var_21 = ((16285889539924890312 ^ 3032515840) < (0 | 33));
                }
                var_22 = (max(var_22, (-1 / 16)));
            }
        }
    }
    var_23 = (max(var_23, ((var_2 > ((max(var_4, var_13)))))));
    #pragma endscop
}
