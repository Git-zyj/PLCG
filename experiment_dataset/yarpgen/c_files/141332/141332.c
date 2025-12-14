/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (arr_3 [i_1] [i_0 - 2] [4]);
                arr_6 [i_0] [i_1] = (max((arr_2 [i_0 - 3]), (arr_2 [i_0 + 1])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_17 = (arr_8 [1] [5]);
        arr_11 [i_2] = (max((((~((min((arr_7 [20]), var_15)))))), 141));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_18 = (max((~var_1), ((max((max(48, 401190771)), (arr_10 [i_3] [i_3]))))));

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_18 [i_4] = (var_0 - -12674);
            arr_19 [i_4] = ((~(((!(arr_17 [1] [i_4]))))));

            /* vectorizable */
            for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
            {
                var_19 ^= ((3893776547 == var_14) ? var_6 : var_9);
                var_20 = (max(var_20, 401190771));
                arr_22 [i_5] [i_5] = var_1;
            }
            for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_21 = ((49219 >= ((~(((arr_13 [21]) + 3893776524))))));
                var_22 = (max(var_22, (max((arr_9 [i_6 + 2]), ((((arr_24 [i_3] [i_3] [i_3]) & (arr_20 [i_3] [i_3]))))))));
                var_23 = (max((3893776525 / 1317126433), 48135));
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_24 ^= var_2;
                    arr_30 [i_3] = (max(-7404303957887552209, 125));
                }
                var_25 ^= 1;
            }
            var_26 = (max(var_26, -var_9));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        var_27 += (max((max(1, 4262224083)), 245));
                        arr_37 [i_3] [24] [i_9] [i_10] [i_10] [i_10] = (arr_36 [i_10] [i_9] [i_4] [i_4] [i_3] [i_3]);

                        for (int i_11 = 1; i_11 < 24;i_11 += 1)
                        {
                            arr_41 [i_11] [i_3] [i_11] [i_10] [3] [i_10] [i_11] = 8752733048983646529;
                            arr_42 [i_3] [i_4] [i_9] [i_10] [i_10] [19] = var_2;
                            var_28 -= max((max(((~(arr_32 [i_11] [i_9] [i_4]))), ((max((arr_15 [i_11] [i_9] [i_3]), (arr_10 [i_3] [i_4])))))), var_15);
                        }
                        var_29 &= ((((max(var_1, (arr_20 [i_3] [i_4]))) ? (var_3 + 180) : 0)));
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 3; i_13 < 24;i_13 += 1)
            {
                var_30 = (max(var_30, var_0));
                arr_50 [i_3] [i_12] [i_13] = ((2054388694 ? var_11 : (arr_23 [i_13 - 1] [i_13 + 1])));
            }
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                arr_54 [i_14] [i_14] = -1173653077;
                arr_55 [i_3] [i_3] [i_3] [i_14] = (max(-21689, 3544257736));
            }
            var_31 = (max((!72), 15868595898888645089));
            var_32 = var_8;
        }
        arr_56 [i_3] = (max(4264750475, (arr_28 [i_3])));
    }
    var_33 = ((~((min((1374595037 == 2578148174820906527), var_4)))));
    #pragma endscop
}
