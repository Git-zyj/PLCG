/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_11 = (-2425 ? -734203932 : var_9);
            var_12 = 9007199252643840;
            arr_6 [i_0] [i_0] [i_0] = 11883481616604966810;
        }
        var_13 = (!1729382256910270464);
        var_14 = ((-20549 ? var_9 : 1729382256910270464));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_15 = (min(var_15, ((((var_1 ? 0 : 1))))));
        var_16 = (min((min(734203924, (min(1015825395, var_8)))), 112));
        var_17 = 18437736874456907764;
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_14 [i_4] [i_3] [i_3] = (((var_7 ? var_4 : 4664)));
                var_18 = (max(var_18, (((((min((min(20548, 389736192)), (var_7 || 255)))) ? -1792140924 : 1)))));
            }
        }
    }
    var_19 = (min(var_2, (((!((min(20548, var_6))))))));

    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_20 = (!(((~438721324487892036) >= 33538048)));
                            var_21 = (max(var_21, -20548));
                        }
                    }
                }
            }
            arr_25 [i_5] [i_5] [i_5] = (min((20534 ^ 1), ((3651602662180741631 ? var_9 : 20))));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
        {
            var_22 = (min(32767, (min(227, 1))));
            var_23 = var_2;
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
        {
            var_24 = ((~(min(var_6, -751395876))));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 18;i_13 += 1)
                {
                    {
                        var_25 = (min(var_25, (((((!(((629 ? 14522722173117191427 : 1))))) || -2462765575031763235)))));
                        var_26 = ((!((min(2304717109306851328, 64916)))));
                        arr_35 [i_5] [i_5] [i_12] [i_13] = (min((min((min(0, var_3)), 32767)), (((min(1265266290907234176, var_10)) - ((min(965174607, var_9)))))));
                    }
                }
            }
            var_27 = (min(var_27, ((((((min(var_4, -88)))) ? ((((min(var_6, -9192612234392969063))))) : 32768)))));
            var_28 = (min(-558865225, 0));
            var_29 = (((~-12837) < ((min(20530, (!4032))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
        {
            var_30 = 24576;
            arr_39 [i_5] [i_14] = ((192 ? 16582 : 5533605922716665773));
        }
        var_31 += min(2110189155, ((0 ? -751395854 : 9251288450486399619)));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        var_32 += (!-5141735490082886927);
        var_33 = 14931402390068722517;
    }
    var_34 = var_2;
    #pragma endscop
}
