/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((!(((16 ? 5980245708907686840 : 5980245708907686854)))))), ((var_12 ? ((var_7 ? 4344281506165688894 : var_8)) : ((0 ? var_4 : 5980245708907686840))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((7 ? (-2147483647 - 1) : 15065));
                arr_8 [i_0] &= ((var_6 ? ((((5980245708907686860 || (arr_1 [i_0] [i_0]))))) : (((arr_3 [i_0]) ? (max(65535, 5980245708907686840)) : ((((arr_6 [i_0] [i_1]) & 107)))))));
                arr_9 [i_0] [i_0] [i_0] = 7933;
                arr_10 [0] [0] [i_1] = (((((((38780 >> (-5980245708907686841 + 5980245708907686854))) << (((max(-5980245708907686841, (arr_0 [i_0] [i_1]))) - 38860))))) ? ((+(((-6183704915488230955 + 9223372036854775807) >> (var_10 - 3358777114283593495))))) : (((((((-4129 ? var_13 : var_16))) || (((var_1 ? (arr_0 [i_0] [i_1]) : -5980245708907686841)))))))));
            }
        }
    }
    #pragma endscop
}
