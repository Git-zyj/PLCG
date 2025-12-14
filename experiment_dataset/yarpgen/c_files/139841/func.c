/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139841
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])))), (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 1])))))))));
        var_18 ^= ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_2 [(short)1])))))))) ? (((/* implicit */int) min((var_4), (arr_1 [i_0 - 1] [i_0 - 1])))) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0] [i_0 - 1])), (var_8)))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 3])) : (max((var_16), (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))))));
    }
    var_19 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) var_15)), (max((0LL), (((/* implicit */long long int) var_3))))))));
    /* LoopSeq 1 */
    for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */int) (((+(((/* implicit */int) var_2)))) > ((+(arr_5 [i_1 + 1] [i_1 - 1])))))) : (((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [10] [i_1]))))) : (max((((/* implicit */int) var_7)), (arr_5 [i_1] [i_1 - 1]))))))))));
        var_21 |= ((signed char) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) (signed char)-93))));
    }
    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
}
