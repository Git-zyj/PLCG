/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122571
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */short) min(((!(((/* implicit */_Bool) 1181350420)))), ((!(((/* implicit */_Bool) (unsigned char)81))))));
        var_12 = ((/* implicit */_Bool) 134217728U);
        arr_3 [i_0] = ((max((((((/* implicit */_Bool) 599817430)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (4872321437731815221ULL))), (((/* implicit */unsigned long long int) ((short) arr_0 [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_2 [i_0]))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) ((int) max((((long long int) var_10)), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)41909)), (-1557632055)))))));
        arr_7 [i_1] = ((((/* implicit */_Bool) ((unsigned int) (signed char)-63))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (min((arr_4 [12U]), (((/* implicit */unsigned long long int) var_0)))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned char) 6932329039220812446LL);
            var_14 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_6 [i_1])) ^ (((/* implicit */int) arr_6 [i_2])))));
        }
        arr_13 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9881877675723646526ULL))));
        var_15 = ((/* implicit */int) ((unsigned short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 4169756815U)) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_6)), (arr_8 [(signed char)6] [i_1])))))));
    }
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((-1557632055), (((/* implicit */int) var_1)))))))))))));
}
