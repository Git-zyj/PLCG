/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110877
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 = (+(((((/* implicit */int) ((unsigned short) (unsigned char)51))) / (((/* implicit */int) min((var_8), (var_0)))))));
        var_14 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) 1597170803)), (((((/* implicit */_Bool) (unsigned char)36)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((-1597170803), (((/* implicit */int) (_Bool)1)))))))), ((-(min((((/* implicit */unsigned long long int) var_0)), (var_11)))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_1] [i_1])), (var_2)))) / (max((arr_4 [i_1]), (((/* implicit */long long int) var_0))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)-117)))) : (((((((/* implicit */_Bool) -2393433441094061938LL)) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (unsigned char)51)))) * (((/* implicit */int) arr_2 [i_1] [i_1]))))));
    }
    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_9 [i_2] |= ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) var_6)) ? (arr_1 [(signed char)5] [i_2]) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) min((var_7), (var_7))))))));
        var_18 += ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (13470730996040130984ULL)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))))));
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)80))));
}
