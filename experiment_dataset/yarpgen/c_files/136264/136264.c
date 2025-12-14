/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_6));
    var_11 = 17244831382089769435;
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = max(1201912691619782180, (((-(arr_5 [i_0] [i_2] [i_2])))));
                    var_13 = var_3;
                    var_14 = (((((~(((var_1 == (arr_1 [i_2]))))))) >= ((31 ? 17244831382089769426 : ((var_4 ^ (arr_2 [i_0])))))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (((((15646400321790227220 ? -2132950904 : -59))) ? -var_5 : ((~(arr_2 [i_3 + 2])))));
                        var_15 = (arr_10 [i_2]);
                        var_16 += (max((((var_9 > (arr_2 [i_3 + 2])))), (((arr_2 [i_3 + 1]) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 + 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
