/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 1] = min(-1758399784, 253136467);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = (((((10945448886105401250 ? 18881797 : 0))) ? ((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2])))) : (((arr_0 [i_0 + 3]) + (arr_0 [i_0 - 1])))));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((((max((4041830834 / -27141), (arr_1 [i_1 - 2])))) ? (min((min(27141, -7723528197906003184)), (arr_1 [i_0 + 1]))) : ((253136467 ? 3922842029 : (arr_1 [i_0 - 2])))));
                    var_22 -= (arr_2 [i_0] [i_0]);
                }
            }
        }
        var_23 -= (min(-7723528197906003181, ((((arr_7 [i_0 - 1]) ? 1 : 3749306523)))));
        arr_10 [7] = 7723528197906003174;
        arr_11 [i_0] = (18153 ? ((max(13630, 32753))) : (arr_6 [i_0] [21]));
    }
    #pragma endscop
}
