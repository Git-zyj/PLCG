/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((38111 ? 2139434393 : 32767)));
    var_19 -= 252;
    var_20 -= (((((min(-55, var_10))) ? (((min(var_6, var_8)))) : (~2767087174))));
    var_21 ^= (min(((max((1 || var_11), var_2))), (min(62431, 125))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_22 = (min(var_22, ((((~-50) ? (((max((!191), -946)))) : (min((431751181 | 6917529027641081856), -68)))))));
                        var_23 = (((-1 - ((3327521707 ? 24624 : 56)))));
                        var_24 ^= ((65535 && (arr_8 [i_0] [5] [i_0] [i_0])));
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1) /* same iter space */
                    {
                        var_25 = (min(-2355, 431751204));
                        arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] = ((-(arr_1 [i_2 - 2])));
                        var_26 *= (max(((((((-(arr_9 [i_1] [8] [i_1] [i_4])))) ? 48 : (arr_11 [i_0] [i_4 - 2] [i_2 - 2] [i_4])))), (max((arr_8 [i_0] [i_4 - 2] [7] [4]), (arr_11 [i_0] [i_4 - 2] [i_4] [i_0])))));
                    }
                    for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
                    {
                        var_27 = (max((((-(arr_17 [i_0] [i_2 + 1] [i_5 + 1] [i_2 + 1] [i_5] [i_5])))), (arr_17 [i_0] [i_2 - 2] [i_5 - 1] [i_2 - 2] [i_2 - 2] [i_5])));
                        var_28 = 1637564011;
                        var_29 *= ((1 * ((13 % (29640 != 192)))));
                    }
                    arr_18 [i_1] [i_1] [i_2] = 3384;
                    var_30 = (arr_11 [i_0] [8] [i_2 + 1] [8]);
                }
            }
        }
    }
    #pragma endscop
}
