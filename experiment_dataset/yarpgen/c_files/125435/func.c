/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125435
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((var_6) & (((/* implicit */int) ((unsigned short) 4ULL))))), ((~(((/* implicit */int) arr_0 [i_0 - 3]))))));
        var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0 - 2])), (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)31)) : (-1)))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (((((/* implicit */unsigned long long int) 5U)) + (var_14)))))));
    }
    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) (short)-32287))))))) ? (((/* implicit */unsigned long long int) ((4294967283U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160)))))) : (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (short)32296)) ? (var_9) : (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
}
