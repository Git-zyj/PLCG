/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (31 ? -1 : 88);

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_0 [i_0 - 4]);
        arr_3 [i_0 - 4] = (((12 ? -1 : 4)) ^ var_10);
        var_18 -= (min((((((215 ? var_10 : (arr_0 [12])))) ? 1 : (arr_0 [i_0]))), (((var_3 < ((1 ? 18049 : var_3)))))));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 = ((((-((-(arr_0 [i_1]))))) ^ (arr_5 [i_1 - 4] [i_1])));
        var_20 += ((((((var_3 / 220) > (max((arr_5 [i_1 - 3] [14]), var_13))))) < ((-((1 >> (-119 + 119)))))));
        arr_6 [i_1 - 3] [i_1] = (arr_4 [8] [i_1 - 4]);

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            var_21 = 18251162462440795414;
            var_22 = ((65535 ? 708163505 : 16204628106337090965));
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_11 [i_3] [i_3 - 1] = (min((((arr_9 [i_3 + 2] [i_1 - 4] [8]) % (arr_9 [i_3 + 1] [i_1 - 3] [i_3 + 1]))), ((((arr_7 [i_3 + 2]) < 42041)))));
            arr_12 [i_1] [i_1 - 4] [i_3] = var_2;
            var_23 = (((arr_2 [i_1 - 1]) / var_3));
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_24 *= 215;
            var_25 = var_13;
            var_26 = (((((min((arr_4 [i_1 + 1] [i_1 - 3]), var_6)))) - ((2242115967372460650 ? 47486 : (arr_13 [i_4] [i_4] [i_4])))));
        }
    }
    var_27 = var_2;
    #pragma endscop
}
