/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(-10606, var_2));
    var_17 = (10602 <= var_4);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [17] = ((-30452 ? 30448 : 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_12 [12] [11] [i_2] = ((-1585142133 ? -89 : -6814990552999886465));
                    arr_13 [i_0] [i_1] [i_1] [i_0] = (((min(0, -6814990552999886477)) - ((12379 ? 1 : -6814990552999886465))));
                    arr_14 [i_0] [i_2] [i_2] [i_2] = (arr_2 [i_2]);
                    arr_15 [i_0] = (max(((((16347832451463183912 ? var_14 : var_5)))), -4449736037515855156));
                }
            }
        }
        arr_16 [i_0] = (15928372209428057202 > -5);
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_26 [i_3] = (min(2098911622246367712, 7540947387498101718));
                    arr_27 [i_3] [i_3] = (min(-2098911622246367712, 21));
                    arr_28 [i_3] [i_4] [i_3] = ((~((5334717805344723630 & ((1481737232 ? 13997008036193696470 : 516511429))))));
                }
            }
        }
        arr_29 [i_3] = ((~((-((max(var_1, (arr_19 [i_3] [i_3]))))))));
        arr_30 [i_3 + 1] = ((var_11 | (max(-1584534124, ((68 ? -30452 : 0))))));
    }
    #pragma endscop
}
