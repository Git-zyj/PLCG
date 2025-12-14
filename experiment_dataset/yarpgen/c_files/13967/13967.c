/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = 561658699276082107;

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0] = (i_0 % 2 == 0) ? ((((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 6762079648166574373)))) & ((5 ? (arr_1 [i_0]) : var_4))))) : ((((((arr_1 [i_0]) >> (((((arr_1 [i_0]) - 6762079648166574373)) + 2383736794343637264)))) & ((5 ? (arr_1 [i_0]) : var_4)))));
            var_12 = ((((((148 > ((561658699276082088 ? 3072798720 : -50)))))) | ((((min(var_2, (arr_5 [i_0] [i_0] [i_0])))) ? (~-561658699276082107) : (-561658699276082107 / var_7)))));
            var_13 = (var_10 ? ((((!((-561658699276082137 == (arr_4 [i_1]))))))) : -561658699276082111);
        }
        var_14 = ((!(((~(arr_5 [i_0] [i_0] [i_0]))))));
        var_15 = (max(var_15, (arr_1 [4])));
        var_16 -= 38;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_17 = (max(var_17, -1854045224));
        arr_11 [i_2] [i_2] = (((((1 ? 38 : (arr_3 [i_2] [i_2] [i_2])))) <= 9040841629073648308));
        var_18 = -561658699276082137;
        var_19 = (12262824403757230989 < ((((min(var_5, 0))) ? (-561658699276082088 && var_6) : 224)));
    }
    var_20 -= var_1;
    #pragma endscop
}
