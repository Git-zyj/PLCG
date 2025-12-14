/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139152
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) -3512659537333070401LL))));
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-97)) ? (arr_4 [i_0 + 2] [i_0 + 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ^ (min((((/* implicit */unsigned long long int) (unsigned char)1)), (0ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) var_2))))))))))))));
                var_12 = ((/* implicit */int) min((var_12), ((+(((/* implicit */int) var_0))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) var_4);
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)3840))))))), ((((~(((/* implicit */int) (short)-1)))) ^ (((/* implicit */int) arr_5 [i_1] [i_0 - 1] [i_0])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((var_7), (((/* implicit */signed char) var_1))))) : (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_3))))), ((unsigned char)255))))));
}
