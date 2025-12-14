/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(var_2, var_5)))) ? -var_12 : ((-((475498011 ? 34721 : 176))))));
    var_15 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 -= (max(17298, (min(((1850531284 ? (arr_2 [i_2]) : (arr_6 [i_0] [i_2] [i_0 + 1] [i_2 + 3]))), ((((arr_9 [i_0 - 2] [i_1] [i_1]) || var_11)))))));
                    arr_10 [i_2] [i_2] = ((+((max((arr_1 [i_0] [i_0]), (((var_1 && (arr_1 [i_0] [i_1])))))))));
                    arr_11 [i_0] [i_0 - 2] [i_2] [i_2 + 1] = ((-(max((arr_5 [i_0] [i_1]), ((var_1 ? -1850531298 : 10465634568096036862))))));
                }
            }
        }
    }
    #pragma endscop
}
