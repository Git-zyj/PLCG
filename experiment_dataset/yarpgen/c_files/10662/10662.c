/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = ((max(-15547, ((var_6 ? (arr_0 [i_0]) : 851426594)))));
                arr_6 [i_0] = (((((((var_7 ? 2147483647 : (arr_1 [i_1])))) ? ((max(-841046594, (arr_5 [i_0] [3] [i_0])))) : 9223372036854775795)) > ((((~var_5) ? (min(-841046594, 2147483644)) : (~7233))))));
                arr_7 [i_0] [i_0] = ((((-((1540341331 ? (arr_1 [i_0]) : (arr_3 [i_0]))))) >= (((arr_1 [1]) ? (!127) : (min(-10220, -1661163734))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_12 &= (((max((arr_3 [0]), 1))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((-((var_9 ? (((1 ^ (arr_10 [i_0] [i_1] [i_0] [i_1])))) : ((var_10 ? (arr_0 [i_0]) : 90))))));
                }
                var_13 += ((((!(arr_2 [10] [i_1]))) ? (arr_11 [i_0] [i_0] [i_1 - 1]) : ((min(9223372036854775807, var_3)))));
            }
        }
    }
    var_14 = (-(((!var_1) ? var_6 : (min(2147483647, -4769612377896456351)))));
    #pragma endscop
}
