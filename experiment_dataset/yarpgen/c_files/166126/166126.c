/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min((arr_0 [i_0] [i_1]), (max(((-311222156 ? (arr_3 [i_0] [i_0]) : 936048188)), (arr_3 [i_0 + 1] [i_0 - 2])))));
                arr_7 [i_0] [0] [11] = (max((min((arr_5 [i_0 + 1] [i_0 - 2]), (arr_5 [i_0 + 1] [i_0 + 1]))), ((max(-24, 0)))));
                var_13 = (min(var_13, ((((((-(max(-841738197, -2321474914878060750))))) ? (arr_4 [i_0 - 1] [i_0 - 2]) : ((~(max((arr_1 [i_0]), (arr_4 [i_0 - 1] [i_1]))))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_14 [i_3] = (((((arr_9 [i_2 - 1]) % 26)) | ((~(arr_9 [i_2 - 1])))));
                    var_14 += ((+(max((!414542161763530563), (((arr_10 [2] [i_3 + 1]) | 0))))));
                    var_15 *= ((((190 % (max(28, -24)))) > (((((119 & (arr_11 [i_3]))) - (arr_12 [20] [20]))))));
                    var_16 = min(((((max(27, (arr_13 [6] [i_3])))))), (((((min((arr_11 [i_2 - 2]), 1)))) * ((8 ^ (arr_9 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
