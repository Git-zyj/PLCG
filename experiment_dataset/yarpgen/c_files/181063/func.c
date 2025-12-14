/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181063
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
    var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)8)))))) ? (((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        arr_10 [11LL] [(_Bool)1] [0LL] [i_2] [1LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_0 [i_3]))) ? (((/* implicit */int) ((signed char) var_14))) : (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 4])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) : (((((long long int) var_11)) & (((/* implicit */long long int) max((arr_5 [i_0 + 4] [2ULL] [i_2]), (((/* implicit */int) (signed char)-64))))))));
                        var_18 += ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_0] [(_Bool)1]))) : (arr_9 [10LL] [i_1] [i_3])))))));
                    }
                    arr_11 [5ULL] [i_2] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 3] [i_2] [i_2]))))), (((/* implicit */long long int) ((arr_8 [i_0 + 3] [i_2] [i_2]) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2])) : (var_2))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) (((-9223372036854775807LL - 1LL)) / (((var_3) & (((/* implicit */long long int) var_2)))))));
    var_20 = ((/* implicit */long long int) var_9);
}
