/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (max((~52712), (~var_4)));
                var_16 *= ((28464 << (179 - 165)));
            }
        }
    }
    var_17 = (min(var_17, -var_3));

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_18 = (min((arr_4 [12] [i_2] [14]), (((arr_1 [i_2]) ? var_6 : (arr_1 [i_2])))));

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_19 = -24384;

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_20 = ((((((min(-110, var_14))) ? ((min(1, 1))) : (((11712 > (arr_6 [i_3] [i_3] [14])))))) + ((min((arr_1 [i_2]), (arr_1 [i_4]))))));
                var_21 = ((12823 > (arr_13 [4] [i_3] [i_4])));
            }
            for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    var_22 = (max(((min((arr_15 [i_5] [i_5] [4]), (arr_3 [i_5])))), ((((min(var_12, var_8))) ? ((min(255, var_11))) : -2384254945412561495))));
                    var_23 = (min(((-(arr_16 [i_5 + 1] [4]))), ((min((arr_18 [i_5 + 1] [i_5 + 1] [i_5]), (arr_18 [i_5 + 1] [i_5 + 1] [i_5]))))));
                    arr_19 [i_3] |= (((arr_17 [i_3] [i_5] [i_3] [i_3]) ? (((max(var_5, (var_3 < 1))))) : (max(5, 52712))));
                }
                arr_20 [1] [5] [i_5] = (arr_12 [i_5] [i_2]);
            }
            for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
            {
                var_24 = (min(var_24, (((~(((-87 + 2147483647) >> (var_6 + 65))))))));
                var_25 = (((arr_11 [i_2] [2]) | 44600));
                var_26 = ((((max(4064, -87))) <= (((max((arr_9 [i_2]), var_3))))));
            }
            var_27 = (!96);
            var_28 = (max(var_28, ((max((min(1, 159)), 127)))));
        }
        var_29 = -var_6;
    }
    #pragma endscop
}
