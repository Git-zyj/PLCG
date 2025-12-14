/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        var_12 ^= (min((max(46255, (arr_5 [i_3] [i_1] [i_0]))), (((!((((arr_0 [i_1] [i_0]) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : var_11))))))));
                        var_13 &= 18;
                        arr_10 [i_3] [i_2] = ((max(var_11, (arr_7 [i_1] [i_1] [i_2] [i_2 - 1] [i_3 + 1] [i_3]))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (!-34);
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_14 [i_4] [i_2] [i_1] [i_0] = ((((12191764187578806637 | (arr_6 [i_2] [i_2] [i_2 - 1] [i_2 - 1]))) > -1024));
                        var_14 -= (((7163110650004494100 ? ((~(arr_3 [i_0] [i_0] [i_0]))) : ((((arr_12 [i_1] [i_1] [i_1]) > (arr_0 [i_4] [i_2])))))));
                        var_15 = ((((arr_13 [i_0] [i_1] [i_0] [i_2 - 1] [i_1]) & 49698)) < (((arr_13 [i_4] [i_1] [i_1] [i_2 - 1] [i_2]) << (var_0 - 56758))));
                        var_16 = var_5;
                        var_17 -= ((((max(var_8, 11283633423705057516))) > (((~(min(49698, 1234299317)))))));
                    }
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        var_18 = (((((-(arr_9 [i_0] [i_1] [i_1] [i_2 - 1])))) | -4331628305782307571));
                        arr_19 [i_1] [i_1] = (arr_18 [i_0] [i_1] [i_2] [i_2] [i_2] [i_5]);
                    }
                    arr_20 [i_0] [i_0] [i_0] = ((((max((~var_4), (min((arr_6 [i_0] [i_0] [i_1] [i_2]), 11283633423705057516))))) ? (arr_18 [i_2] [i_1] [i_1] [i_1] [i_0] [i_0]) : var_4));
                    var_19 -= (max((((!((var_4 > (arr_2 [i_1] [i_2])))))), var_1));
                }
            }
        }
    }
    var_20 = -1487672643;
    var_21 &= max((max(var_1, (~var_7))), ((max(var_3, var_4))));
    #pragma endscop
}
