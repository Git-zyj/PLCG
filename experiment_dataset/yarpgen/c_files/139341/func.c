/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139341
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
    var_15 += ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1152851135862669312ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)61966))))))));
    var_16 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3579))) <= (1152851135862669304ULL)))) > (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))));
        var_17 = ((/* implicit */unsigned int) ((max((1152851135862669307ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 36028797018963964ULL)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (-1181897416)))))) << (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1181897416))))) != (((/* implicit */int) (unsigned short)46919)))))));
    }
    var_18 = ((/* implicit */int) var_1);
}
