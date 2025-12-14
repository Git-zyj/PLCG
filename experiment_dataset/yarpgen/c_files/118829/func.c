/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118829
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (max((arr_2 [i_0]), (arr_2 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_0 [i_0])))), (arr_1 [i_0])));
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (unsigned short)65513))))) ? (((((/* implicit */int) (unsigned short)65531)) << (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) max(((unsigned char)12), (max((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)9))))))));
    }
    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned short) (unsigned char)92)), ((unsigned short)13768))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65515)) | (((/* implicit */int) ((_Bool) var_8)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > ((-(var_2)))))) : (((((((/* implicit */_Bool) (unsigned short)23)) || (((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */int) ((var_16) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) >= (var_1))))))));
    var_23 = ((/* implicit */long long int) var_15);
    var_24 = ((((/* implicit */_Bool) max((((/* implicit */long long int) 3539512457U)), (-9223372036854775785LL)))) ? ((-(((((/* implicit */_Bool) -9223372036854775785LL)) ? (1729400435U) : (var_2))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)56295)) ? (((/* implicit */int) (unsigned short)4978)) : (((/* implicit */int) var_14))))), (max((3539512480U), (((/* implicit */unsigned int) -1243213332)))))));
}
