/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_13 = var_0;
            var_14 = (min(var_14, ((((((1 ? var_6 : ((7680 ? -1970534980 : -1))))) ? ((var_2 ? (((arr_3 [i_1 - 1] [1] [i_0]) ? (arr_1 [0]) : 8258867487934340601)) : (arr_1 [1]))) : (~-1))))));
            var_15 = (((((((-(arr_3 [i_0] [i_0] [i_1 + 1])))) < 1790918433855574419)) ? (((-((var_7 ? -2147483633 : var_11))))) : -3397636941300771742));
            var_16 = (arr_1 [i_0]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    {
                        var_17 = ((var_9 ? var_5 : var_8));
                        arr_12 [i_0] [i_2] [i_3 - 1] [i_4 + 2] = 58586;
                        var_18 *= (((arr_3 [i_0] [6] [i_4]) ? (((((var_7 ? 8184 : 241))) ? (((0 ? 31 : 73))) : var_3)) : (arr_5 [i_4 - 1])));
                    }
                }
            }
            arr_13 [i_0] [i_0] = (max(((max(1, -7109))), (arr_1 [i_0])));
            var_19 = ((134217727 ? var_7 : (arr_9 [i_0] [i_2])));
            var_20 = 1;
        }
        var_21 = (min(var_21, var_0));
        arr_14 [i_0] [i_0] = 206;
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_22 = ((((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) ? -var_5 : ((100 >> (23013 - 23007))))));
        var_23 -= ((97 ? (((((((arr_5 [i_5]) ? 1 : 1))) ? (((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) ? 1 : 0)) : ((max(var_3, (arr_11 [i_5] [i_5]))))))) : ((((min(197, (arr_15 [i_5])))) ? var_9 : var_4))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_24 = 7680;
        var_25 *= -13;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_26 = ((((!(arr_1 [i_7]))) ? (arr_26 [i_7] [i_7] [i_9] [5]) : (~8)));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_34 [i_7] [i_7] [i_10] [i_7] = ((((11834543892511846314 ? var_0 : 14))) ? (((arr_0 [i_7]) ? (arr_5 [i_11]) : (arr_15 [i_9]))) : 245);
                                arr_35 [i_10] [i_10 + 2] = ((var_8 ? (var_9 / -4861266952071673173) : (arr_23 [14] [i_8])));
                                var_27 = var_1;
                                var_28 ^= (((arr_11 [i_10 + 1] [i_10 + 1]) ? 17979214137393152 : 13085));
                            }
                        }
                    }
                }
            }
        }
        var_29 &= (((arr_9 [i_7] [i_7]) * 1));
        var_30 = 1;
    }
    var_31 = 7162653141575206408;
    var_32 = ((((((-16 ? 1 : var_0)) ? 80 : 0))));
    #pragma endscop
}
