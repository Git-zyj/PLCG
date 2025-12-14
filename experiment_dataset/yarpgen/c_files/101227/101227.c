/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((127 ? -13757 : -2142236168)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 += ((-(((arr_8 [i_0 - 2] [i_0 + 3] [i_2 + 1] [i_2]) ? (arr_8 [i_0 - 1] [i_0 + 4] [i_2 + 1] [i_2]) : (arr_8 [i_0 + 4] [i_0 - 1] [i_2 - 2] [i_2])))));
                    var_16 &= (((10 > var_4) ? ((((!((max(-13773, (arr_7 [i_2 + 2] [i_2] [i_2] [i_2])))))))) : (max(((((arr_3 [i_0] [i_1]) ? var_6 : 13757))), (~var_7)))));
                    var_17 -= 32755;
                    var_18 ^= (((((-13757 ? (var_13 >= var_1) : (arr_3 [17] [i_1])))) ? (arr_1 [i_1]) : (((-8649230590575506279 ? (arr_6 [i_0] [i_1] [i_2] [i_1]) : (arr_4 [12]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                arr_15 [i_4] [i_3] = ((((((-8649230590575506261 ? -2832343763802317018 : (arr_9 [i_3] [i_4]))))) ? var_5 : ((((!(arr_14 [i_3] [i_4])))))));
                arr_16 [i_4] |= 187;
            }
        }
    }
    #pragma endscop
}
