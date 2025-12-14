/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (max(((var_3 ? ((min(113, 147))) : ((max((arr_4 [i_0] [i_2]), (arr_4 [i_0] [i_1])))))), (arr_1 [i_0])));
                    var_19 = ((18446744073709551615 ? (((arr_6 [i_2 + 1]) ? 51295 : 17793)) : ((min(-1797121863, 1)))));
                    var_20 = ((((-24261 < (((arr_4 [i_0] [i_1]) - (arr_5 [i_0] [i_0]))))) ? 7 : (min(((((arr_3 [i_0]) ? 255 : (arr_2 [i_2])))), (min((arr_0 [i_0]), 0))))));
                    arr_7 [i_0] [i_0] [11] [i_2] = (min(2147483647, (((((min((arr_6 [i_0]), 13983)))) / ((984881981 ? 117358420 : 111))))));
                    var_21 = -17770;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_22 = 62416;
                    var_23 = (((((arr_9 [i_4] [i_3] [i_0]) && (((147 ? (arr_2 [i_0]) : 2003097866))))) || -15577));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_24 = ((17082280039279267018 ? 9026 : 70));
                                var_25 = (max(var_25, ((min(((0 - (min(3, (arr_13 [i_0] [i_5]))))), ((((arr_9 [i_0] [i_0] [i_0]) ? (arr_6 [i_0]) : (arr_9 [i_3] [i_4] [i_6])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                arr_24 [i_7] = (((min(0, 2003097836)) | 0));
                var_26 = (min(65535, ((9533223627566644929 ? (((arr_23 [7]) ? 6374538989022739500 : 78)) : (((73 + (arr_23 [i_8]))))))));
                var_27 ^= (arr_23 [i_7]);
            }
        }
    }
    var_28 = (min(var_28, -103));
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 23;i_11 += 1)
            {
                {
                    arr_32 [6] [i_9] = (min((arr_29 [6] [i_9]), ((((max((arr_30 [i_9] [i_10] [i_10] [i_11]), var_8))) ? 567756081 : ((max(-15577, 217)))))));
                    arr_33 [i_9] [i_10] [i_10] [i_11] = (!((max((arr_30 [5] [i_10] [i_11 + 1] [5]), (arr_30 [i_9] [i_10] [i_11 + 1] [i_9])))));
                    var_29 = (((min(var_5, var_14))));
                    var_30 += (min((max((arr_31 [21] [i_11]), (~1307845569997602717))), (max(((((arr_27 [i_9] [i_10] [i_11]) << 0))), 11506812895977654472))));
                }
            }
        }
    }
    #pragma endscop
}
