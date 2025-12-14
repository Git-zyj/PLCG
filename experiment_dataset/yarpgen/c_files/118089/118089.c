/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 ? var_13 : ((-(min(219301389, 16519279457960134026))))));
    var_16 = (min(var_16, var_8));
    var_17 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (-1326614177 && -1326614177)));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 += ((~((var_9 ? (((~(arr_1 [12] [i_3])))) : ((~(arr_3 [i_3])))))));
                                var_20 *= (~var_14);
                                var_21 = ((-6 ? (((15897624062729729267 >> (var_10 && 26242)))) : ((((min(var_6, 10317475543995849335))) ? (var_13 > 123) : (((arr_7 [i_0] [i_1] [i_2] [i_1] [i_4]) / 2549120010979822349))))));
                            }
                        }
                    }
                    arr_11 [i_0] [i_0] = (min((((~(~-1326614170)))), ((((((arr_10 [i_0] [i_1]) ? var_0 : var_5))) | (arr_7 [i_0] [i_0] [i_2] [i_0] [i_0])))));
                }
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
