/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106564
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
    var_19 &= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((var_9) || (((/* implicit */_Bool) var_17))))), (max((var_17), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) var_16))));
    var_20 = (-(max((min((1487497771139665379ULL), (((/* implicit */unsigned long long int) 1250876879213876760LL)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)221))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned long long int) ((((arr_0 [(_Bool)1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)-22)))) : (max((var_3), (((/* implicit */long long int) (short)-7136)))))) < (((/* implicit */long long int) max(((~(2130706432))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 3656664177769621783ULL))))))))));
                    var_22 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_3 [i_2 + 1])) == (((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                    arr_8 [(unsigned char)1] [(unsigned char)1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (((~(arr_7 [i_2] [i_0] [i_0] [i_0]))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))))))) < (min((((/* implicit */long long int) max((arr_6 [i_2]), (((/* implicit */unsigned short) arr_3 [i_1]))))), (min((arr_5 [i_2 + 1]), (((/* implicit */long long int) var_1))))))));
                    var_23 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) arr_7 [i_2 + 1] [i_1] [(signed char)7] [i_2 + 1])) : ((+(arr_2 [i_2 + 1]))))))));
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_14)))))) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7129)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (var_13))))) : (var_12))))));
}
