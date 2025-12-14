/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (((((max(550170286, var_5)) / ((var_4 ? var_6 : 37453))))) ? (((((var_3 >= (arr_2 [i_0])))) >> (413822952 - 413822948))) : (((((min((arr_0 [7] [i_0]), 4294967292))) > -var_10))));
        var_12 = (var_1 * 1828582216);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (min((~413822952), (((~((max((arr_6 [i_0] [i_1] [i_2] [i_0]), (arr_1 [i_0])))))))));
                    var_14 = (((max(((((arr_5 [i_0] [i_0] [i_0] [i_0]) == (arr_0 [14] [14])))), ((127 >> (3881144343 - 3881144315)))))) / (((max(37453, 3881144329)) | ((var_8 ? var_8 : var_6)))));
                    var_15 = ((~(max((137438953471 || 37453), (~53843)))));
                    var_16 = var_10;
                }
            }
        }
    }
    var_17 = var_6;
    var_18 &= ((9007199187632128 ? ((max(34287, -960384241))) : 4294967295));
    var_19 -= 4294967267;
    var_20 -= (max((((((min(22991, var_8))) || (!var_6)))), (max(((4294967295 ? var_10 : var_3)), var_7))));
    #pragma endscop
}
