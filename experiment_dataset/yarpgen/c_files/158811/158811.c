/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_19 = -4605464006051894962;
                    var_20 = (min(var_20, (((((0 ? -4605464006051894947 : 940154527319823055)) != (!var_5))))));
                    var_21 = ((((arr_0 [i_0] [i_2]) ? -649961422 : (((arr_4 [i_0] [i_1] [i_2]) + (arr_6 [i_2] [i_1]))))));
                }
                var_22 = (((((-99192381 <= -4605464006051894962) - 16439376400584947461)) | 142));
            }
        }
    }
    var_23 = var_17;
    #pragma endscop
}
