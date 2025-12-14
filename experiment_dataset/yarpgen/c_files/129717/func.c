/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129717
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
    var_14 += ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (max((var_2), (min((var_2), (((/* implicit */unsigned long long int) var_13))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_12)), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (unsigned short)7588)))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((/* implicit */unsigned long long int) max(((unsigned short)57941), (((/* implicit */unsigned short) (_Bool)1))))), (min((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)1302)))), (((/* implicit */unsigned long long int) min(((unsigned short)1310), ((unsigned short)64234)))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        var_16 -= ((/* implicit */unsigned int) (unsigned short)64227);
    }
    var_17 = var_8;
}
