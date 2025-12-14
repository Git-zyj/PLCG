/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        var_13 -= ((((3952289850 ? 2705358843 : 0)) ^ (arr_5 [3] [i_1] [i_1])));
                        var_14 += ((var_9 == (arr_6 [4] [i_2] [4] [4])));
                    }
                    var_15 = (min(var_15, (((!(((2016 ? 2740148306477903867 : 1))))))));
                }
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    var_16 = (((((((arr_9 [i_4] [i_4]) / 2740148306477903867)))) ? (min(3952289850, -2016)) : (((-((-2059257980 ? var_3 : var_1)))))));
                    var_17 ^= var_1;
                    var_18 = (min(var_18, (((var_12 ? var_9 : ((-(arr_2 [i_0]))))))));
                    var_19 = (min(var_7, (min(var_8, ((((arr_7 [i_0]) ? var_9 : var_10)))))));
                }
                var_20 = (min(var_20, (((~(min((~var_10), (~1697769919362628403))))))));
            }
        }
    }
    var_21 *= var_12;
    #pragma endscop
}
