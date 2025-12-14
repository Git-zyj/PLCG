/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111754
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
    var_17 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)63));
        arr_3 [1ULL] [(unsigned char)2] = arr_2 [i_0];
    }
    for (long long int i_1 = 4; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_13)) ? (arr_4 [(unsigned char)8] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))));
        arr_7 [i_1] = max((4857179201981186638LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 4] [i_1 - 2]))))));
        arr_8 [i_1] = ((/* implicit */int) var_15);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((max((arr_1 [i_2]), (arr_1 [i_2]))), (((/* implicit */int) max((((unsigned short) arr_10 [i_2])), (var_16))))));
        var_20 = ((int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [10U])), (4857179201981186638LL)))), (max((var_14), (((/* implicit */unsigned long long int) arr_1 [i_2]))))));
    }
    var_21 = ((/* implicit */long long int) max((var_4), (((/* implicit */short) var_12))));
    var_22 = ((/* implicit */int) var_5);
}
