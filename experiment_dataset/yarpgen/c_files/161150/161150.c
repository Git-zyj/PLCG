/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 126;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (i_0 % 2 == 0) ? (((!(((32767 << ((((~(arr_1 [i_0]))) - 24424)))))))) : (((!(((32767 << ((((((((~(arr_1 [i_0]))) - 24424)) + 51347)) - 21))))))));
                var_16 = ((((min(31275, var_13))) < 31263));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((~(max((arr_7 [i_0 + 2] [i_0 + 2]), 14945204334190539197)))))));
                            arr_10 [i_0] [i_0] [i_2] [i_3] [i_3] = ((~(((arr_7 [i_3 - 4] [i_3 - 1]) & ((880983129 ? (arr_1 [i_0]) : (arr_4 [0] [1])))))));
                            var_18 = (min(var_18, (~31)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((31255 ? 126 : -2538476886214168944)))));
                            var_20 = (min(((~((3501539739519012418 >> (-31255 + 31277))))), (arr_4 [i_0] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_21 += -var_6;
    #pragma endscop
}
