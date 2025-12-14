/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= 31741;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 &= 32;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [4] = (max(((984978749107925691 ? -var_19 : (min(-7821702907519880734, var_11)))), (-50 && -984978749107925664)));
                    var_22 = (max(var_22, ((((((arr_2 [i_1] [4]) && (~var_3))) && -28854)))));

                    for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_23 = ((((-(arr_5 [i_2] [i_2] [i_2]))) % (arr_8 [i_3])));
                        arr_10 [i_2] [i_2] = (((((((var_0 & (arr_8 [i_0])))) ? 758 : ((75 ? 984978749107925692 : (arr_1 [i_2]))))) % (((arr_4 [i_0]) ? (1199746146 % -7821702907519880736) : (!75)))));
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_24 *= ((var_11 || ((((arr_4 [i_0 - 2]) ? (arr_4 [i_0 + 2]) : (arr_1 [i_0 + 1]))))));
                        var_25 ^= (((arr_4 [1]) && ((((arr_0 [i_2]) ? (~var_6) : (((31741 && (arr_11 [i_0] [i_0] [i_0] [i_0])))))))));
                        arr_13 [i_2] [7] [i_2] = (((((-((-984978749107925662 ? 31741 : 4277071626496931221))))) && (((31753 * (arr_1 [1]))))));
                    }
                    var_26 = (((((var_18 ? ((((arr_6 [i_0 - 2] [i_0 - 2] [10] [i_0 + 1]) + 240))) : 984978749107925692))) && (((arr_9 [i_2] [i_2] [i_0 + 1] [6]) && (arr_9 [i_2] [i_0] [i_0 - 1] [i_0])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_0] = -7821702907519880734;
                    var_27 -= 212;
                    var_28 = ((!(arr_2 [i_0 - 1] [i_0 - 2])));
                    var_29 = ((-758 && (65535 && var_15)));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_30 = 106;
                    var_31 = ((((min((max((arr_0 [i_6]), 984978749107925701)), -107))) ? ((((arr_3 [i_0]) || ((((arr_15 [i_0] [3] [4] [i_6]) ? -76 : 240)))))) : -107));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    var_32 = (min(var_32, (((arr_8 [i_0]) && (((107 ? (arr_3 [i_7]) : -15384)))))));
                    arr_22 [4] [i_1] [i_7] &= (arr_1 [i_0 - 1]);
                }
                var_33 = (((((-(arr_6 [i_1] [i_0 - 1] [i_0 + 2] [i_0 + 1])))) ? var_8 : ((((arr_18 [i_0 + 1]) || (arr_18 [i_0 - 1]))))));
            }
        }
    }
    var_34 = var_9;
    #pragma endscop
}
