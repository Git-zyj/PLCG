/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = (min((min((arr_1 [i_2]), ((1 ? 0 : (arr_6 [i_0] [i_1] [i_1]))))), (0 == var_6)));
                    var_14 = (((((max(var_10, (arr_0 [i_2]))))) ? 20692 : ((min(51318, (arr_7 [i_0]))))));
                    arr_10 [i_1] [i_1] [i_2] [i_1] = ((var_3 > (arr_4 [i_0] [i_1] [i_2])));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((((((var_8 ? 2048 : -2049))) ? (-7201237812751597433 ^ var_4) : (min(16792, -7201237812751597433)))) | -279956288);
                }
            }
        }
    }
    var_15 ^= (((((((134217727 ? -279956276 : -9))) ? 224 : -2))) ? 2147483647 : (((!(((2385502935 ? -2049 : 248)))))));
    var_16 += 1268860067;
    var_17 ^= ((((((max(var_8, 176))) ? (max(2698065835, 9223372036854775807)) : 0)) | 31108));
    #pragma endscop
}
