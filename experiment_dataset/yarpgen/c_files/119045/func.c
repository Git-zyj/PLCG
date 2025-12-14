/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119045
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
    var_15 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) (short)-30871)))));
        var_17 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) > (min((var_2), (((/* implicit */unsigned int) var_7)))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))), (((((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) + (((var_10) & (var_13))))))))));
        var_19 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (short)30871)))) + (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (var_4))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_1 [i_1 + 3] [i_1 + 3])))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_1]))))) == (max((var_9), (((/* implicit */unsigned long long int) arr_5 [i_1]))))))));
        var_21 = ((/* implicit */unsigned long long int) ((min((var_0), (((/* implicit */unsigned long long int) arr_6 [i_1 + 1])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13203))))))));
    }
    var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((+(((((/* implicit */_Bool) 830924621)) ? (((/* implicit */int) (short)30870)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_14))));
}
