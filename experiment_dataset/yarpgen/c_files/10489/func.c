/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10489
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (min((227540604890082839ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (+(1026004590U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_17)))) ? ((-(6201026148317752994LL))) : (((((/* implicit */long long int) arr_6 [i_0] [7U])) ^ (2383302558484519627LL)))))) : (var_19)));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned int) max((arr_0 [i_1 + 1]), (arr_0 [i_1 - 1])))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-((((+(arr_3 [12U]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(unsigned char)4] [(unsigned char)4])) ? (arr_5 [(unsigned short)14] [(unsigned char)22] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [3ULL] [i_0 - 1] [i_1] [(unsigned short)7])))))))))))));
            }
        } 
    } 
    var_23 = (+((~(((var_13) >> (((1026004590U) - (1026004563U))))))));
}
