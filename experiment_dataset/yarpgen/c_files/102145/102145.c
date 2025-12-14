/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((4 & 49418) != var_18))) % var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 |= 19;
                arr_6 [13] [13] = ((-100 ? 6290277291823393142 : 250));
                arr_7 [i_0] [i_1] |= ((((((arr_0 [i_0]) != var_0))) & (max((arr_0 [i_1]), var_2))));
                var_21 += ((var_16 > ((-55 & (((var_18 || (arr_0 [i_1]))))))));
                var_22 = var_7;
            }
        }
    }
    var_23 = var_5;
    var_24 *= (((min(6290277291823393132, (max(-6290277291823393132, 55)))) >> (var_14 + 90)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                var_25 |= (((((31 >> (239 - 220)))) ? (((arr_10 [14]) ? (arr_10 [14]) : (arr_10 [12]))) : ((1373550241 * (arr_10 [10])))));
                arr_13 [12] |= (((~((var_14 ^ (arr_8 [i_3]))))));
            }
        }
    }
    #pragma endscop
}
