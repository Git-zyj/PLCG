/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170786
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) (short)-7641);
        var_21 = ((/* implicit */unsigned char) 7355987093325885317ULL);
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_10)))) ? (var_3) : (((((/* implicit */_Bool) -7377580762191580262LL)) ? (-7377580762191580262LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))))))) ? (min((((((/* implicit */_Bool) (unsigned short)48161)) ? (((/* implicit */unsigned long long int) 2533448817U)) : (7355987093325885317ULL))), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_8)))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_23 = ((/* implicit */_Bool) arr_0 [i_1]);
        var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (unsigned char)54))));
        var_25 += ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1] [i_1]))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7377580762191580248LL)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_0 [i_1]))));
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((int) (short)-1227))), (-7377580762191580259LL)))) ? (((/* implicit */unsigned long long int) -7377580762191580262LL)) : (5024573939409665394ULL)));
    var_28 &= ((/* implicit */unsigned int) var_2);
    var_29 = ((/* implicit */_Bool) (unsigned short)9186);
}
