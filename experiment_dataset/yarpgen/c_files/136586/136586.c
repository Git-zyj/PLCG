/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((16 ? 14693524884643383851 : 2305843009209499648))));
    var_15 = 16140901064500051968;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = ((-(min((min(var_13, (arr_2 [i_0] [i_0]))), ((min(var_6, 520475528)))))));
                    arr_9 [i_2] [i_2] [i_2] [i_0] &= (max((max(34732, 16140901064500051968), (arr_5 [i_0] [i_2] [i_2]))));
                }
            }
        }
        arr_10 [i_0] = min((~65535), ((81 ? (arr_2 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))));
        arr_11 [i_0] = ((~(min((max(3897595557, 76398170)), (arr_2 [i_0] [i_0])))));
        arr_12 [i_0] = var_4;
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (((~(max((arr_6 [i_3 + 2] [i_3 + 1]), var_4)))))));
        arr_17 [i_3] = ((((((arr_4 [i_3] [4] [i_3 - 1]) ? var_9 : (arr_4 [i_3] [i_3 - 1] [i_3])))) ? (var_7 < 2305843009209499665) : ((-(arr_4 [i_3] [i_3 - 1] [i_3 + 2])))));
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_18 = ((((var_11 ? (max((arr_13 [1] [i_4 + 1]), (arr_14 [10]))) : (~-1963125123))) == ((-(min(65535, (arr_13 [6] [i_4])))))));
        var_19 = ((-(min(2305843009209499643, 14693524884643383851))));
        var_20 = (max(((max((max((arr_18 [i_4 - 1]), var_7)), 1920))), (arr_19 [i_4])));
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (max(2305843009209499647, (arr_16 [i_5 + 2] [4])))));
        arr_22 [i_5] = ((-((-(max(var_1, (arr_1 [i_5] [i_5])))))));
    }
    #pragma endscop
}
