/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_10 = (min((~var_2), (12660339296047787148 == 17179865088)));
                    var_11 = (max(var_11, ((min((!-17179865094), (max((arr_4 [i_0] [i_0] [i_1 - 1]), var_8)))))));
                    var_12 = (((((+(((arr_6 [i_0] [i_1] [i_2]) ? 1 : 0))))) > (max((max(1, var_0)), (1 || 9845666120894468930)))));
                }
            }
        }
    }
    var_13 = 17179865088;
    var_14 = -4007227160664152016;

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_15 = ((((((4221628342 ? 0 : 1)))) ? (arr_1 [i_3]) : (((~(max(4294967295, var_9)))))));
        var_16 = ((((min(((((arr_7 [i_3] [1] [i_3] [i_3]) ? (arr_7 [i_3] [i_3] [i_3] [i_3]) : var_8))), (min((arr_5 [i_3] [i_3] [i_3]), var_7))))) ? (((1 ? var_5 : (min((arr_8 [i_3] [i_3]), 122880))))) : (((arr_10 [i_3]) >> (((14109441719323427614 >> 1) - 7054720859661713758))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_17 = (min(((((arr_2 [i_4]) | (arr_13 [i_4] [i_4])))), (min(((1 ? 73338954 : 1)), (1 >= var_0)))));
        arr_14 [i_4] = ((((((arr_7 [i_4] [i_4] [i_4] [i_4]) ? 1 : ((1944581566519597702 ? 17179865088 : var_4))))) ? (max((arr_5 [i_4] [i_4] [i_4]), (arr_12 [i_4]))) : (((arr_10 [i_4]) ? 262143 : ((1 ? 1 : 262143))))));
        arr_15 [i_4] = 14020873157965091815;
    }
    var_18 = (max((~3639242609), -5232512390098476257));
    #pragma endscop
}
