/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min((var_1 > var_6), ((var_9 ? var_0 : var_0))))) || (var_3 && var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 += (1 || 7388756683567430102);
                var_13 = ((-7388756683567430102 && (((~(((arr_1 [i_0]) ? var_3 : var_6)))))));
                arr_4 [i_1] = ((((arr_0 [i_0] [i_1]) | var_3)));
                var_14 ^= var_7;
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_15 = (max(var_15, ((min((min((((arr_5 [i_2]) ? var_2 : var_0)), ((var_7 ? var_3 : var_7)))), (arr_6 [i_2]))))));
        var_16 ^= 15;

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    {
                        var_17 = ((~((((14124145057689421360 >> (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]))) & var_7))));
                        var_18 = ((((!(((-204742558609796803 ? var_7 : var_9))))) ? -var_8 : ((~(var_9 <= var_0)))));
                        var_19 &= (((((max(var_6, var_2)) + (((arr_6 [i_2]) - 204742558609796802))))));
                        var_20 ^= ((~(max((arr_12 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 2]), var_5))));
                    }
                }
            }
            arr_15 [2] &= ((((arr_12 [i_2] [i_2] [i_2] [i_3]) ? var_4 : (arr_13 [i_3] [i_2] [i_3] [i_3] [i_2]))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_19 [i_6] [i_6] = min((arr_12 [i_2] [i_2] [i_2] [i_2]), (((123 ? -8159 : (((arr_17 [i_2] [i_2] [i_2]) & var_1))))));
            var_21 = (((((max((arr_16 [i_2] [i_2] [i_2]), var_9)) ^ (!var_9))) + 1340764176159437452));
            var_22 = (min(var_22, (!var_4)));
        }
        arr_20 [i_2] = ((((((((var_4 ? var_2 : var_1))) && (((-1265234391 ? 4322599016020130255 : var_10)))))) % (min(8159, ((204742558609796803 ? var_8 : var_10))))));
        var_23 = ((var_7 && (((204742558609796803 | (max(244, -4625661861422047935)))))));
    }
    #pragma endscop
}
