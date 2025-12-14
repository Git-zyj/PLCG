/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_13 *= ((((~(arr_2 [i_1 - 3]))) ^ (((arr_2 [i_0 + 2]) ^ (arr_2 [i_0 + 2])))));
                arr_4 [i_1] [i_0] [i_0] = ((729154752 ? (arr_0 [i_1]) : ((7271190351934222580 ? 1 : ((-(arr_1 [i_0 - 2])))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        arr_7 [i_2 - 1] [i_2 - 1] = -1956151669;
        arr_8 [i_2] [7] &= ((65 && (1 != -464484004)));
        arr_9 [i_2] = (((arr_6 [i_2 + 2]) < 3122108107));
        var_14 &= arr_5 [i_2 + 1] [i_2 + 2];
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_15 += ((((0 ? (arr_12 [i_3]) : -1956151654))) != (((arr_13 [i_3] [i_3]) ? 7109208203818620328 : (arr_13 [1] [i_3 - 1]))));
        arr_14 [i_3] [i_3] = ((+((var_3 ? (arr_11 [i_3] [i_3]) : (arr_12 [i_3])))));
        arr_15 [i_3 + 2] = (11825 | 729154756);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                {
                    var_16 = 5417289473889143315;
                    arr_22 [i_5 - 1] [i_5 - 1] [i_5] = (arr_10 [i_3]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_17 = (min(var_17, (((-((max(var_12, (arr_12 [0])))))))));
        var_18 = (max(var_18, ((min(7939859855280474735, ((min(-3, (arr_11 [i_6] [i_6])))))))));
    }
    for (int i_7 = 2; i_7 < 8;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    {
                        arr_35 [i_7 - 1] = (max((((arr_33 [i_7] [i_7] [i_10]) ^ (~var_2))), (((~((-(arr_16 [i_7] [i_7]))))))));
                        arr_36 [i_7 + 2] [6] [i_9] [i_10] = 57755;
                    }
                }
            }
        }
        var_19 = (min((((-(~var_7)))), ((-(max(254, 2947895539))))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 8;i_12 += 1)
            {
                {
                    var_20 = -1;
                    var_21 ^= (((((46 ? 51714 : 4796902895935357166))) ? ((-(-32767 - 1))) : ((max(19566, 210)))));
                }
            }
        }
        var_22 = (((((12651 < ((((arr_19 [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2]) && var_1)))))) < (min(((1 ? 1 : 0)), (((!(arr_39 [i_7] [i_7 + 1]))))))));
    }
    #pragma endscop
}
