/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163616
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((17583596109824LL) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))));
                var_15 = ((long long int) ((unsigned int) -6860619808088606825LL));
                var_16 = ((/* implicit */_Bool) ((unsigned int) ((arr_1 [i_0 - 1]) | (arr_1 [i_0 + 1]))));
                var_17 -= ((/* implicit */long long int) (unsigned char)225);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((short) (unsigned char)58))) && (((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
}
