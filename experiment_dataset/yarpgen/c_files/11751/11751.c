/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_16 = (3146318782 * 8792);
            var_17 = (~-1079422477289734667);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_18 = 13150344826284891714;
                        arr_13 [i_3] [i_0 - 2] [i_0] [i_0] [i_1] = (i_0 % 2 == zero) ? (((var_2 + 9223372036854775807) >> (((arr_7 [i_0] [i_1 + 2] [i_2] [i_3]) - 11735774913198980705)))) : (((var_2 + 9223372036854775807) >> (((((arr_7 [i_0] [i_1 + 2] [i_2] [i_3]) - 11735774913198980705)) - 813651538727951209))));
                    }
                }
            }
        }
        var_19 = (arr_3 [i_0 - 1] [i_0 - 1]);
    }
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (((~(min(-1639974153600112761, -2204)))));
        var_20 -= ((((min((max(77, -6491185247784777860)), (~-29582)))) ? (min(29579, 3846576519607421983)) : (((((-9223372036854775807 - 1) == (min(var_0, -27389))))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_20 [i_4] = 18075067843857035558;
            var_21 = -1079422477289734667;
        }
        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            var_22 = ((((~6491185247784777875) && (arr_9 [i_4] [i_6] [i_4] [i_6 + 1]))));
            arr_24 [i_4] [i_4] = ((((max((arr_12 [i_4] [i_6] [i_6 + 2] [i_4 + 1] [i_6 - 1]), ((29582 - (arr_22 [i_4 - 3] [i_6] [i_4])))))) ? (max(((((arr_5 [i_6] [i_6 + 3] [i_4]) - var_4))), (min((arr_9 [i_4 + 1] [i_4 + 2] [i_4] [i_6]), var_1)))) : (((-var_4 - (arr_19 [i_6] [i_6]))))));
        }
    }
    var_23 = (min(var_23, (((max(-var_12, var_4)) + ((((((var_3 + 9223372036854775807) >> (30066 - 30048))))))))));
    var_24 = ((((((max(-5369159462351212410, 32760)) ^ (((max(var_15, 0))))))) ? (-32761 > var_2) : 18446744073709551613));
    #pragma endscop
}
