/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 7757805088950839975));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = max(255, var_8);
                    arr_9 [i_2] [i_1] [4] [i_1] = (max(39398, (max((arr_0 [i_0] [i_1]), (-7757805088950839968 >= var_9)))));
                    var_15 = (((-7757805088950839976 ? var_2 : 7757805088950839977)));
                    var_16 = 7757805088950840005;
                    var_17 = (arr_7 [i_0]);
                }
            }
        }
        var_18 = ((var_4 ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : ((((max(7757805088950839975, 7757805088950839975))) ? (!var_2) : var_0))));
        var_19 = (~(((arr_6 [i_0] [i_0] [16]) - (arr_6 [2] [2] [1]))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_15 [i_4] [20] [i_3] [i_0] = (max(0, ((var_10 ? var_3 : (arr_2 [i_0] [i_3])))));
                    var_20 &= (-7757805088950839976 - 0);
                    var_21 *= ((((((~1) ? ((8 ? var_11 : 10)) : (arr_14 [i_0])))) || ((min(4294967295, -18446744073709551615)))));
                    var_22 = ((((max((((arr_1 [i_0]) ? 7757805088950839976 : 16367)), ((1 ? 3176064617 : -7351629826476005807))))) ? ((max(716747339, ((max(32, (arr_10 [i_0]))))))) : (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_3]) : 108))));
                }
            }
        }
        var_23 &= (((var_7 * 2292426183984540063) ? -6324 : (arr_5 [6] [4] [i_0])));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                {
                    var_24 += (min(((max(207, var_3))), (((arr_20 [i_5]) * 899558182))));
                    arr_22 [i_5] [i_6] [i_7] = ((~(((((((arr_16 [i_6]) ? var_3 : 11090239317099252374))) || ((((arr_17 [i_6]) ? 24557 : 9223372036854775807))))))));
                }
            }
        }
        var_25 = ((!((!(((2433 ? 15423 : 1485177270)))))));
        arr_23 [i_5] = (~var_0);
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_26 = (arr_21 [i_8] [i_8]);
        var_27 = max(20278, 0);
    }
    #pragma endscop
}
