/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115184
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_10 = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)9640)))));
            arr_6 [i_1] [i_1] = ((/* implicit */_Bool) var_0);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])), (arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
            arr_9 [i_2] [i_2] [3U] = ((/* implicit */unsigned long long int) (unsigned char)102);
            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) max((var_5), (((/* implicit */signed char) ((1196165538) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (arr_2 [i_0] [i_2])))))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] [i_3] [i_0] = min((min((((/* implicit */int) var_6)), (arr_2 [i_0 - 1] [i_3]))), (((/* implicit */int) ((arr_2 [i_0 + 1] [i_0 - 1]) >= (arr_2 [i_0] [i_3])))));
            var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_5))));
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)1)))))));
            arr_14 [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_0 + 1]), (((/* implicit */long long int) arr_7 [i_0 - 1] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2147483637)))))) : (min((((/* implicit */long long int) var_0)), (247015678531024069LL)))));
        }
        var_15 = ((/* implicit */int) ((2147483624) <= (((-1950209645) - (((/* implicit */int) (unsigned short)38938))))));
        var_16 = ((/* implicit */unsigned int) var_9);
    }
    var_17 = var_9;
}
