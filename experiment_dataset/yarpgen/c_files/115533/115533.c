/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(10866727822202948224, 7580016251506603393));
    var_14 ^= (((40623 & var_4) >= ((((min(var_4, var_3))) - var_8))));
    var_15 = ((((~((-45 ? -2140247494687428366 : 14877718022002085795)))) ^ ((min(((3223242510 << (17047339454694985293 - 17047339454694985286))), (var_2 && var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = var_7;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (((max((((arr_2 [i_2] [i_0]) ? var_2 : 152362488)), ((1071724761 << (7580016251506603386 - 7580016251506603382))))) >> (((((arr_4 [i_0] [i_0] [i_0 - 1]) ? 1521613920 : (!-9185206615235413116))) - 1521613902))));
                        var_18 = (min(var_18, (!var_2)));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_19 = ((!(arr_11 [i_0])));
                        arr_13 [i_0] [i_1] = (((((var_7 / ((((arr_12 [i_0] [i_1] [i_0] [i_4]) - var_1)))))) ? (((arr_9 [i_0 + 2] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 2]) ? -14877718022002085785 : 1245568638912173806)) : (arr_3 [i_0] [i_1] [i_2])));
                    }
                    arr_14 [i_0] [i_0] [i_2] = (~6765881831753310375);
                    var_20 = (min(var_20, (((((!((min((arr_4 [i_2] [i_1] [i_2]), 1))))) || ((min(((min((arr_8 [i_2] [i_1] [i_1] [i_1]), var_1))), (((arr_9 [i_0 + 2] [i_0 + 2] [i_1] [i_2] [i_2] [i_0 + 2]) ? 14877718022002085794 : var_9))))))))));
                    arr_15 [i_0] [i_1] [i_1] [i_1] = -17852;
                }
            }
        }
    }
    #pragma endscop
}
