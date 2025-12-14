/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 49938;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = ((((min((~123), (arr_7 [i_0]))) + 2147483647)) >> (((~955273542101636930) + 955273542101636958)));
                    arr_11 [11] [i_1 + 1] [i_2] = (49990 == -4002122441);
                    arr_12 [17] [i_0] [i_1] [i_2] = (106 ? 4183 : -5722);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = (arr_13 [i_3] [i_3] [i_3]);
                                arr_18 [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] [i_3] = var_10;
                            }
                        }
                    }
                    var_14 = var_7;
                }
            }
        }
        var_15 = (((((min((arr_2 [i_0]), (max(-14338, var_7)))))) == ((~(arr_14 [i_0] [i_0] [i_0] [i_0])))));

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_27 [i_6] [i_5] = (arr_2 [i_7 + 1]);
                            arr_28 [i_5] [i_5] [i_6] [7] [i_6] [i_5] = (((((((arr_26 [i_6] [i_5] [i_5]) ? -955273542101636928 : 15548)))) ? (max(((min(49990, 123))), (arr_20 [17] [i_0] [17]))) : (max(var_10, 5483))));
                            var_16 ^= (max(-var_9, (min(2547820562, -var_0))));
                            arr_29 [i_0] [i_0] [i_5] [i_6] [i_7] [i_8] = (((((((min(955273542101636925, -955273542101636951))) ? (max(var_2, (arr_8 [17] [i_8]))) : var_10))) > ((var_1 & (~var_11)))));
                            var_17 = var_3;
                        }
                        var_18 = (((((-7011222344573936425 >= 15548) ? ((max((arr_7 [i_6]), 50002))) : (max(var_11, (arr_13 [i_0] [i_0] [i_0]))))) | (((max((max(15546, 15525)), (arr_22 [i_0] [i_6] [i_7])))))));
                        var_19 = ((min(9186962863778477161, (arr_0 [i_0] [i_0]))) < (((min(49990, 50002)))));
                    }
                }
            }
            var_20 = ((((((((((arr_20 [i_0] [i_0] [i_0]) ? 44069 : (arr_13 [i_0] [i_0] [i_5])))) >= (max(2, (arr_20 [i_5] [i_5] [i_0]))))))) - 7011222344573936425));
        }
    }

    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_32 [2] [i_9] = ((-(max((40355798 / 4766694103501050698), var_10))));
        arr_33 [1] = (max((((-5701 || ((min(3935661197141172515, 25165824)))))), (((((min((arr_30 [i_9]), (arr_30 [i_9]))))) ^ ((2599187774 ^ (arr_31 [i_9])))))));
        arr_34 [i_9] [i_9] = var_5;
    }
    #pragma endscop
}
