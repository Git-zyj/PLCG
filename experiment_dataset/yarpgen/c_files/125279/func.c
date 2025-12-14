/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125279
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
    var_14 = var_3;
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (unsigned short)6541)) : (((/* implicit */int) (signed char)-72))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_12)))) ? ((+(((/* implicit */int) ((short) (unsigned char)225))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)-50)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */int) (unsigned short)30452)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)148))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */long long int) (signed char)-3)), (max((((/* implicit */long long int) var_1)), (-1407636052326312541LL))))));
        var_17 = min((((((/* implicit */_Bool) (unsigned short)8955)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) : (1555856916427829185ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (212795917U) : (((/* implicit */unsigned int) 1212927894))))));
        var_18 = ((/* implicit */unsigned int) var_8);
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) (unsigned short)59304)) ? (-1742943253) : (((/* implicit */int) (short)13879)))) : (((/* implicit */int) (unsigned short)1016))));
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (10467797467914825675ULL) : (((/* implicit */unsigned long long int) var_13))))) ? ((-(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    }
}
