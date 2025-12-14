/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = max(((((arr_0 [i_1 - 1] [i_1 - 3]) > (arr_0 [i_1 + 1] [i_1])))), (arr_0 [i_1 - 3] [i_1]));
            var_10 &= (!22925);
            arr_8 [i_0] [i_0] = ((((max((((15247 ? var_6 : (arr_6 [i_1] [i_0])))), (var_7 / 10612043263746760779)))) || 31));
        }
        var_11 ^= (arr_1 [i_0]);
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        var_12 = (max(var_12, ((((((!(((1744112324108576556 ? (arr_11 [2] [2]) : -1))))))) * (min(((15254 ? 108 : -4619050539141497083)), (((100 ? -19 : 65535)))))))));
                        var_13 &= var_0;
                        var_14 = (min(var_14, (((~(arr_13 [i_4]))))));
                        arr_18 [i_2] [i_3] [i_2] [i_3] = 255;
                    }
                    var_15 = (((((204 ? 38010 : 119)))) == (max((arr_10 [i_2]), (min(var_9, var_0)))));
                }
            }
        }
    }
    var_16 = (7 * 1);
    #pragma endscop
}
