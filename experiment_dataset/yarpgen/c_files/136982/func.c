/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136982
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 *= ((/* implicit */int) ((min((((/* implicit */int) var_8)), (((((/* implicit */int) (signed char)43)) >> (((1033797752U) - (1033797724U))))))) != ((((!(((/* implicit */_Bool) 3261169535U)))) ? (((/* implicit */int) (signed char)41)) : (((var_6) + (((/* implicit */int) var_8))))))));
    var_11 = var_2;
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = (!(((/* implicit */_Bool) ((arr_0 [i_0 + 1]) & (arr_0 [i_0 + 1])))));
        var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) 3934790830742579787LL)) / (var_4))))), (((min((((/* implicit */long long int) var_8)), (9223372036854775781LL))) - (((/* implicit */long long int) ((int) 1827540331)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)25)) ? (1033797733U) : (1033797728U)));
            arr_8 [i_0] [i_0] = ((/* implicit */signed char) -849472867);
        }
        for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            arr_12 [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 4255524011U)) ? (8755925353746512064ULL) : (((/* implicit */unsigned long long int) var_6)))))))));
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_3))));
        }
        arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_0)) > (((/* implicit */int) var_0)))))))) - (((((((/* implicit */long long int) 313298736)) <= (var_1))) ? (((/* implicit */unsigned long long int) 849472862)) : (131040ULL)))));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 16681972360103171000ULL))));
        arr_18 [i_3] = arr_14 [i_3];
        var_14 -= ((/* implicit */short) (((!(((((/* implicit */int) (unsigned char)2)) > (((/* implicit */int) (signed char)51)))))) ? (((/* implicit */int) arr_15 [i_3])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (510847008U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? ((+(2147483623))) : ((-(var_3)))))));
        arr_19 [i_3] |= ((/* implicit */_Bool) -3934790830742579768LL);
    }
    var_15 = ((/* implicit */unsigned int) max((var_15), (13U)));
    var_16 |= ((/* implicit */unsigned short) max(((-(max((var_4), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_9)))))))));
}
