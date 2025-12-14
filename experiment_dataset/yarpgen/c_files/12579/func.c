/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12579
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) >= (((/* implicit */int) (unsigned char)211)))))))));
        var_12 = ((/* implicit */unsigned short) max((min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), ((!(((/* implicit */_Bool) 4953298913449420896ULL))))));
        var_13 = ((/* implicit */unsigned char) ((arr_0 [i_0] [i_0]) ? (((((/* implicit */_Bool) max((4953298913449420911ULL), (((/* implicit */unsigned long long int) (signed char)-118))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_7)))) : (max((((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (unsigned short)8406)))), (((arr_0 [14LL] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((unsigned long long int) var_7))))) && (((/* implicit */_Bool) var_8)))))));
    }
    var_15 = ((/* implicit */unsigned short) ((long long int) var_9));
    var_16 = ((/* implicit */unsigned long long int) var_6);
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4953298913449420915ULL)) ? (((((/* implicit */_Bool) (unsigned char)140)) ? (13493445160260130716ULL) : (13493445160260130735ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)65534)))))) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (_Bool)1)))))));
}
