/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125731
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
    var_18 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_1 + 1] [i_1] [i_0])))) : (((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */unsigned long long int) var_15))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)31907))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 2]))))) : ((-(arr_5 [i_0 + 3] [i_1 + 1] [i_2])))))));
                    arr_10 [i_0] [i_0] [i_2] = var_16;
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 2; i_3 < 15; i_3 += 4) 
    {
        var_20 = ((/* implicit */int) (((~(arr_11 [i_3 + 1]))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3 + 3])) ? (((/* implicit */int) (short)-31907)) : (((/* implicit */int) var_14)))))));
        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (0U)))) == (((unsigned long long int) 1081742476617038468ULL))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (var_4) : (((/* implicit */unsigned long long int) var_15))))))))));
        var_22 = ((/* implicit */_Bool) min((((((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (var_15))))) : (((((/* implicit */_Bool) arr_13 [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_12))))), (((unsigned long long int) 9223372036854775807LL))));
    }
    var_23 = ((/* implicit */short) var_17);
}
