/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115972
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] |= ((/* implicit */short) min((((((/* implicit */int) (unsigned short)48522)) & (((/* implicit */int) (short)-30675)))), (((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-82))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)0);
                var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((10260277657146292360ULL) | (((/* implicit */unsigned long long int) -4890532223883085884LL))))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) (short)30675))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4013959709U)), (18446744073709551609ULL)))) ? (((/* implicit */int) (short)-30676)) : (min((((/* implicit */int) max(((unsigned short)15872), (((/* implicit */unsigned short) var_7))))), (((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))));
    var_14 = ((/* implicit */unsigned long long int) var_7);
}
