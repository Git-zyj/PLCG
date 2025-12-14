/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 3586397326;
    var_12 = -1;

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, (((-((min((((-1896332655 >= (arr_0 [i_2])))), (arr_5 [i_0 + 4] [i_0 - 1])))))))));
                        var_14 = (max(var_14, (arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 4] [8])));
                        var_15 *= (-((((((var_9 && (arr_9 [i_0] [i_1 - 1] [i_1 - 1] [8])))) >= (((arr_9 [i_0] [i_1] [i_2] [6]) * var_10))))));
                    }
                }
            }
        }
        var_16 = ((-((((arr_4 [4]) != (arr_1 [i_0 - 1]))))));
        arr_11 [i_0] = ((-(((var_2 <= (max(-6100384569314458677, (arr_7 [i_0 + 2] [4] [4] [i_0]))))))));
        var_17 = (((((~var_2) ? 255 : ((var_6 ? 2094483260 : (arr_2 [0] [i_0]))))) << (((arr_1 [6]) - 3068201483219818591))));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] = ((((((0 != var_0) ? ((((4294967295 && (arr_3 [2] [i_4] [2]))))) : 3707150069745063997))) ? (((+((((arr_6 [i_4] [i_4] [i_4] [1]) >= 13699153341379799700)))))) : (max((((0 ? (arr_14 [i_4] [i_4]) : var_1))), (~1093597999940334976)))));
        var_18 = (((((var_1 ? (var_3 != var_0) : (max(255, 10))))) ? (min(((((arr_1 [i_4]) && 252))), (max(var_6, 382254536)))) : var_7));
    }
    #pragma endscop
}
