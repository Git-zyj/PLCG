/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12836
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
    var_11 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) <= (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)46117))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] [(unsigned short)18] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(10998741710883368505ULL))), (var_2)))) ? (((/* implicit */unsigned long long int) max((1515063741U), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [(short)8])))))))) : (10998741710883368511ULL)));
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(8762939589363756477ULL))))));
        arr_4 [i_0] [i_0] = (+((+(((/* implicit */int) (signed char)120)))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) 18446744073709551602ULL))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_14 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 10998741710883368512ULL)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)65535)))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((7448002362826183102ULL) == (18446744073709551615ULL)))) - (((/* implicit */int) ((unsigned char) (unsigned short)16445)))));
        arr_11 [i_1] = ((/* implicit */_Bool) min((7448002362826183111ULL), ((~(7448002362826183110ULL)))));
        arr_12 [i_1] = (((~((~(((/* implicit */int) var_7)))))) << (((7448002362826183121ULL) - (7448002362826183117ULL))));
    }
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((((((7448002362826183121ULL) % (7448002362826183095ULL))) | (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (10460657856953001336ULL))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned char)255))))))) : (((unsigned int) var_7))));
}
