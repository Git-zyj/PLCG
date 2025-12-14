/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123398
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_11 = -1289194945;
        var_12 = ((/* implicit */unsigned short) min(((+((~(arr_0 [i_0]))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
    }
    for (int i_1 = 3; i_1 < 22; i_1 += 4) 
    {
        var_13 = ((/* implicit */signed char) max((max((arr_3 [i_1]), (arr_3 [i_1]))), (((/* implicit */int) (_Bool)1))));
        var_14 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1]))))))));
    }
    var_15 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_4)), (var_7)));
    var_16 += ((/* implicit */short) var_5);
}
