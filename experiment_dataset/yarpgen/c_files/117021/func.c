/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117021
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */signed char) (+(1073741823)));
                var_15 = (~(((/* implicit */int) (((~(((/* implicit */int) arr_2 [(signed char)5] [(_Bool)1])))) < (((/* implicit */int) (signed char)-56))))));
            }
        } 
    } 
    var_16 += ((/* implicit */unsigned char) var_10);
    var_17 -= min((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)232)), ((unsigned short)65535)))), (((11791874590440285122ULL) << (((((/* implicit */int) (unsigned char)64)) - (7))))))), (((/* implicit */unsigned long long int) var_3)));
    var_18 = ((/* implicit */unsigned char) min((min((((/* implicit */int) var_4)), (((((/* implicit */int) var_8)) - (((/* implicit */int) (signed char)17)))))), (((/* implicit */int) var_12))));
}
