/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 15967109766001983595;

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_10 += (min((-32767 - 1), 760179370821506832));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_11 *= (!var_1);
                        var_12 = (min(var_12, ((((min(var_0, -2021265285)) == (((!(arr_7 [i_0 - 1] [i_0 - 2])))))))));
                        var_13 = (max(var_13, (min(var_9, ((((min(var_3, (arr_8 [i_0] [i_0] [0])))) - (-4410519556512626735 + 15)))))));
                        var_14 = (var_8 - var_5);
                    }
                }
            }
        }
    }
    var_15 = var_4;

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_16 = (!(((-((-(arr_13 [i_4])))))));
        var_17 = ((!(arr_10 [i_4] [i_4] [i_4] [i_4])));
        var_18 = (min(var_18, 0));
        arr_16 [5] [i_4] = (arr_4 [i_4] [4] [i_4]);
        var_19 = (min(((max((arr_15 [i_4]), (arr_15 [i_4])))), ((18014398509481983 - (arr_15 [i_4])))));
    }
    #pragma endscop
}
