/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144027
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_10)) % (((((/* implicit */_Bool) 2435833268U)) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_12) % (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (1859134027U)))) : ((-(((/* implicit */int) var_13))))));
    }
    var_18 = ((int) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_19 = ((/* implicit */long long int) 2756738039U);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((long long int) max(((~(((/* implicit */int) (unsigned short)3)))), (((/* implicit */int) var_4))))))));
    }
}
