/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 7264772141167192498;
    var_20 = (max(((-5656918823374304050 * (!15970048454278846086))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_21 ^= var_12;

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_22 = (!(((-(~var_1)))));
                    arr_8 [i_0] [4] [i_0] [4] = var_6;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [4] = ((~(min(var_14, (arr_2 [i_0])))));
                    arr_12 [13] [i_1] [i_3] = (~7264772141167192502);
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_23 ^= 2878505231279144068;
                    var_24 = (((arr_0 [i_1]) & ((+((((arr_3 [i_0]) < (arr_9 [13] [i_1] [i_0]))))))));
                    arr_16 [21] = (~(max((max((arr_9 [i_0] [11] [i_4]), (arr_13 [i_4] [2]))), ((((arr_2 [i_0]) & (arr_15 [i_4])))))));
                    var_25 = (max((!var_3), ((((!(arr_0 [i_1])))))));
                }
                var_26 = var_2;
                var_27 = (max(var_27, 3264784890331361147));
            }
        }
    }
    var_28 = (min(7264772141167192506, -29460));
    #pragma endscop
}
