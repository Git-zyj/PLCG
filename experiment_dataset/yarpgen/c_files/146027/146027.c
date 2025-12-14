/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_15 = (((24 && 55093) % ((var_7 >> (var_8 - 79)))));
        arr_3 [i_0] = (((96 & 4156856892) || ((((arr_1 [i_0 + 2]) / (arr_1 [i_0 - 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 ^= ((((((arr_9 [i_0 + 2] [6] [i_0 + 2]) < (arr_8 [i_0 - 1] [10] [10])))) >= ((((arr_8 [i_0] [i_0 - 1] [8]) >= var_5)))));
                    arr_11 [5] [i_0] [i_1] [5] = (((-118 || -95) ^ (((-97 <= -87) << (-32 + 49)))));
                }
            }
        }
        var_17 -= (((81 / 65524) <= (((-40 + 2147483647) << (((arr_4 [i_0 + 1] [i_0 - 1]) - 1534175242))))));
        arr_12 [i_0] = (((32764 - 3534828516) + (501636176 - -79)));
    }
    var_18 = (((((260096 != 5962) << (var_0 || var_0))) * (var_7 < var_6)));
    var_19 = var_3;
    var_20 = (var_9 & var_1);
    #pragma endscop
}
