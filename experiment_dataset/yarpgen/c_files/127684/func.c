/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127684
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
    var_16 += ((/* implicit */short) ((var_11) > (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) 36024398972452864ULL))));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)44856)) ? (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 36024398972452864ULL)) ? (8633182017143738603ULL) : (((/* implicit */unsigned long long int) 1687393279)))) : (18410719674737098752ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) && (((/* implicit */_Bool) (short)32767))))))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 - 2]))))) ? ((~(((/* implicit */int) (short)32767)))) : (((/* implicit */int) (((+(0U))) >= ((-(1824347306U))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned long long int) 192315865U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((1687393279) != (-1731619131))))) - (((unsigned long long int) (signed char)-89))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 536870880)) ? (((/* implicit */int) (_Bool)0)) : (1162600168))) : (((((/* implicit */_Bool) 1379125847)) ? (2048115415) : (-1731619131)))))) ? (var_14) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (3272694035U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
}
