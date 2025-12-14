/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (18122566681547533829 == ((max(((1159392399 ? 1 : var_8)), 81373866))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_13 = ((14 ? 12 : -31));
                    var_14 += var_2;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_15 = ((4927 ? (arr_2 [i_0]) : ((96 ? -81373842 : (arr_8 [i_0] [i_1])))));
                    var_16 *= var_11;
                }
                arr_12 [i_0] [i_0] = -81373869;
            }
        }
    }
    var_17 = ((max(7158793529087981772, -22352)));
    #pragma endscop
}
