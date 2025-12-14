/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((2621604418133272472 & ((max(37719, 451869005)))))) & var_11));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_18 = var_8;
                        var_19 = (((max((arr_3 [i_1]), (arr_3 [i_2 + 1]))) == ((var_5 ? (arr_3 [i_3]) : (arr_3 [i_1])))));
                        arr_8 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = ((((max(-5447817894609612990, var_4))) ? (((!((max((arr_6 [1] [15] [5] [5] [15]), (arr_1 [i_0]))))))) : (~138)));
                        var_20 -= (var_13 ? (~var_1) : ((((var_7 != (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2]))))));
                    }
                }
            }
        }
        var_21 += (max(-123, ((~(((var_0 != (arr_5 [i_0]))))))));
        arr_9 [i_0] [i_0] = var_2;
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_22 = 128;
        var_23 ^= (arr_12 [i_4]);
        var_24 *= var_4;
    }
    var_25 &= (+-3744114734435078084);
    var_26 = var_7;
    #pragma endscop
}
