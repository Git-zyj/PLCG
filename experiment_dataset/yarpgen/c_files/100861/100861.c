/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [14] [i_1] [i_0 - 2] |= 1148417904979476480;

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_12 = -25;
                    arr_9 [i_2] [i_0] [i_0 - 3] = (min(((min(((var_0 ? 64810 : (arr_0 [i_0]))), 726))), (max(((max((-32767 - 1), (arr_3 [i_0] [8] [i_2])))), (min(13981168675100692239, 9175))))));
                    var_13 = (min(var_13, (arr_7 [i_0] [10] [i_2] [i_0])));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_14 |= ((-((((!(arr_8 [18] [18]))) ? 67 : (arr_8 [1] [1])))));
                    arr_13 [i_3] [i_3] [i_0] = ((((arr_12 [i_0 - 1] [i_0] [i_0 - 2]) ? (arr_12 [i_0 - 2] [i_0] [i_0 + 1]) : var_4)));
                    arr_14 [i_0 - 2] [i_0] [1] [i_3] = ((((max(56361, (max((arr_6 [0]), 163))))) ? (min(var_8, (64810 / 9197930823012845585))) : (arr_7 [i_0] [i_0] [7] [1])));
                    var_15 = ((var_10 ? (max((max(var_11, 212476545)), -218)) : (((255 ? -29774 : -1)))));
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_16 *= (((((((!218) ? (arr_10 [i_0 - 1]) : -29774)) + 9223372036854775807)) << (((max(((min(127, (arr_8 [0] [10])))), ((190 ? 53481 : -643765274)))) - 53481))));
                    var_17 = (((((((-29774 | var_11) > ((max(26169, (arr_8 [i_0] [i_0])))))))) / (min(((((arr_15 [i_0 + 1] [i_1] [10]) ? 13 : 34345))), (min(1, (arr_0 [i_4])))))));
                    arr_18 [i_0] = -32756;
                }
                var_18 = 2630997448;
                arr_19 [16] [i_1] |= 4;
            }
        }
    }
    var_19 *= (((((-var_7 ? (!0) : var_8))) ? var_7 : var_7));
    var_20 *= ((812117437 ? ((1 ? var_2 : (min(1292196870980933329, -7772653175807513943)))) : (((max(1, (min(var_2, var_3))))))));
    #pragma endscop
}
