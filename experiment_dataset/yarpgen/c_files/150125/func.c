/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150125
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
    var_15 = ((/* implicit */long long int) ((_Bool) ((long long int) ((unsigned long long int) var_4))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), ((+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_9)) : (-2346223869341138155LL)))), ((-(var_7)))))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) | ((~(((/* implicit */int) var_4))))))) ? ((~(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) max(((unsigned char)208), (var_14)))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) max(((unsigned short)3756), (((/* implicit */unsigned short) (unsigned char)48))))), (min((((/* implicit */int) (_Bool)1)), (2147483634)))))) : (max((((/* implicit */unsigned long long int) 552099826U)), (13ULL)))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) arr_0 [8ULL]))), (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_0 [i_0]))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) ? ((~(var_9))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))))));
        var_19 = ((/* implicit */unsigned int) min((0ULL), (5205286989812151817ULL)));
    }
}
