/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((var_11 ? (arr_1 [i_0]) : -1)))) & ((50008 ^ (((arr_0 [i_0]) ? (arr_1 [i_0]) : 17114))))));
        var_12 = (max(var_11, (max((arr_1 [i_0]), (32760 && 91)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] = (((max((arr_5 [i_0] [i_2 + 2] [i_2] [i_0]), var_5)) << (-25172 + 25212)));
                        arr_11 [i_0] [i_1] [i_1] [i_0] = var_8;
                    }
                }
            }
        }
        arr_12 [i_0] = (8070450532247928832 > var_9);
        var_13 = (max((-53 + var_11), (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) * (((-127 - 1) ? 14247300109495808063 : (arr_5 [i_0] [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_14 = arr_4 [i_5];
            arr_18 [i_4] [i_5] = arr_1 [i_5];
            var_15 = ((var_7 ? 52070 : ((-1 ? -1 : 4))));
            var_16 = (28 ? 120 : (arr_5 [i_5] [i_4] [i_4] [i_5]));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_17 = (min(var_17, var_4));
            arr_22 [i_6] [i_4] [i_6] = (arr_5 [i_6] [i_6] [i_6] [i_6]);
            var_18 = (((2 / 5998282543410792576) ? (((arr_7 [i_6] [i_6] [i_4]) ? 0 : (arr_5 [i_4] [i_6] [i_6] [i_6]))) : ((((arr_7 [i_6] [i_6] [i_6]) ? (arr_8 [0] [i_6] [i_6] [i_6] [0]) : (arr_19 [i_4] [i_4]))))));
        }
        var_19 = (var_11 & 4032420321);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_20 = (max((min(((min(var_4, 32766))), (0 % 4294967278))), 1416478658));
        var_21 = (arr_6 [i_7]);
    }
    var_22 = var_5;
    var_23 = (((((var_10 || var_3) < (max(var_7, 480)))) ? (min(var_1, (min(var_7, -1871)))) : (((min(var_11, 2)) ^ var_7))));
    #pragma endscop
}
