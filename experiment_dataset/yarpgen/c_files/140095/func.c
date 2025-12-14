/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140095
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
    var_18 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */short) max((var_8), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)1024)) == (((/* implicit */int) (unsigned short)63828))))) >= (((/* implicit */int) var_12)))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((var_2), (((/* implicit */unsigned short) var_17))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3694529231U)), (var_5)))) ? (((/* implicit */int) min(((unsigned short)64511), (min((var_2), (((/* implicit */unsigned short) (short)-27314))))))) : (((/* implicit */int) var_6))));
}
