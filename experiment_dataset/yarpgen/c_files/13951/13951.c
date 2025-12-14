/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (+((679318750880743804 ? (var_6 != var_13) : 9368073950061097828)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (min((arr_6 [i_1] [i_2]), (min((arr_2 [i_0] [i_0]), ((679318750880743784 >> (5560659421469264326 - 5560659421469264297)))))));

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_16 = (max(var_16, ((max((arr_12 [i_0] [i_1] [i_1] [i_1] [i_1]), (arr_12 [i_0] [i_0] [i_1] [i_2] [i_3]))))));
                        var_17 = (max(var_17, ((((!2533670703) ? (max(((9368073950061097835 ? 0 : (arr_11 [i_0] [i_0] [i_1] [i_2] [i_1] [i_1]))), (((-9051985713538354003 || (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : ((max(1761296607, 16))))))));
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_2] [i_2] = (((((-(var_0 | -9051985713538354020)))) ? (max(3714192781, 679318750880743784)) : ((min(((~(arr_4 [i_0] [i_1]))), (arr_7 [i_1] [i_2] [i_2]))))));
                        arr_18 [i_0] [i_2] [i_0] [i_4 - 2] = (((((min((arr_15 [i_4 + 1] [i_4 + 1] [i_4 - 2]), (arr_15 [i_4 + 1] [i_4 - 1] [i_4 - 1]))))) & -679318750880743804));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_2] = (arr_3 [i_0] [i_0]);
                    }
                    var_18 = ((~(max((arr_12 [i_0] [i_0] [i_1] [i_0] [i_2]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
