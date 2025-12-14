/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_15 = (min(var_15, (((((-99307656 & (arr_2 [3]))) & ((min(-16744448, (~1)))))))));
                    arr_8 [i_1] [i_1] [i_2] = 1;
                    var_16 = ((((!(((1379834566 ? (arr_1 [i_0]) : -1379834548))))) ? 1379834566 : 4));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    var_17 = (min(255, (arr_10 [i_0] [i_0 - 1] [i_1 + 1] [i_1])));
                    var_18 = (min(var_18, (26176 & -18352)));
                    var_19 = (max(var_19, (((((max((arr_1 [20]), 18446744073709551615))) ? ((-((~(arr_12 [6] [i_1] [i_3] [i_1]))))) : ((min(4, (2833113176675335612 >= 18369)))))))));
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_20 = min(((max((arr_13 [i_0 + 1] [i_1]), (arr_12 [i_0 + 1] [i_0] [i_1] [i_1 + 1])))), (((arr_12 [i_0 + 1] [i_0] [i_1] [i_1 + 1]) | (arr_1 [i_0 + 1]))));
                    var_21 += (arr_12 [i_0] [i_0] [i_4] [i_0]);

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_22 ^= ((101 ? (((((((arr_4 [i_5]) && 1379834561)))) | (3233701566 ^ 972808812))) : (arr_16 [i_0 + 1] [i_0 + 1] [i_5])));
                        var_23 = 63757;
                        var_24 = ((-(((arr_12 [i_0 - 1] [i_1] [i_1] [i_5]) ? 35184372088831 : (arr_12 [i_0 + 1] [i_0 + 1] [i_1] [i_5])))));
                    }
                    var_25 ^= ((((min(((-18360 ? 30542 : 1991)), (((arr_10 [i_0] [i_0] [i_1] [i_4]) | 41))))) ? (((972808812 % ((9948443546934077044 ? 972808812 : 1))))) : (max((((1023 ? 15450 : 224))), (min(-9223372036854775800, 578281925))))));
                }
                var_26 |= -354974664;
            }
        }
    }
    var_27 = (((max(((18446744073709551615 ? 18371 : 18446744073709551610)), (578281935 >= 0))) & 248));
    var_28 = min(1721178712, -26176);
    #pragma endscop
}
