/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18228
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
    var_19 = ((/* implicit */long long int) var_12);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = (_Bool)0;
        arr_4 [i_0] = (+(((((_Bool) (signed char)-88)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)84)) <= (arr_0 [i_0])))) : (((/* implicit */int) arr_2 [i_0])))));
        var_20 = ((/* implicit */unsigned short) (+((~(arr_1 [i_0 + 1])))));
    }
    var_21 = ((/* implicit */short) min((((/* implicit */long long int) var_5)), (((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (short)76))))) % (-9223372036854775781LL)))));
    var_22 = ((/* implicit */unsigned int) var_6);
    var_23 = ((/* implicit */unsigned char) 880783543);
}
