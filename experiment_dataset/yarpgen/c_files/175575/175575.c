/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min(((min((~var_8), ((-1997753831 ? -3 : 27675))))), (arr_4 [i_0])));
                var_12 += (((((11 ? 127 : 4294967295))) < -23937));
            }
        }
    }
    var_13 -= var_3;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_17 [i_3] [i_3] = ((((!(arr_4 [i_5])))));
                            var_14 = (min(var_14, (-1968601832 * 4294967295)));
                        }
                    }
                }
                var_15 += (arr_14 [i_3] [i_2]);
            }
        }
    }
    #pragma endscop
}
