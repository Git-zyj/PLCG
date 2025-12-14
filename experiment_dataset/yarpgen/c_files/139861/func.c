/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139861
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) (_Bool)1)) : (-1951980306)))))) ? (var_16) : (((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_19 *= ((/* implicit */short) 14679873850630625787ULL);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_15);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) arr_3 [(_Bool)1])))))))) << (((((/* implicit */int) arr_3 [i_1])) + (30250)))));
        arr_6 [i_1] [i_1] = max(((_Bool)1), (arr_4 [(unsigned short)5] [i_1]));
    }
    var_20 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [2LL])) : (((((/* implicit */_Bool) min((arr_7 [i_2]), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) (_Bool)1)) : (1011332159)))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [(unsigned short)14])) ^ (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) 1538224254)) ? (var_11) : (var_9)))))));
    }
    var_23 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_15)) >= (((/* implicit */int) var_2)))) ? (((/* implicit */long long int) ((int) var_0))) : (var_8))) - (var_8)));
}
