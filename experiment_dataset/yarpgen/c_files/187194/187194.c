/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((1023 << (-1023 + 1037)))), (min(-19486, 12769904914896417179))));
    var_11 = -28671;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (min(var_12, ((max(((((max(1, 1)) ? ((max(1, -26484))) : 1023))), (min((((10294 ? var_7 : 36581))), (max(-32616, 15655863618278604595)))))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] = (min(-4704237193353142679, 4223311578));
                arr_9 [i_0] [i_1] [i_1] [10] = (min(((min((~var_6), ((min(1, var_5)))))), -2115));
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_15 [i_4] [i_4] [i_3] [5] [i_4] [i_4] [i_4] = ((((max(((127 ? 494363592 : 1)), ((min(1, -706592399)))))) ? (min(((var_3 ? var_9 : var_1)), ((min(-1, -12491))))) : (!1)));
                            arr_16 [i_0] [14] [i_4] [i_0] |= ((116 ? (min(18446744073709551615, (-9223372036854775807 - 1))) : var_4));
                            var_13 = min((!32616), 27172);
                        }
                    }
                }
                var_14 = (min(var_14, ((max((min(((var_0 << (18446744073709551595 - 18446744073709551584))), var_7)), ((max(216024255, (((var_7 ? 28955 : 65535)))))))))));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
            {
                arr_19 [16] [16] [i_1] [i_5] = (!-var_1);
                arr_20 [i_5] = (7009120104669161900 && 0);
            }
            var_15 &= (((!-32616) ? (((max(27, 56)))) : ((var_1 ? (var_8 + 50467) : (((min(var_4, var_5))))))));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_16 -= (+-1004);
                            var_17 = (max(var_17, (((!((min(-900226355, -3333677649875376569))))))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            arr_42 [i_0] [i_9] [i_11] [i_9] [i_0] [i_11] [19] = (min((~3083128911), (min(168376331, -2542))));
                            arr_43 [15] [i_9] [i_0] [15] [i_0] [i_11] [i_12] = ((~(9 <= -10)));
                            arr_44 [i_9] [i_11] = -var_1;
                        }
                    }
                }
                arr_45 [3] [i_9] [i_0] = (max(((!((max(var_1, -1))))), ((((var_3 ? 22585 : 1)) >= ((min(233, var_5)))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_18 = (((((2548 ? -32757 : 2746831755))) ? ((((max(900226347, 187))))) : ((((min(var_0, var_1))) ? (min(5257692470084544136, 52064)) : ((3009 ? 36579 : 1934800330509513360))))));
                            var_19 += (max(((min(var_4, var_4))), ((min(-1, (min(var_8, var_8)))))));
                            arr_52 [i_0] [i_9] [16] [i_0] [i_9] = ((-32757 ? (max((min(13834364768525114607, var_8)), (!var_5))) : ((((min(13469, var_2))) ? var_0 : (((var_4 ? var_4 : var_4)))))));
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
            {
                var_20 = var_6;
                arr_57 [i_0] = (max(((max(-25961, (min(3758096384, 21348))))), (max((((18446744073709551606 ? var_5 : 9385))), var_9))));
            }
            var_21 = (min(var_21, ((min(36580, (max((min(-9, var_8)), (max(1, 3597743754)))))))));
        }
    }
    for (int i_16 = 1; i_16 < 10;i_16 += 1)
    {
        var_22 *= max(-var_6, (!25592));
        arr_62 [i_16] [8] = 2196701395;
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_23 = (max((((min(var_6, -1)) << (var_4 - 9216))), (~39575)));
        var_24 = (min(((min(2147483647, var_5))), (!var_8)));
    }
    var_25 = ((-((var_9 ? (((-8950 ? 25595 : 1548135527))) : (max(3131970753751027769, var_5))))));
    #pragma endscop
}
