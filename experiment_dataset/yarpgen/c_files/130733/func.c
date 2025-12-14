/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130733
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((min((var_8), (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))))))) << (((max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (_Bool)1))))))) - (517506193853446607ULL))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (~(var_7)))) : ((~(18446744073709551615ULL)))));
        arr_2 [19LL] [i_0] = ((/* implicit */long long int) var_1);
        var_12 -= ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_5)), (((10ULL) / (18446744073709551611ULL)))));
    }
    var_13 = ((/* implicit */unsigned long long int) var_1);
}
