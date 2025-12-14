/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172512
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
    var_15 = ((/* implicit */unsigned short) var_11);
    var_16 = ((/* implicit */long long int) var_10);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_18 = arr_1 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) (((!(arr_0 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) 1174057214U)) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (max((var_4), (((/* implicit */unsigned long long int) 1174057221U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))))))));
        var_20 *= ((/* implicit */_Bool) ((unsigned long long int) 1050729484));
    }
    var_21 *= ((/* implicit */unsigned short) ((var_4) == (((/* implicit */unsigned long long int) var_13))));
}
