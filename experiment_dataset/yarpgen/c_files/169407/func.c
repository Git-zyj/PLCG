/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169407
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0 + 1] [i_0 + 1] &= ((/* implicit */signed char) var_6);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((arr_3 [i_0 - 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
            arr_5 [(signed char)3] = ((/* implicit */unsigned short) arr_0 [i_0 + 1] [i_0 + 1]);
        }
        var_19 = ((/* implicit */int) ((arr_0 [i_0 + 1] [i_0 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */short) ((1154630779106896793ULL) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
        arr_9 [i_2] = ((/* implicit */_Bool) 513995398U);
        arr_10 [i_2] = ((/* implicit */unsigned short) (((~(var_12))) ^ (((/* implicit */unsigned long long int) arr_1 [i_2 + 1]))));
        var_20 = ((/* implicit */_Bool) arr_7 [i_2]);
    }
    var_21 = ((/* implicit */long long int) ((var_11) < (((/* implicit */unsigned long long int) var_17))));
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
}
