/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_10 |= ((!((((min(162, var_5))) && (((var_7 ? var_4 : (arr_4 [i_0]))))))));
                var_11 = ((+(((~var_8) ? (((2998393288 * (arr_3 [i_0])))) : (arr_1 [i_1 - 3] [i_0])))));
            }
        }
    }
    var_12 += (min(((max((!-3998617311389349535), (min(var_1, var_0))))), var_6));
    var_13 = (max(var_13, ((((~(var_4 | var_4)))))));
    var_14 += ((~(5078906672818728186 ^ 27256)));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_15 = (!32745);
                arr_12 [i_3] = (~var_9);
            }
        }
    }
    #pragma endscop
}
