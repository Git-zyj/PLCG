/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176714
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) (_Bool)0);
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [(unsigned char)18]))));
    }
    var_20 = ((/* implicit */signed char) min((min((((/* implicit */long long int) min((((/* implicit */int) (short)-24486)), (-585203476)))), (((((/* implicit */_Bool) -764515520)) ? (((/* implicit */long long int) var_7)) : (2348431658381587223LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (var_0))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 40184676U)) > (7279673353373339510ULL))))));
}
