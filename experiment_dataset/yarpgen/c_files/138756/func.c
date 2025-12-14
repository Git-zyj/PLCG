/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138756
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
    var_18 = ((/* implicit */int) var_17);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)191)) | (-1823258686)))), (72057594037927935ULL)))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((_Bool) ((int) 1823258683))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) max((((short) var_2)), (min(((short)-1), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))))));
        var_21 = ((/* implicit */int) min((var_21), (max((var_3), (1823258677)))));
        arr_6 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) | ((+(((((/* implicit */_Bool) -1823258684)) ? (((/* implicit */unsigned long long int) 1823258686)) : (15735535342600342178ULL)))))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (min((((((/* implicit */_Bool) arr_4 [i_1] [7U])) ? (min((var_2), (((/* implicit */unsigned long long int) 8191)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-30)))))))));
    }
    var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(var_2)))))) / (min((((/* implicit */unsigned long long int) var_16)), (((unsigned long long int) var_10)))));
    var_25 = ((/* implicit */short) var_15);
}
