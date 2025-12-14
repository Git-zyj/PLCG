/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = (max(var_4, (((113 ? 6210 : ((-1233932181 ? 2531180400381870139 : 2531180400381870131)))))));
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_3] [1] = ((((((max(var_6, var_5))) ? (~2531180400381870148) : (arr_1 [i_2]))) << (((max((arr_10 [i_3 - 1] [i_3] [i_3] [i_1 - 1]), (arr_10 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_1 - 1]))) - 1242807270))));
                        var_13 -= (max((arr_5 [i_1] [i_1]), ((~((-2531180400381870140 ? -32756 : 1905232201))))));
                        arr_12 [i_1] = 2097151;
                        arr_13 [i_3] [1] [i_1] [i_0] = (max((((arr_10 [i_3 - 1] [i_1 - 1] [i_0] [i_0]) ? (arr_10 [i_3 - 1] [i_1 - 1] [20] [20]) : var_1)), (~var_5)));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_14 *= (((arr_7 [i_2] [18] [i_2] [i_1 - 1]) ? (((2097151 ? -120 : var_9))) : ((~(arr_6 [i_1 - 1] [i_1 - 1] [13])))));
                        var_15 += (((!1390318701) ? (((((var_4 ? (arr_5 [12] [0]) : var_4))) ? (max(var_4, 46021)) : ((max(var_8, (arr_10 [i_0] [i_1 - 1] [i_2] [i_4])))))) : 1));
                    }
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        var_16 += (((arr_5 [i_1 - 1] [i_1 - 1]) < ((-2531180400381870154 ? (max(var_7, var_0)) : ((62177798 ? var_9 : var_8))))));
                        var_17 = ((!((((var_6 ? var_4 : 119))))));
                        var_18 = var_7;
                        var_19 = (max(((-2531180400381870140 ? -2531180400381870141 : 2097135)), (((65518 ? (max(1780418025, var_7)) : -125)))));
                    }
                    var_20 = ((~(((arr_1 [i_1 - 1]) ? (arr_16 [i_0] [i_0] [i_1] [i_2] [i_2]) : var_5))));
                    var_21 += var_9;
                }
            }
        }
    }
    #pragma endscop
}
