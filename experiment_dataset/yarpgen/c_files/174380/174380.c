/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_0] = 8090323589653975162;
                    var_15 += var_12;
                    arr_8 [i_0] [i_0] [i_0] [i_2] = arr_2 [i_0] [i_2];
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_16 = ((~(((!var_9) / ((9223372036854775791 / (arr_10 [i_3])))))));
        var_17 = (max(var_17, ((((-((max(var_2, 13195))))) >= (arr_4 [i_3] [i_3] [i_3])))));
        var_18 = (max(var_18, (((~((min(var_4, 8191))))))));
    }
    var_19 = (~-507749186602597363);
    #pragma endscop
}
