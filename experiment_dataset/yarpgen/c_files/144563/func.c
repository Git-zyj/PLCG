/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144563
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6))))))))));
    var_19 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)46099));
        var_20 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) arr_1 [i_0] [i_0 + 1])) | (460267021U)))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (~(max((460267005U), (3834700273U)))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10912)) ? (min((782092998U), (((/* implicit */unsigned int) (unsigned char)65)))) : ((~(460267017U)))))) ? (min((((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (short)31922)) : (((/* implicit */int) var_2)))), (645804097))) : (((((/* implicit */_Bool) var_16)) ? (((-645804098) + (arr_1 [(short)16] [i_1]))) : (((/* implicit */int) (unsigned short)56237))))));
        var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))) : (5824763005538016066ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18140793235167198353ULL)) ? (3834700282U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((((/* implicit */_Bool) arr_0 [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]))))));
        var_22 = ((/* implicit */long long int) (-(min((((((/* implicit */_Bool) 782093001U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (646385183614476203ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (2517102426U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        arr_12 [(short)6] &= (-(((/* implicit */int) (unsigned short)38863)));
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)9167)) < (((/* implicit */int) arr_9 [i_2] [i_2]))))) : (((((/* implicit */int) (unsigned short)36872)) ^ (((/* implicit */int) (_Bool)1)))))));
        var_23 += max(((~(645804100))), (((/* implicit */int) var_0)));
        var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((int) 1946853292905282209ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10929))))) : (((((/* implicit */_Bool) (unsigned short)10914)) ? (((/* implicit */int) (unsigned short)10905)) : (1333849538)))))));
    }
    var_25 = ((/* implicit */short) 504661530);
}
