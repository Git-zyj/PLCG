/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 |= (min(-436289730, 0));
            var_19 += (((((+(min((arr_4 [12] [i_0]), (arr_4 [i_1] [i_0])))))) ? (min((arr_0 [i_1]), (arr_0 [i_0]))) : 1));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_20 += 1;
                            var_21 *= (255 - 255);
                            var_22 ^= var_11;
                            var_23 = ((4681106919888847125 <= ((((arr_1 [i_4] [i_3]) ? 145 : 255)))));
                        }
                    }
                }
            }
            var_24 = (((((((arr_14 [i_0] [i_2]) >= var_14)))) > (~var_6)));
            var_25 = (arr_7 [i_0] [i_2]);
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_26 = (min(var_26, var_17));
            var_27 += (((arr_15 [i_6]) && (!1396158124)));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 21;i_8 += 1)
                {
                    {
                        var_28 = (((max(5171785638559127447, (arr_21 [i_8] [i_7] [i_6] [i_0] [i_0]))) < (((((min(110, (arr_20 [13] [i_8 - 3] [5]))) == var_10))))));
                        arr_23 [i_0] [i_6] [i_7] [i_7] = ((-(min(167025574, 5171785638559127447))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                {
                    arr_28 [i_10 - 1] = (-(max((max(var_14, (arr_26 [i_0]))), 0)));
                    var_29 &= ((((min(((min((arr_25 [i_9] [1]), (arr_13 [17] [i_9] [i_9] [19] [i_9])))), ((0 ? 0 : 1301842605868798755))))) >= (min(24929, ((1 ? var_6 : (arr_25 [i_9] [i_0])))))));
                    arr_29 [1] = (~255);
                    var_30 += -4681106919888847126;
                    arr_30 [i_0] [6] [4] &= ((6340009781408809335 ? 0 : -5171785638559127447));
                }
            }
        }
        var_31 = (min(var_31, ((max(24928, (~var_11))))));
    }
    var_32 = (((~((max(var_5, var_1))))));
    #pragma endscop
}
