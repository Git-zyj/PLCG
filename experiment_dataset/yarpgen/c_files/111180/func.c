/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111180
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)7)), (var_8))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) * (((/* implicit */int) var_1))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((var_12) != (var_12))))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (var_17)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */int) var_10);
            var_21 = ((/* implicit */short) var_14);
            arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) - (var_0)));
            var_22 &= ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (0ULL) : (arr_2 [i_0] [i_1]));
        }
        var_23 -= ((/* implicit */long long int) (unsigned short)17578);
    }
    var_24 = (unsigned char)94;
}
