/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142916
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
    var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (18446744073709551614ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_6 [i_0 + 1])))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (15ULL) : (var_4)))));
                var_13 = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0 + 1]))))), (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)1844)), (2014484108)))) ? (max((72057592964186112ULL), (((/* implicit */unsigned long long int) 388724371U)))) : (arr_0 [i_0]))));
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3)))))), (((/* implicit */unsigned long long int) var_1))));
}
