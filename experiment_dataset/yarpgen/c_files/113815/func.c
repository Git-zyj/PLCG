/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113815
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) var_4)) <= (min((var_6), (((/* implicit */long long int) var_4)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 |= var_0;
        arr_2 [i_0] |= ((/* implicit */signed char) var_1);
        var_19 = ((((((/* implicit */_Bool) 0LL)) ? (var_16) : (arr_0 [i_0]))) & (((int) var_14)));
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (-1370605909));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_20 = ((/* implicit */int) (~(8852401325397828149LL)));
        arr_7 [i_1] = ((/* implicit */signed char) var_1);
    }
    var_21 = (+(((((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) var_8))))) << (((((/* implicit */int) (signed char)63)) - (57))))));
}
