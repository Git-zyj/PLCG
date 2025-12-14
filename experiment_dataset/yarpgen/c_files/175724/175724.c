/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, (((~(arr_0 [i_2]))))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] = ((((-1828349822 ? ((var_0 ^ (arr_9 [0] [i_1] [i_1] [i_1 + 2]))) : ((~(arr_10 [i_1] [i_1] [i_1] [i_0]))))) ^ (((((-10464 ? var_0 : (arr_1 [1])))) ? (14265 == -10491) : (min(var_3, 940696352))))));
                            var_16 = (((10485 != 16642401544181454414) >> (((((var_13 ? (arr_10 [5] [i_1] [i_2] [i_3]) : (arr_1 [i_1]))) == ((var_1 ? (arr_2 [i_1 + 1] [i_1 + 1]) : (arr_8 [i_1]))))))));
                        }
                    }
                }
                var_17 = ((((arr_1 [i_0 + 1]) | (arr_10 [i_0 - 2] [i_1] [i_1 + 2] [i_1 + 1]))));
                var_18 = var_4;
            }
        }
    }
    var_19 = (((203 / -872657793) ? ((((var_12 ? var_0 : var_5)))) : (((((var_4 ? var_6 : var_5))) & ((var_2 ? var_11 : 3883861887662169636))))));
    #pragma endscop
}
