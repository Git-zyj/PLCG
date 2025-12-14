/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_4));
    var_11 ^= var_7;
    var_12 += (min(var_6, (min(4560494035106218046, 0))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (max(var_13, (((0 ? (min(13886250038603333570, var_7)) : (((0 ? (arr_1 [i_0]) : (arr_1 [i_0])))))))));
        var_14 ^= (max((arr_0 [4] [i_0]), var_9));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_15 = (max(var_15, ((min((min(1, -5151505517351967214)), ((max((arr_2 [i_1] [i_1 + 1]), (arr_2 [i_1] [i_1 + 2])))))))));
        arr_4 [i_1] [i_1] = var_3;

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_16 = (max(var_16, -30144));
            var_17 ^= (min(-1219069831, ((min(-15, 43293)))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_18 = (108 ? 22243 : 1221719566);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_19 = (max(var_19, (((((max((arr_14 [i_1 + 2] [i_1] [i_5] [i_1]), var_5))) ? (((var_1 <= (min(-1219069833, 13886250038603333570))))) : (((arr_6 [i_5]) ? 2 : var_7)))))));
                        var_20 = (min(var_20, ((min(210, (-6154201249975631608 <= 48))))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_20 [i_1] [i_6] = ((max(15, -1219069820)));
            var_21 = (min(var_21, 7949052248704196525));
            var_22 = (~-1892920174619621079);
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_23 += ((var_4 / (max(-7516098159424877458, -13))));
                                arr_34 [i_1] [i_1] [i_1] [i_8] [i_9] [i_10] [i_10] = (min(1, 27));
                                var_24 = ((var_9 ? 0 : var_4));
                            }
                        }
                    }
                    var_25 = 1;
                    arr_35 [i_1] [i_1] [i_8] = ((~(min(var_4, 6052025604386621281))));
                }
            }
        }
        var_26 = (min(var_9, (min(7, (arr_25 [i_1])))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_27 += ((45 * 1) ? 840487404 : var_0);
        arr_39 [i_11] = (1 == var_1);

        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_28 = (!-762178745690861271);
            var_29 = (arr_41 [i_11] [i_12]);
            var_30 += -63;
            arr_42 [i_12] [i_12] = (((arr_0 [i_12] [i_12]) ? (arr_0 [i_12] [i_12]) : var_0));
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            arr_45 [9] [i_13] [i_13] = (19067 >= var_3);
            var_31 = (((arr_0 [i_13] [2]) ? (arr_0 [i_13] [i_13]) : -7491881806476174599));
            var_32 = (arr_43 [i_11] [i_11]);
        }
    }
    var_33 = (max(var_33, var_6));
    #pragma endscop
}
