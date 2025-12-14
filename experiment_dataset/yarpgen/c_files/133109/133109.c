/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (((((0 ? 0 : 19794))) + (max((arr_0 [3]), 14794136977928725542))));
        var_14 = (2520985141 % -20820);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] &= (~4096435371);
                        var_15 += (!var_10);
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_16 = (((~(min((arr_3 [i_0]), var_12)))) == ((((!((min(0, 0))))))));
                        var_17 |= (min(var_10, (((arr_6 [i_0] [i_1] [i_1] [i_4]) - (arr_13 [i_0] [i_0] [i_0] [i_0])))));
                        var_18 = (min((((((var_1 ? 5327115535704518699 : 31))) ? (arr_10 [i_0] [i_0]) : var_7)), (max(((max(var_5, 31))), ((-(arr_6 [i_2] [6] [i_2] [i_2])))))));
                        var_19 &= 230;
                        var_20 = (min((min(11063846258926839656, (~2170791561))), 9361015485832490914));
                    }
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        arr_17 [17] [i_5] = 84;
                        var_21 = var_11;
                        var_22 = ((((min(249, 1068041112))) || ((!(arr_13 [i_5] [i_5 + 1] [i_5] [i_5 + 1])))));
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_2] [i_6] = (min((((min(9085728587877060711, 9361015485832490914)) + (arr_2 [i_6 - 1]))), -93));
                        var_23 = (max(var_23, ((((var_5 >> (69 > var_11)))))));
                        var_24 = ((((-84 ? ((min(var_7, 1))) : ((min((arr_8 [11] [2]), 82))))) * ((~(-127 - 1)))));
                    }

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_25 = ((((min((-127 - 1), var_10))) ? (!var_9) : (1 - -3)));

                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_26 = (min(var_26, (((((((var_3 ? 1 : (arr_6 [19] [0] [1] [i_0]))) ? (max((arr_20 [i_0] [i_0] [i_0] [i_7] [2] [i_2]), 4294967288)) : 122)))))));
                            arr_29 [i_0] [5] [16] [i_2] [i_7] [i_8] = (!1117041350);
                            var_27 += (arr_2 [i_0]);
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_28 = (max(1662859996, (((!(arr_21 [i_7]))))));
                            var_29 = 1;
                        }
                    }
                }
            }
        }
    }
    var_30 = 12;

    /* vectorizable */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_31 &= (102 && -17);
        arr_35 [i_10] = (((arr_34 [i_10] [i_10]) ? 7 : (arr_34 [i_10] [1])));
    }
    var_32 -= (min(((((0 < 105) == (min(2403184382, var_6))))), (min(var_7, ((var_10 << (var_4 - 37464)))))));
    #pragma endscop
}
