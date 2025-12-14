/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184170
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
    var_16 += ((/* implicit */unsigned long long int) var_15);
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) * (((17ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) (unsigned char)10))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        var_18 = ((/* implicit */unsigned char) (((~(var_2))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_14))))));
        var_19 = ((var_10) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 4]))));
        var_20 *= ((/* implicit */unsigned char) 18446744073709551615ULL);
    }
    var_21 = var_15;
}
