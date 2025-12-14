/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 *= 2346038038;
                                var_21 -= -44;
                                var_22 = (min((((((((arr_5 [4] [4] [i_2]) * (arr_3 [i_0])))) ? (min(var_8, var_9)) : var_13))), ((((((5381135292905786996 > (arr_7 [i_0] [i_1]))))) - ((58 ? (arr_9 [i_0] [i_0] [i_0] [1] [i_0]) : var_13))))));
                                var_23 = (min(var_23, 2346038023));
                            }
                        }
                    }
                    var_24 = (max((((arr_9 [i_0] [i_0 + 1] [i_1] [i_1] [2]) ? (var_6 == var_10) : (min(var_3, (arr_11 [i_0] [11] [i_1] [i_0] [11]))))), (((arr_4 [i_0] [i_0 - 1]) % ((((arr_2 [i_0] [i_0] [5]) - (arr_10 [i_0] [i_1] [i_2]))))))));
                }
            }
        }
    }
    var_25 = var_2;
    var_26 = -8690042770828779136;
    var_27 = min(8753344169173443955, var_18);
    #pragma endscop
}
