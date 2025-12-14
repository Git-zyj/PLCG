/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = var_2;
    var_15 = 15769189430872401222;
    var_16 = (min((max(((min(164, var_12))), (max(var_4, var_0)))), -1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = min(10216911469960695265, ((min(33256, 1))));
                            arr_8 [i_1] [i_1] [i_1] = (max((((~(((arr_0 [1]) ? var_12 : -43))))), (((arr_2 [i_1] [i_1] [i_3]) + (((arr_7 [i_1] [15] [i_1]) / 10216911469960695257))))));
                            var_18 = ((1 << (var_5 - 1522170730)));
                            var_19 += (max(166, (arr_5 [i_1 - 1] [i_0])));
                        }
                    }
                }
                arr_9 [i_1] = 32356;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                arr_18 [i_4] [i_1] [i_4] [i_1] [11] [18] [i_5] = ((8229832603748856341 || (arr_13 [i_0] [i_1 - 1] [i_4] [i_0])));
                                var_20 -= var_10;
                            }
                            for (int i_7 = 2; i_7 < 23;i_7 += 1)
                            {
                                var_21 -= ((((min(var_4, (var_3 / 9301246906520644271)))) ? ((max(((0 ? 0 : 150)), var_12))) : (max(((max(var_1, 48))), (arr_4 [i_1] [i_1 - 1])))));
                                arr_21 [i_0] [i_0] [i_1] [i_5] [i_7] = (min((((!(!1)))), (arr_5 [i_4] [19])));
                                var_22 -= ((((min(113, (arr_19 [i_1 - 1] [i_7 - 2] [i_7 - 2] [23] [i_7 + 1])))) ? (((var_8 ? ((max(19854, 34282))) : (arr_11 [i_0] [i_1 - 1] [i_1 - 1])))) : ((-(min(1073741824, 5867249108991667849))))));
                                var_23 += 43851;
                                var_24 = (!2147483647);
                            }
                            for (int i_8 = 1; i_8 < 21;i_8 += 1)
                            {
                                var_25 = ((((max((min(var_6, -79)), (((210 ? var_5 : 3290640488857964714)))))) ? 14835885476385209409 : (((arr_2 [i_1] [i_1] [i_8 + 2]) + (min(-102, 13104747849814389617))))));
                                var_26 += 12489;
                            }
                            for (int i_9 = 2; i_9 < 21;i_9 += 1)
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = 4098221762;
                                var_27 += ((~(max(3594214443, 54772))));
                            }
                            var_28 = (max(54772, (max((arr_22 [i_1] [i_1 - 1] [i_4] [i_1 - 1] [i_5]), (var_10 * 59727)))));

                            for (int i_10 = 0; i_10 < 24;i_10 += 1)
                            {
                                var_29 = (min(79, ((1921101783 + (3594214450 || -1)))));
                                arr_31 [i_5] [i_5] [2] [i_1] [i_5] = (min(((max(5808, -1))), (min((arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (max(13104747849814389617, 10774))))));
                            }
                        }
                    }
                }
                var_30 += 1896784066;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_31 = 125;
                            var_32 -= (min(var_6, (arr_16 [i_0] [i_0] [i_1 - 1] [i_11] [i_12] [12])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
