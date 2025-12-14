/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(var_9, (min((min(11955724717263962828, 1)), (~135))))))));
    var_12 |= (min(8, (min(var_5, ((67108352 ? 337883264 : -8263651802895125588))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((!((((!256) ? -20458 : 67108352)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_13 = ((max(9, (max(67108355, -252)))));
            arr_7 [i_0] [i_1] [i_0] = min(-9, (max(((min(127, 0))), 1923159775)));
            arr_8 [i_0] = ((((11955724717263962828 && -1923159775) ? (max(0, 1073741568)) : (!var_3))));
            var_14 = ((((((248 > (min(127, 1985204165)))))) + 3116314387));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_15 = (((((max(-31, 11955724717263962828))) && 1859653144872925593)));
            var_16 = (max(var_16, ((((13530829941402228415 ? 11732953268382409049 : 235))))));
            var_17 = 65535;
            arr_12 [i_2] [i_2] [i_0] = (min(var_3, (167 > 235)));
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_16 [2] = min((min((((-1369410262 ? 252 : 20))), (min(var_0, -1)))), (((max(202, -265)))));
        arr_17 [8] = (max((min((max(-1, 1913782215)), ((2032741669 ? 2262225626 : -98)))), (((-127 ? 5 : ((max(20, var_2))))))));
        arr_18 [i_3] = (max(((min(var_4, 235))), ((144 ? -4495 : ((min(127, 113)))))));
    }
    var_18 = (max(2032741669, (max(11955724717263962816, 2032741666))));
    #pragma endscop
}
