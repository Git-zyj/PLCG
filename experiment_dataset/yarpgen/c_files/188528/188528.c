/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_11 -= 29977;
            arr_6 [i_0] = (35554 ? (450067370 <= 3894437084) : ((1769728695180040042 ? (arr_3 [i_0]) : (arr_2 [i_0] [i_0]))));
        }
        arr_7 [i_0] = ((((3849639565 ? 240 : 3894437103)) | ((min(((8641189141267145340 ? (arr_3 [i_0]) : -42)), (168428288959025128 >= 3894437101))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_12 = 18446744073709551615;
                    var_13 *= (((((arr_13 [i_0] [i_0] [i_2] [i_3]) | 18139516195952124685)) * ((((!(((-(arr_4 [i_0] [i_0] [i_0]))))))))));
                }
            }
        }
    }
    var_14 = (((((min(18446744073709551612, var_1)))) ? ((((!(((314225322314854958 ? var_7 : 255))))))) : ((120 + ((0 ? 29 : 26))))));
    var_15 ^= (var_9 + (((((var_10 <= var_2) > (!3228672494))))));
    #pragma endscop
}
