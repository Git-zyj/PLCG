/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166665
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((4666320256086290230ULL) % ((-(var_8))))))));
        arr_2 [i_0 + 1] = (short)32767;
        arr_3 [i_0 - 1] [(short)0] = min((max((var_3), (var_0))), (arr_1 [i_0 - 1]));
        var_17 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (short)-32767)), (min((arr_0 [i_0]), (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) var_1))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_18 = max(((short)-32767), ((short)-32760));
        var_19 *= ((/* implicit */short) max((((/* implicit */int) arr_5 [i_1])), ((~(((/* implicit */int) var_10))))));
        var_20 = ((/* implicit */unsigned long long int) ((short) var_12));
    }
    var_21 = ((/* implicit */unsigned long long int) var_9);
    var_22 -= ((/* implicit */unsigned long long int) (signed char)-2);
}
