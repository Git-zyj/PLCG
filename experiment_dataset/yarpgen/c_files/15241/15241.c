/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] = ((var_12 / ((var_11 ? ((var_11 ? var_10 : var_2)) : ((var_11 ? 94 : 7456057102362229740))))));
                                arr_14 [i_0] [i_0 - 2] [i_0] [i_0] = (((max(var_5, (((3910200729 ? 3910200720 : 128))))) / (((((5881418165441435386 ? 384766542 : 384766539)) % (((arr_3 [i_0]) ? 166 : var_9)))))));
                            }
                        }
                    }
                    arr_15 [i_0] = ((((arr_5 [3] [i_2 + 1] [i_0]) || var_6)) ? (((((max(0, var_2))) / (~960)))) : ((((((arr_8 [i_0] [i_0] [i_0] [0] [4]) ? (arr_7 [i_0] [i_1] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))) ? (max((arr_2 [i_2] [i_0]), (arr_7 [i_0] [i_0] [i_0]))) : ((7637012111589640633 ? 255 : 8398736871658884444)))));
                }
            }
        }
    }
    var_14 -= ((8196129050150482618 ? -674268950 : 3180660993745843748));
    var_15 = ((var_8 ? (((((max(var_6, 3114735791))) ? (max(127, var_4)) : var_2))) : (((((var_4 ? -921860937 : var_10))) ? (((var_2 ? var_12 : 2713668768))) : ((var_0 ? var_7 : -7432))))));
    var_16 = (max(var_16, var_5));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            {
                var_17 = (((((((((arr_7 [i_5 - 1] [i_6] [4]) ? var_6 : var_10))) ? (max((arr_17 [i_5]), var_6)) : ((3 ? (arr_2 [i_5] [2]) : var_6))))) ? (((((var_4 ? 0 : -2147483632))) ? (arr_10 [i_5 + 1] [i_6] [i_6 - 1] [i_5]) : (arr_6 [i_5] [i_5] [i_5] [i_5]))) : (arr_16 [i_5])));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((-(arr_16 [2]))))));
                            var_19 = (max((((arr_18 [i_5 + 1] [i_5]) ? 232 : (arr_18 [i_6 - 2] [i_7 - 1]))), ((520147298 ? 1668568941 : -362417307))));
                        }
                    }
                }
                arr_29 [i_5] [i_5] [i_6] = 0;
                arr_30 [i_5] [i_5] [i_6] = ((-11900973330947668165 ? ((((arr_21 [i_5] [i_5] [i_6]) << (((arr_28 [i_5 - 1] [i_6 - 2]) - 743263775438257246))))) : (((max(1, 18318322998284344177)) + ((((-2147483647 - 1) ? (arr_7 [i_5] [i_6] [0]) : var_4)))))));
                var_20 = ((182 ? 203 : 1599713845));
            }
        }
    }
    #pragma endscop
}
