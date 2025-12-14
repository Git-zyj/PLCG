/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141909
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
    var_10 = ((/* implicit */unsigned char) ((2489292990U) <= (1805674298U)));
    var_11 = ((/* implicit */unsigned char) var_8);
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)18490)), (2489292990U)))) ? (((((/* implicit */_Bool) (short)18490)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2816458560U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_1 [i_0] [i_0]))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)2048)), (((((/* implicit */_Bool) 1805674309U)) ? (((/* implicit */int) (unsigned short)43180)) : (var_0)))))) ? (min((0U), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        var_14 = ((/* implicit */int) arr_4 [i_1] [13]);
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) 1257663469))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) -1257663446)) && (((/* implicit */_Bool) (unsigned short)15769))));
    }
}
