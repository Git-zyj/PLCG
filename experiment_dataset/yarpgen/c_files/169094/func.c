/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169094
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((unsigned long long int) arr_0 [i_0 - 1])) <= (((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))))));
        var_15 = ((/* implicit */unsigned char) max((((var_11) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */long long int) var_3))));
        arr_3 [i_0] = ((/* implicit */long long int) min((((/* implicit */short) (signed char)-116)), ((short)10030)));
        arr_4 [0U] [0U] &= ((((unsigned long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_1 [i_0]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((var_14), (((/* implicit */unsigned short) var_5)))), (((/* implicit */unsigned short) var_12)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) ((arr_6 [i_1]) % (arr_6 [i_1])));
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) == (((/* implicit */int) arr_5 [i_1]))));
    }
    var_18 = ((/* implicit */int) var_8);
    var_19 = ((/* implicit */signed char) min((var_19), (var_12)));
    var_20 = ((/* implicit */long long int) var_0);
}
