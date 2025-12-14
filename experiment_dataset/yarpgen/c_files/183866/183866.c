/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (((((1 ? 191 : var_7))) ? ((((1 ? 232 : 191)) - 1)) : (((arr_1 [i_0]) ? ((min(67, 1))) : ((var_2 ? (arr_1 [2]) : 0))))));
        arr_3 [i_0] [i_0] = ((((-1097198149422158855 ^ (min(var_5, -81)))) << (var_2 - 122)));
        arr_4 [i_0] = ((((min((~var_7), (((arr_0 [i_0] [i_0]) ? (arr_0 [12] [12]) : 1))))) ? (min(var_2, (((189 != (arr_0 [i_0] [i_0])))))) : (~var_6)));
        arr_5 [i_0 + 1] [i_0 + 1] &= (((var_3 ? ((~(arr_1 [i_0]))) : var_7)));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] = (((16 ? var_5 : (arr_8 [i_1 - 2]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    arr_15 [i_1] [6] [6] = (((max((~var_9), (max((arr_8 [i_1 - 2]), (arr_13 [i_1]))))) * (min(126, (((arr_11 [8] [8]) ? var_2 : 1))))));
                    arr_16 [i_1] [i_2] [1] [10] = (((~1) < 1));
                }
            }
        }
        arr_17 [i_1 + 1] = (~(arr_10 [i_1] [i_1 - 1] [i_1]));
        arr_18 [i_1] [i_1] = ((((min((!2106197131), ((5435245380293552771 ? 26 : 3773822943))))) ? (((((~(arr_14 [i_1] [i_1] [i_1] [i_1])))) ? (~var_9) : ((var_9 ? 1 : 6176466794067086580)))) : ((min((~1), ((1809115311 ? 1174526140 : 83)))))));
        arr_19 [i_1 + 1] = (min((((((var_8 ? 7 : (arr_7 [12])))) ? (~var_1) : var_2)), (min((((var_9 - (arr_7 [5])))), (((arr_6 [i_1 - 1]) ? var_7 : var_2))))));
    }
    var_10 = (((~87) > ((~(min(var_5, 42))))));
    var_11 = (((var_3 ? var_1 : -536936114)));
    #pragma endscop
}
