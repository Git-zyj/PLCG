/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171544
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
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_16 += ((/* implicit */long long int) min((max((arr_1 [(signed char)10] [i_0 + 1]), (arr_0 [6U] [i_0 + 1]))), (arr_0 [i_0] [i_0 + 1])));
        var_17 -= ((/* implicit */signed char) (+(((arr_0 [i_0 - 1] [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_4 [4U] = ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_1] [i_1])) | (((/* implicit */int) arr_3 [i_1])))) <= ((-(((/* implicit */int) arr_3 [i_1]))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (signed char)110))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (((!((!(var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (-3775414748371534365LL))))));
}
