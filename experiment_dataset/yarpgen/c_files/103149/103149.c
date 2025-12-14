/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_18 &= (max((arr_0 [2]), (max(((((arr_2 [6]) ? var_16 : (arr_0 [i_1 + 1])))), 8862390140691917945))));
                var_19 = (min(var_19, (((-8862390140691917940 - -58) + (arr_5 [i_1 + 1])))));
                var_20 ^= (min((((arr_1 [i_1 + 1]) % 8862390140691917945)), (max((((arr_1 [i_1]) % -7041627359559221040)), ((((arr_5 [i_1 - 1]) ? var_7 : (arr_3 [i_0]))))))));
                var_21 += ((13314 ^ ((-32738 ? (arr_4 [8] [i_1 + 1] [i_0]) : 8165))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_2] [i_2] = (((((!90) ? 97 : ((~(arr_7 [16]))))) % -112));
                arr_13 [i_3] |= ((max((~-65), (((arr_6 [4] [i_2]) | (arr_8 [i_2] [i_2] [i_2]))))));
            }
        }
    }
    var_22 = ((((min(((var_9 ? var_17 : 8862390140691917963)), var_7))) ? var_5 : (((-(min(var_8, var_6)))))));
    #pragma endscop
}
