/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((var_10 ? 112 : 4953589958073947819))) ? (3039987152208620224 + 11242) : (max(var_9, var_7))))) ? var_4 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [9] [i_1] &= ((11242 ? 18446744073709551615 : -10));
                arr_7 [i_0 - 1] [i_0] = (0 && 9);
            }
        }
    }
    var_12 -= (((((-808854083874844209 ? 0 : -58))) ? var_3 : (max(((var_1 ? var_5 : -15851)), (var_0 != 974632466)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                var_13 = ((((((max(1023, var_10))) && (((var_8 ? 808854083874844209 : 205))))) ? (!18151027162264873880) : (max(var_10, (((arr_12 [i_2]) ? -47 : 0))))));
                var_14 = 7630972173184256021;
                var_15 = ((((((((max(var_3, -96)))) * 18446744073709551615))) ? ((((min(1099511627760, var_7))) % ((-(arr_11 [i_2] [i_2] [i_3]))))) : -23267));
            }
        }
    }
    #pragma endscop
}
