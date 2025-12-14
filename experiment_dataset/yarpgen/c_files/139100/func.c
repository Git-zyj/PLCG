/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139100
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(signed char)14] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [7ULL])))))) : (min((((/* implicit */unsigned long long int) (short)22819)), (var_9))))), (((((/* implicit */_Bool) var_9)) ? (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) var_5)))))))));
        arr_3 [i_0] = (short)22819;
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */short) arr_1 [i_0])), (var_7))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (~(((((((/* implicit */int) var_0)) >> (((arr_2 [(_Bool)1] [i_0]) + (1426716653))))) << (((min((arr_2 [(unsigned short)16] [i_0]), (var_5))) - (274827490))))))))));
    }
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) -1)) : (15301517255059664374ULL)))) ? (((/* implicit */int) max((((/* implicit */short) var_10)), (var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 794612156)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((var_7), (var_3))))))) : (var_6)));
}
