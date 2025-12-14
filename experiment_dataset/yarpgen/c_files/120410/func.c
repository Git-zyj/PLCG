/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120410
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
    var_15 = ((((/* implicit */_Bool) 33554431)) ? (-8779163376291289563LL) : (((/* implicit */long long int) -1398877750)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) 11714155715464363501ULL);
                    var_17 |= ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0 - 1])) != (((/* implicit */int) (unsigned short)50012)))) ? (((/* implicit */int) ((-8779163376291289562LL) == (((/* implicit */long long int) arr_1 [i_1 - 2] [i_0 + 1]))))) : (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_1)))))));
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) -5264654535611878098LL)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (unsigned short)4))))) * (arr_1 [i_0 + 1] [i_1]))) << (min((3397808105U), (((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_1 + 1]))))));
                    arr_7 [i_0 - 1] [i_1 - 1] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_6)), (((6131353748158925653ULL) * (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0] [i_0 + 1])))))), (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                    var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 8779163376291289576LL)) ? (arr_3 [i_0 + 1] [i_0 - 1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26311))))), (((arr_3 [i_0 + 1] [i_0 - 1] [i_1 - 2]) % (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((-9144431434236963039LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    var_21 = ((/* implicit */short) var_1);
    var_22 = ((/* implicit */int) var_11);
}
