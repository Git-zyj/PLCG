/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132075
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_1 [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_14)))))) : (var_11)));
        var_15 = ((/* implicit */_Bool) max((var_15), ((!(arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) (~(arr_6 [i_1])));
        var_17 = ((/* implicit */unsigned long long int) ((long long int) var_7));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)1373), (((/* implicit */unsigned short) var_9)))))))) ? ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    var_19 = ((/* implicit */unsigned short) var_1);
}
