/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160190
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
    var_14 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_11)) | ((~(((/* implicit */int) var_3)))))));
    var_15 = max((((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_12))))) <= (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)30))))))), (var_5));
    var_16 &= ((/* implicit */long long int) max((((/* implicit */int) var_13)), ((+(((var_8) - (((/* implicit */int) var_6))))))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) min((7341952440248291174LL), (((/* implicit */long long int) (short)10988)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_18 = ((((((/* implicit */unsigned long long int) var_7)) / (arr_3 [i_1 - 1] [i_0 + 1]))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1897891951U)))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_0] [i_1] [i_2] = max((((((/* implicit */_Bool) ((arr_4 [(short)2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 3]))) : (min((((/* implicit */unsigned long long int) (short)32749)), (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_2])))))) ? (max((((/* implicit */int) (signed char)7)), (var_8))) : (((/* implicit */int) var_11))))));
                }
            } 
        } 
    } 
}
