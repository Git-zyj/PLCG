/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187090
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
    var_17 = var_14;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_18 = (i_0 % 2 == zero) ? (((/* implicit */short) (+(((((((/* implicit */_Bool) 624779521)) ? (2147483647) : (((/* implicit */int) (unsigned short)17254)))) << (((arr_1 [i_0]) - (1423616734)))))))) : (((/* implicit */short) (+(((((((/* implicit */_Bool) 624779521)) ? (2147483647) : (((/* implicit */int) (unsigned short)17254)))) << (((((((arr_1 [i_0]) - (1423616734))) + (1282139207))) - (21))))))));
        var_19 = ((/* implicit */long long int) min((arr_2 [i_0] [i_0]), (3611405126U)));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_0 [i_1])))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1]) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
        var_21 = ((/* implicit */unsigned long long int) ((long long int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) / (7208801735109225862LL))), (arr_0 [i_1]))));
        arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 488099642)))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((var_3) ? (min(((-(-1LL))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) : (var_14)));
}
