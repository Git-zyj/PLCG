/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180248
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
    var_11 = ((/* implicit */_Bool) ((((((/* implicit */long long int) var_2)) + (7518404154924262545LL))) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_12 = ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)81)), (var_0))))) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))) + (var_4)))))), (var_0)));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((((int) (-9223372036854775807LL - 1LL))) > (((/* implicit */int) ((unsigned char) ((98728998174742256LL) >> (((((/* implicit */int) (unsigned char)94)) - (56)))))))));
        var_14 = ((/* implicit */unsigned short) var_2);
    }
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (unsigned char)252)) % (var_7)))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_6)) > (1103564622928373514ULL))) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 2]))) / (((long long int) (unsigned char)192)))))))));
        arr_5 [i_1] = ((/* implicit */_Bool) max((arr_3 [i_1 + 1]), (((arr_3 [i_1 - 1]) / (((/* implicit */long long int) var_5))))));
    }
}
