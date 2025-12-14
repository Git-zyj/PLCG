/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143645
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_6))))), ((~(((/* implicit */int) var_8))))))), (var_0)));
        var_14 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) var_1)), (var_9))))), (min((var_9), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned short) var_11)))))))));
        var_15 = ((/* implicit */short) (-(min((var_9), (min((var_2), (((/* implicit */unsigned long long int) var_8))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            var_16 ^= ((/* implicit */int) (~(var_2)));
            var_17 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
        }
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min(((unsigned char)26), ((unsigned char)25))))));
            var_19 &= ((/* implicit */unsigned long long int) min((min((var_1), (var_4))), (((5428482924320743705LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))))));
        }
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        var_20 = ((/* implicit */long long int) var_9);
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_8))));
        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
    }
    var_24 = ((/* implicit */int) var_5);
}
