/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169427
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
    var_10 |= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (signed char)127))))), (0ULL)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [9U] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_0 [i_0])) - (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) & (((/* implicit */unsigned long long int) (((((_Bool)0) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) + (((/* implicit */long long int) 2493666659U)))))));
        arr_4 [i_0] [(unsigned short)4] = ((/* implicit */long long int) var_4);
    }
    var_11 = ((/* implicit */long long int) (+(var_1)));
}
