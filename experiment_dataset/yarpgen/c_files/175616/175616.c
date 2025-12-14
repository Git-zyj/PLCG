/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_1;
    var_11 = 1134225055;
    var_12 = ((2141 >> ((((var_9 ? (~127) : (~19456))) + 135))));
    var_13 = -19285;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (64 >= -6303);
        var_14 = var_0;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_15 += (min(((((4157882693 ? -83 : 6071)))), (max(55, 3676887839922527775))));
                        var_16 = ((+((0 ? (arr_3 [i_2 + 2] [i_3 + 2]) : ((var_5 ? 20128 : -4184518387782511171))))));
                        var_17 = ((var_1 ? 1 : ((1344461135 ? var_4 : (arr_9 [i_1] [i_1 + 4])))));
                        var_18 -= (arr_9 [i_1] [i_2]);
                    }
                }
            }
        }
        arr_12 [i_0] = (-51 / -9);
        var_19 = (max(var_19, ((((max(-25489, ((-24386 ? 1262358088 : 9)))) << (((((3502006447 ? 1 : 6667147747352647616))) ? 14518 : (arr_0 [i_0] [i_0]))))))));
    }
    #pragma endscop
}
