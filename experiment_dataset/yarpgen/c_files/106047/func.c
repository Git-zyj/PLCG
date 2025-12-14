/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106047
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) >= (max((((/* implicit */unsigned long long int) var_10)), (15782959205521085621ULL)))))))))));
    var_21 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_22 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (short)15525))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [(unsigned short)13]))) : (2663784868188465994ULL))))));
                var_23 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) arr_4 [(short)11] [(short)11])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))), (9193307638054648806ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))));
                var_24 = (unsigned short)51158;
                var_25 = min((arr_0 [i_0]), (((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0]))));
                var_26 += ((unsigned short) ((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) (unsigned char)82))));
            }
        } 
    } 
}
