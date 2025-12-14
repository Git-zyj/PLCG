/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(-4273003029, -9223372036854775796)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (((arr_2 [i_1] [i_0 + 2]) ? (arr_3 [i_0]) : (((((arr_0 [i_0 - 1]) ? var_0 : var_1)) & (((993658411 >> (((arr_3 [i_1]) - 8736134020541557675)))))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_14 = var_5;
                    arr_7 [i_2] = ((79 * (((7552 < (arr_1 [i_0 - 1]))))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((!(((1 % (arr_6 [i_0 + 3] [i_0 + 3] [i_2] [i_1]))))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_3] = ((-2537983566209859225 - var_6) - 1);
                    var_15 ^= (((!(arr_5 [i_0]))));
                }
                for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_16 = (-(((arr_12 [i_0] [i_1] [i_4 + 2]) >> (((arr_12 [i_0 - 1] [2] [i_4 - 1]) - 144)))));
                    var_17 = 1;
                    arr_15 [i_4] = (((arr_5 [15]) > ((1 ? (arr_4 [i_4 + 1] [i_0 + 3]) : -1318143652))));
                    var_18 += (((((1 ? 1 : 23307))) ? (arr_12 [i_0 + 2] [i_0] [i_1]) : ((min(11978, 31)))));
                    var_19 = (i_4 % 2 == 0) ? (((+((15509103313026356245 << (((arr_10 [i_4]) - 6539785012128683926))))))) : (((+((15509103313026356245 << (((((arr_10 [i_4]) - 6539785012128683926)) - 9877230135504440459)))))));
                }
                arr_16 [i_1] [i_0] = arr_13 [i_1] [i_0] [i_0 + 3] [i_1];
                var_20 = (max(var_20, 67));
            }
        }
    }
    #pragma endscop
}
