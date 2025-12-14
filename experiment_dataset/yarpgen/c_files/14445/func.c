/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14445
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
    var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (var_12) : ((~(max((var_8), (((/* implicit */unsigned long long int) var_11)))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) >= (var_6)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_1]))))), (((((unsigned long long int) 385284365U)) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0]))) + (1368375978U))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_3])), (2926591315U)))) ? (1368376003U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) < (((/* implicit */int) (short)32756))))))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [4LL]))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23456))) - (18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)13790)))) - (2926591321U)))) : ((-(((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))) : (var_6)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) (signed char)118);
}
