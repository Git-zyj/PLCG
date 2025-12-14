/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_12 = var_4;
                    arr_9 [i_0] [i_2] [i_0] = ((9062496050439097481 ? -7569 : (arr_8 [i_0] [i_1])));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_13 = (max((~var_6), ((((min(var_7, -31170))) ? 7596 : (arr_0 [i_1])))));

                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        var_14 -= (((((((max((arr_6 [i_0] [2]), (arr_2 [i_0] [i_1])))) ? (((arr_3 [i_0] [i_1] [i_3]) ? var_10 : 1882642255)) : (var_1 / 57967)))) ? (!var_5) : (arr_10 [6] [i_1] [6])));
                        var_15 = (max(var_15, ((min(var_4, ((min((arr_12 [i_0] [4]), (arr_12 [i_1] [6])))))))));
                        var_16 = (((max(var_1, (arr_11 [i_0] [i_4 - 1] [i_4 - 1] [i_4 + 2]))) * 28466));
                    }
                    var_17 = (min(var_17, (((-62508 ? ((min(((min(57967, 57971))), (min((arr_0 [i_1]), var_9))))) : (max(var_8, (arr_10 [i_0] [i_1] [i_3]))))))));
                    var_18 |= ((!((max((var_9 - 9872), ((15358 ? 236 : (arr_1 [i_0]))))))));
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_19 = ((((-7416804753356754247 ? 7568 : 0))) | (((!57983) ? var_10 : ((var_1 ? (arr_14 [i_1] [i_6] [i_6] [i_6] [i_7 - 1]) : (arr_1 [i_1]))))));
                                var_20 -= ((((2383065477 ? 236 : 2383065494))) ? (arr_21 [1]) : 236);
                                var_21 *= ((((min((!12271548197009942411), (arr_4 [i_0] [i_0])))) && ((min(2114668811460075471, 5544696396712531470)))));
                                arr_24 [i_1] [i_1] [i_5] [i_1] [i_5] = ((var_3 ? ((4727491211253259979 ? 64108 : 47401)) : var_9));
                                var_22 &= (8594627800318133887 * 0);
                            }
                        }
                    }
                }
                var_23 ^= ((max((max((arr_11 [i_0] [i_1] [i_1] [i_1]), 2383065477)), -9818202612961701248)) + ((max((max((arr_7 [6] [6] [i_1]), 1435)), (arr_20 [6] [i_1] [i_1] [10])))));
            }
        }
    }
    var_24 = (max(var_24, (((var_5 / 17946756753258020385) * var_6))));
    var_25 = (min(var_25, (((((min(var_6, (max(var_4, var_10))))) ? (((!var_5) + ((9146037989533476326 ? var_4 : -7023)))) : var_5)))));
    #pragma endscop
}
