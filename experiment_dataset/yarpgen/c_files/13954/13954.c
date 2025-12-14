/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_3;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_0] = (((((max(var_3, (arr_4 [i_0 + 3]))))) % -2065118000));
                    arr_9 [i_0] [i_1 - 1] [i_2] = (arr_0 [i_1 - 1]);
                    var_11 = (min(var_11, ((min((18446744073709551610 >= 18115), (max((arr_7 [i_2] [i_1 - 1] [i_0 - 3]), -2815420918902436381)))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (((127 / 7116146943387796933) <= ((((((max(6904, (arr_3 [i_0] [i_0 + 2] [i_0])))) < (arr_4 [i_0])))))));
                    arr_11 [i_0] [i_1 - 1] [i_2] = (max(((((7116146943387796938 ? (arr_0 [i_2]) : 192212025)) - (arr_6 [i_0] [i_1 + 1]))), 6904));
                }
            }
        }
    }
    var_12 = (max(736247585, 13152));
    #pragma endscop
}
