/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114899
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
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */int) (_Bool)0);
        var_11 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (max(((((_Bool)0) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-4710)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
    }
    var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)37))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((-(((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) 14ULL)) && (((/* implicit */_Bool) 10ULL)))))))));
    var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)));
}
