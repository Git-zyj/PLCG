/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128480
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
    var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2900649411U)) ? (max((var_6), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) 16383U))));
    var_12 = ((/* implicit */signed char) var_5);
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_4))))), (min((1932239309U), (((/* implicit */unsigned int) var_9))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (2362727981U)))) || (((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) min((((2362727982U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5219))))), (((max((arr_1 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned int) var_8)))) << (((((/* implicit */int) max(((unsigned short)43766), (((/* implicit */unsigned short) (unsigned char)0))))) - (43752)))))));
                var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0])) ? (arr_1 [i_1 + 1] [i_1]) : (2362727986U))), (((/* implicit */unsigned int) max(((unsigned char)245), (((/* implicit */unsigned char) (signed char)-103)))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (max((((/* implicit */unsigned int) var_0)), (arr_1 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((min((var_6), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (unsigned char)252))))));
                var_17 ^= ((/* implicit */signed char) ((max((max((2362727987U), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (var_8)))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)38))))) : (((/* implicit */int) arr_3 [5LL] [5LL])))))));
            }
        } 
    } 
}
