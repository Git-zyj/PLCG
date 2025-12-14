/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124552
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) (~(arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) min((5968426597016545797LL), (((/* implicit */long long int) (unsigned short)0)))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)29)) > (((/* implicit */int) (short)-2234)))))));
    }
    var_19 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (146234169U)))), ((~(15709891041632642725ULL))))), (((/* implicit */unsigned long long int) var_0))));
    var_20 = ((/* implicit */int) var_7);
}
