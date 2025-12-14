/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188621
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned long long int) var_0)), (var_13))))), (((long long int) (-(((/* implicit */int) var_0)))))));
    var_18 &= ((/* implicit */unsigned long long int) ((short) (((-(var_14))) >> (((472263538899833632ULL) - (472263538899833602ULL))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] [i_0 - 2] = (signed char)93;
        var_19 = ((/* implicit */short) arr_2 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_0 [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))))), (((/* implicit */unsigned long long int) ((unsigned int) var_10)))));
    }
}
