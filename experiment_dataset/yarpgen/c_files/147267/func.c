/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147267
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_0 [13LL] [i_0]);
        var_14 = ((/* implicit */signed char) min(((-(((/* implicit */int) min(((unsigned short)41764), (((/* implicit */unsigned short) var_8))))))), (((/* implicit */int) ((((/* implicit */int) max((var_10), (((/* implicit */short) arr_2 [i_0] [11]))))) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)-32760)) && (((/* implicit */_Bool) arr_2 [(signed char)7] [i_0]))))))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0])) ? ((-(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0])))))));
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 14454662944385464382ULL)) ? (((/* implicit */int) var_2)) : (524032)))))));
}
