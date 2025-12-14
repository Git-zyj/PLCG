/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175629
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
    var_16 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((int) arr_1 [(signed char)17]));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (arr_2 [i_0] [i_0])))) ? (-2147483621) : ((~(((/* implicit */int) (_Bool)0))))));
        arr_5 [i_0] [i_0 + 2] = ((/* implicit */unsigned char) ((16317005046226352678ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_17 &= ((/* implicit */unsigned long long int) (signed char)127);
}
