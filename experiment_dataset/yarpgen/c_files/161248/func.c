/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161248
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
    var_18 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_0))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) (-(var_15)))) : (((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)23092), ((short)32767)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 13923010600151447747ULL)) ? (((/* implicit */unsigned long long int) -1666995908)) : (((((_Bool) arr_2 [(short)5])) ? (max((9014519356589957015ULL), (9014519356589957036ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((min((((/* implicit */long long int) 1666995907)), (511LL))), (((/* implicit */long long int) (unsigned char)188)))))));
        arr_4 [i_0] |= ((/* implicit */_Bool) arr_1 [3LL]);
        var_22 += ((/* implicit */short) (~(((/* implicit */int) (unsigned char)70))));
        arr_5 [i_0] [i_0] = max((((/* implicit */unsigned long long int) arr_0 [i_0])), (max((((((/* implicit */_Bool) 1666995892)) ? (((/* implicit */unsigned long long int) 1155707537)) : (var_11))), (((/* implicit */unsigned long long int) ((0) & (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_23 += ((((/* implicit */_Bool) (unsigned char)51)) ? (((((int) (signed char)19)) | (((((/* implicit */_Bool) arr_2 [i_1])) ? (-36967297) : (((/* implicit */int) arr_0 [i_1])))))) : ((-((~(((/* implicit */int) arr_3 [i_1] [i_1])))))));
        var_24 *= min(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) == (144115188075855871LL)))));
        arr_9 [i_1] = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) (unsigned char)0)))));
    }
    var_25 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) ^ ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))), ((((_Bool)1) ? (((((/* implicit */_Bool) 11486072804927784812ULL)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3733))))) : (((/* implicit */unsigned long long int) 9223372036854775790LL)))));
}
