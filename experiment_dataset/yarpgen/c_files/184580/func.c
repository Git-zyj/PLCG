/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184580
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_3)) | (((((/* implicit */_Bool) min(((unsigned char)169), (((/* implicit */unsigned char) (_Bool)1))))) ? (16069428706098627249ULL) : (((/* implicit */unsigned long long int) ((int) var_7)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((long long int) var_2);
        var_12 = ((/* implicit */unsigned short) (_Bool)1);
    }
}
