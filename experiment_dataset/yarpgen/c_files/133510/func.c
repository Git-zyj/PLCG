/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133510
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
    var_17 = ((/* implicit */signed char) ((short) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (1600080810U))), (((/* implicit */unsigned int) (signed char)-110)))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) 1779471862)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-15802))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_11) : (var_11)))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((unsigned long long int) ((arr_0 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_6 [i_2] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (((((/* implicit */_Bool) min((arr_8 [i_0] [i_1]), (arr_8 [i_1 + 2] [i_1])))) ? (((/* implicit */long long int) arr_8 [i_0 - 1] [i_0])) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (arr_6 [i_2] [i_1 - 1] [i_0]))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((unsigned long long int) (signed char)-1)) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1]))))))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */int) max((((/* implicit */short) var_1)), (var_13)))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (short)(-32767 - 1))))))), (((var_12) ? (var_11) : (((/* implicit */int) ((signed char) var_3)))))));
}
