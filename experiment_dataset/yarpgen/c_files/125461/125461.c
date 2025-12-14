/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(((-73 ? 47937 : -84)), ((max(var_11, var_0))))));
    var_15 ^= -1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (((((((max((arr_1 [i_0]), (arr_0 [i_0] [13])))) ? (arr_6 [i_0] [i_0] [15] [i_2]) : (max(1, (arr_0 [i_1] [i_2])))))) * (70360154243072 * 13829)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (((0 + ((-2 ? 13829 : -1498483023)))));
                                var_18 = (max(var_18, (0 * 68)));
                                var_19 = (max(var_19, ((min(11204420021230116743, -13946)))));
                            }
                        }
                    }
                    var_20 = (min(var_20, 2088560568636367001));
                    var_21 ^= 57416;
                }
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
