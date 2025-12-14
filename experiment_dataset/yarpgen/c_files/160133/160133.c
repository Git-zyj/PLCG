/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 ^= ((((max(44869, 22380))) > ((((-468070683294024521 - var_10) > ((139611588448485376 ? (arr_7 [i_0] [i_0]) : (arr_3 [i_1] [12]))))))));
                    var_14 ^= ((~(arr_4 [i_1])));
                    var_15 &= (((((max(1990365758, (arr_6 [3] [3]))) > var_10)) ? (29448 & 1108307720798208) : -1073741823));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = ((((((max((arr_9 [0] [i_2] [i_2] [i_3]), var_0))) ? (var_4 & 36087) : (var_3 != 14336))) | ((((595968243 | (arr_12 [i_4] [i_3] [i_2] [11] [i_0])))))));
                                var_17 = (((((arr_8 [i_0] [i_0] [i_4 + 1] [i_2]) ^ 176)) - (((min((arr_6 [i_0] [i_0]), (arr_11 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 - 1])))))));
                                var_18 = ((-((~(arr_10 [i_0] [6] [i_2] [8])))));
                            }
                        }
                    }
                    var_19 = ((-(arr_10 [14] [14] [9] [9])));
                }
            }
        }
    }
    var_20 |= (max((29448 != var_7), ((((var_3 ? var_12 : var_10)) > var_1))));

    for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (((((((36087 ? 3221225473 : (arr_14 [i_5 + 1] [9]))) ? (min((-127 - 1), var_2)) : (arr_14 [i_5 - 1] [i_5]))))))));
        var_22 = (((((((arr_13 [1] [1]) != (((arr_13 [i_5] [i_5]) & 40065)))))) > (max(((min(var_8, (arr_14 [i_5] [i_5])))), (max((arr_13 [i_5] [i_5 + 1]), 18445635765988753407))))));
        var_23 = ((((((min(var_0, var_2)) << (((((arr_14 [17] [i_5]) & (arr_14 [i_5] [i_5]))) + 1540214821))))) ? (((((arr_13 [8] [i_5]) << (var_3 - 47525))) << (((8589934591 - var_5) - 8589934540)))) : (((((!var_3) || (!224)))))));
        var_24 = (((-((224 << (3766100134 - 3766100119))))));
    }
    for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_25 = (((((arr_14 [i_6] [20]) | ((var_7 ? 72 : (arr_14 [i_6 - 1] [i_6 + 2])))))));
        var_26 = ((+(min((arr_15 [i_6 - 1]), (min((arr_15 [i_6]), 44784))))));
    }
    #pragma endscop
}
