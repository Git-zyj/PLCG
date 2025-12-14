/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min(((2147483647 ? (arr_4 [i_1] [i_1]) : 7514694764505653987)), (((33 == (var_4 / 1329010769))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_10 ^= (((7 != 23) >= (arr_4 [i_0] [i_2])));
                    var_11 = (max(var_11, (((((((arr_5 [i_0] [i_0] [i_0]) ? (arr_8 [i_2] [i_1] [i_2]) : 74))) && (((-(arr_8 [i_2] [i_1] [i_2])))))))));
                    var_12 = (min(var_12, 9894504830652022841));
                }
            }
        }
    }
    var_13 *= (min((((983412337 != 255) & var_4)), var_0));
    #pragma endscop
}
