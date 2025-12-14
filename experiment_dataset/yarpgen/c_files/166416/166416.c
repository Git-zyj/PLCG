/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (((((((~(arr_6 [i_0] [i_1] [i_1] [i_1])))) ? ((524032 ? (arr_4 [i_0] [i_0] [i_2]) : (arr_0 [i_0]))) : ((2 ? 1743745692 : 1023)))) ^ ((((65534 % var_2) || (18446744073709551600 - 18446744073709551609))))));
                    var_13 = (((((arr_2 [i_2] [i_1]) >= (arr_1 [i_0] [i_0]))) ? ((-var_4 ? 18446744073709551593 : (1 >= 1))) : ((((((-8 & (-32767 - 1)))) | (96 * 0))))));
                    var_14 = (max(var_14, (((-1 ? ((-(var_1 & -125))) : (0 & 0))))));
                    arr_7 [6] [i_1] [i_0] = (((((71776119061217280 ? 17522420496927892211 : 130944))) ? (((~(max((arr_1 [i_0] [i_0]), (arr_6 [i_2] [i_2] [15] [i_1])))))) : (((max(6005834570624451834, -1023)) | (-127 - 1)))));
                    var_15 &= (((arr_6 [i_0] [i_0] [i_0] [i_0]) == ((7574881735422490159 ? ((((arr_6 [i_0] [i_0] [i_1] [i_2]) + 2))) : ((0 * (-9223372036854775807 - 1)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_4] [i_4] [i_4] = ((-var_11 ? (arr_11 [i_3] [i_3]) : (65535 % 2)));
                    arr_17 [i_3] [i_3] &= (max((max(2269814212194729984, 1)), ((((arr_12 [i_5 + 1] [i_5 + 2]) < 524160)))));
                }
            }
        }
    }
    #pragma endscop
}
