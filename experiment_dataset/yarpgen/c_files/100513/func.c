/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100513
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
    var_17 = ((((((/* implicit */_Bool) 15048651338700388469ULL)) ? (9724484174117694003ULL) : (259624039964642951ULL))) ^ (var_9));
    var_18 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_20 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]);
                var_21 = arr_1 [(signed char)1];
            }
        } 
    } 
}
