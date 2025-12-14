/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181157
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
    var_15 = var_13;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(max((2773760157U), (((/* implicit */unsigned int) -727026790)))))))));
                arr_5 [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))), (((18446744073709551615ULL) << (((9223372036854775786LL) - (9223372036854775774LL))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((unsigned long long int) var_4));
}
