/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_2] = (((((arr_2 [i_0] [i_0]) ? (1728251125 + -2506) : ((((!(-2147483647 - 1))))))) != (arr_1 [3])));
                    var_15 ^= (((((arr_6 [i_2]) / ((-97 * (arr_5 [i_0 - 2] [i_0] [i_0] [0])))))) ? ((((max(10766, 1051893430))) ? (max(1728251128, 135)) : (arr_4 [i_2 + 1] [i_1] [i_1] [i_0 + 3]))) : ((200 * (2566716160 / -1051893437))));
                    arr_8 [i_0] &= (1898729903 && 1728251132);
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_11 [i_0] [9] [9] [9] = ((2566716170 ? (((5844484545740871659 * 98) >> (((((arr_4 [2] [2] [i_3] [i_1]) ^ (arr_0 [i_1] [i_1]))) + 27286)))) : ((((-1 >= ((2147483615 ? (arr_10 [11] [i_1] [i_1] [i_0]) : -1))))))));
                    arr_12 [i_3] [i_3] [i_1] [2] &= ((+-1435772264) / ((min((arr_4 [i_0] [i_0] [i_1] [i_0 + 1]), (arr_1 [i_0 + 1])))));
                }
                arr_13 [i_0] [i_1] [i_1] = (arr_6 [i_0]);
                var_16 |= (arr_1 [i_0 + 2]);
                arr_14 [i_0] = (((((1150928209 != 1183967914) ? -106 : 7556)) != -1));
            }
        }
    }
    var_17 = ((min(((var_13 ? 120 : 8388607)), var_10)) ^ 18467);
    var_18 = var_9;
    #pragma endscop
}
