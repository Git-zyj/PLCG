/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_17 = arr_1 [i_0] [i_0];
        arr_2 [i_0] = (-((-8744187215484261276 ? -3557458096983897795 : ((((!(arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_18 += (max((max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))), (((arr_0 [2]) / 140728898420736))));
        var_19 = ((!(arr_1 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_20 |= 18105325951325294042;
                    var_21 *= ((!(((~(18446603344811130900 || var_16))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    {
                        var_22 += ((((max((arr_6 [4] [1]), (~18446603344811130879)))) || (((((((arr_1 [i_5] [7]) < (arr_8 [i_2] [i_5]))))) >= (arr_16 [i_7 + 1])))));
                        var_23 = ((~(max(((min((arr_14 [i_2] [i_2] [i_2]), 63))), 192))));
                    }
                }
            }
        }
    }
    var_24 *= var_1;
    var_25 = (((var_14 / 124) && ((((((9168739991196356694 ? 124 : 210))) / (~10373832665124638436))))));
    var_26 = (~(max((max(100, 140728898420736)), (~47))));
    var_27 |= ((((min((~var_16), (~174)))) & var_7));
    #pragma endscop
}
