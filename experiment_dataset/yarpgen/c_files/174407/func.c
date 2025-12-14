/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174407
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_1 [i_0]))))) ? (((var_16) | (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_8 [1] [i_2])))))));
                    var_19 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((18446744073709551610ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ^ (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 - 3] [i_0 + 1]))))) && (((/* implicit */_Bool) arr_7 [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 - 4]))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_8 [i_1] [i_0 - 3]))) / (arr_4 [1] [i_0 - 1] [i_0 - 1]))))));
                    arr_9 [i_0] [i_1] [i_2] = (((((_Bool)1) ? (arr_8 [i_0 - 4] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0 - 1] [i_0 - 3]) < (arr_8 [i_0 - 1] [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)112)), ((unsigned char)169)))))) < (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 17788093850957364862ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (unsigned char)130)) : (1747690318)))), (((((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned char)205)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) : (var_12)))));
}
