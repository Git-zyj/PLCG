/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187675
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
    var_10 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((arr_0 [i_0] [i_0]) << (((((var_6) + (1456509879848713944LL))) - (8LL))))) <= (((int) arr_0 [i_0] [i_0]))))) <= (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 1152921504606846976LL)) || (((/* implicit */_Bool) (short)-24868))))) >= (arr_0 [i_0] [i_0]))))));
    }
    var_12 = ((/* implicit */unsigned char) (-(((int) min((((/* implicit */long long int) var_4)), (-1393915100263510811LL))))));
}
