/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179426
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((arr_1 [i_0]), (min((arr_1 [i_0 + 1]), (arr_0 [i_0] [i_0 + 1])))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned char) (signed char)15)), ((unsigned char)238))), (((unsigned char) var_8)))))));
        arr_5 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_6 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
    }
    var_17 |= ((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((signed char) var_0)))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (signed char)-15))));
    var_19 = ((/* implicit */signed char) ((unsigned long long int) var_10));
    var_20 = ((/* implicit */long long int) var_13);
}
