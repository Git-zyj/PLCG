/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_13));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 + 3] = (((((arr_1 [i_0]) > 221)) ? ((min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 2])))) : ((59 - ((196 ? 196 : 188))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((arr_7 [i_0] [i_1] [i_0]) ? ((min((((arr_1 [i_2]) ^ 0)), (var_9 <= var_3)))) : (min((arr_6 [i_1] [i_0 - 1] [i_0 + 3]), (arr_5 [i_0 - 2]))))))));
                    arr_9 [i_0] [i_2] = (~((-(arr_5 [i_0 + 1]))));
                    arr_10 [i_2] [i_2] [i_2] = 11609050521975594590;
                }
            }
        }
        arr_11 [i_0] = (arr_4 [1] [1] [1]);
        var_20 = (max(var_20, (((-24 == ((((arr_1 [i_0 + 1]) % (arr_1 [i_0 + 3])))))))));
        var_21 = (((((arr_8 [i_0]) >= (arr_1 [i_0 - 2]))) ? (((((arr_7 [i_0] [i_0] [i_0]) ^ var_3)) * var_4)) : ((-6340691558578274177 ? 18446744073709551593 : 188))));
    }
    #pragma endscop
}
