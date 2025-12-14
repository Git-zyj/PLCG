/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12781
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_11)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_0]))) & (((((/* implicit */_Bool) arr_3 [(unsigned char)11] [i_1] [i_0 + 2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))))))) : (((/* implicit */long long int) var_1))));
                arr_6 [i_0 + 1] = ((/* implicit */unsigned long long int) arr_1 [4] [i_1]);
                var_14 = ((/* implicit */unsigned short) (~(((unsigned long long int) (signed char)52))));
                arr_7 [i_0 - 1] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_1 - 2])) ? (((/* implicit */int) var_6)) : (1067609194))), (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) 13994492844855353969ULL)) ? (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52112))) : (var_10))) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 - 1])))) : (((/* implicit */unsigned long long int) var_4))));
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) arr_11 [4LL] [i_1] [i_2 + 2]);
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((((unsigned long long int) (signed char)-120)), (((/* implicit */unsigned long long int) var_7)))))));
                            var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_8 [i_1] [8U] [i_1] [i_1])) ? (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */long long int) var_7)) : (8033602652853159442LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((_Bool) ((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)60)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) : (((((((/* implicit */_Bool) var_0)) ? (1829915340112932976ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) >> (((((/* implicit */int) var_6)) - (52465)))))));
}
