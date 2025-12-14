/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((max((max(2554293741344405003, 2095956325458858482)), ((max(19202, var_6))))));
    var_15 = (var_3 ^ var_8);

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_1] = (((arr_2 [i_0] [1]) & (((((arr_2 [i_0] [i_1]) <= 56211))))));
            arr_7 [i_1] [i_0] = ((((((arr_0 [i_0]) / (arr_0 [i_0])))) ? 5834907452505105082 : (arr_0 [i_0])));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] = ((max((max(-6527928453009899311, (arr_9 [i_0])), ((max((arr_1 [i_0]), 63696320)))))));
            var_17 = (arr_5 [i_0] [i_2]);
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_18 = 10706013674011254130;
            arr_15 [i_0] [i_0] [i_0] = (max((max((2441439969878051125 == 149), 580319593)), (arr_13 [i_0])));
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_19 = (max(9325, ((+((max((arr_5 [i_5] [i_4]), (arr_1 [i_4]))))))));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    {
                        var_20 += (((max(2554293741344404993, 254))));
                        arr_25 [i_5] = ((((max(3812933087, (arr_5 [i_5] [i_7])))) << (((((arr_10 [i_4] [i_4]) ? 0 : (arr_9 [10]))) & -2554293741344405003))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_28 [i_8] = ((!(-944468442 * 5834907452505105082)));
            arr_29 [i_8] [i_8] [i_8] = (max((max(5834907452505105082, 657177823)), ((max((arr_17 [i_4]), 944468441)))));
            var_21 = (((~1096921056) ? (max((arr_20 [i_4] [i_8]), ((-(arr_2 [i_8] [i_8]))))) : -956481380776797638));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_22 += (max((((arr_14 [i_4]) * (arr_19 [i_4] [i_9]))), (((arr_14 [i_4]) * 2150))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        arr_36 [i_4] [i_4] [i_4] [i_9] [4] [i_9] = (((max(-1, (arr_23 [i_4] [i_4] [i_9] [i_10] [i_11])))));
                        var_23 = (arr_30 [i_10] [i_11]);
                    }
                }
            }
            var_24 = ((-(((((max((arr_14 [i_4]), (arr_16 [i_4]))))) / 956481380776797638))));
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 8;i_12 += 1)
        {
            var_25 = (((((2554293741344405002 / (arr_37 [i_12])))) ? ((5792 ? (arr_32 [i_4] [2] [i_12]) : 254)) : (((arr_12 [i_12]) ? 6982 : -24))));
            var_26 = (((arr_40 [i_12 + 3]) >= (arr_40 [i_12 + 1])));
            var_27 = 65535;
        }
        var_28 = ((((max((arr_35 [9] [i_4]), (arr_35 [i_4] [i_4])))) ? ((((max(1, 255))))) : (((((-625481354885818675 ? (arr_19 [i_4] [i_4]) : (arr_16 [i_4])))) & 1125899906842623))));
        var_29 = (arr_10 [i_4] [i_4]);
        var_30 = ((!((max(1, (1 != -19224))))));
    }
    #pragma endscop
}
