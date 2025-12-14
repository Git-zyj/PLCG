/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((25 ? 4721299142951343213 : 15612)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = (i_0 % 2 == zero) ? (max((((~var_16) >> (((arr_2 [i_0] [i_0] [i_1]) + 1543)))), (((((((arr_2 [i_0] [i_0] [i_1]) ? (arr_1 [i_0]) : var_19))) ? (min((arr_1 [i_0]), var_12)) : (arr_4 [1] [i_1])))))) : (max((((~var_16) >> (((((arr_2 [i_0] [i_0] [i_1]) + 1543)) - 31941)))), (((((((arr_2 [i_0] [i_0] [i_1]) ? (arr_1 [i_0]) : var_19))) ? (min((arr_1 [i_0]), var_12)) : (arr_4 [1] [i_1]))))));
                arr_6 [i_0] [i_0] [i_0] = ((((((arr_2 [i_0 + 3] [i_0] [i_1]) % (arr_2 [19] [i_0] [i_1])))) ? ((-(arr_2 [i_0] [i_0] [i_0]))) : (((-4721299142951343213 == ((9274357950333096103 ? (arr_1 [i_0]) : (arr_0 [i_0]))))))));
                arr_7 [i_0] [i_0] = ((!((max(-4721299142951343241, 9172386123376455513)))));
            }
        }
    }
    #pragma endscop
}
