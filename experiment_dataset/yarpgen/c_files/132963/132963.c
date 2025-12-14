/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_3));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_11 = ((((((arr_5 [i_0 - 2] [i_0 + 2] [i_1 + 3] [i_0 + 2]) | (1 != var_2)))) ? ((max(48711, var_2))) : ((var_3 ? var_8 : 2708542873))));
                    var_12 = ((((((((var_3 ? -9007199254740992 : -6675631044405247521))) ? (3763809826 != var_1) : ((65531 ? 3110554687425325898 : (arr_3 [i_0] [i_2])))))) ? ((((min(1537447297, 33292288))) * (max(var_1, (arr_2 [i_0 - 3] [11] [13]))))) : ((((min((arr_5 [1] [i_1] [i_1] [1]), var_2)) >> (((var_5 | var_5) - 160)))))));
                    var_13 = ((((((((arr_2 [13] [i_1] [12]) + 1537447297)) & ((min(2757519981, 1)))))) ? (((((arr_0 [i_0 - 1] [13]) == var_7)) ? (max(var_0, 1)) : ((-16152 ? var_0 : var_6)))) : ((((arr_0 [i_1 + 1] [i_0 + 2]) && (arr_0 [i_1 + 1] [i_0 - 2]))))));
                }
                arr_7 [8] [8] = ((((max(((max(-90, var_5))), (-9007199254740992 & 1023)))) ? (max(18446744073709551615, (((26405 ? 33292288 : 64))))) : (((((var_6 != var_0) != (min(-33292289, (arr_2 [i_1 + 3] [0] [i_1 + 3])))))))));
            }
        }
    }
    var_14 = (max(((var_0 ? var_9 : var_7)), (max((max(var_3, var_4)), ((max(var_1, 4678)))))));
    #pragma endscop
}
