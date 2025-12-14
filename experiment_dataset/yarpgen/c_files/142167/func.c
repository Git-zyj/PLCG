/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142167
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_13 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (signed char)0)) == (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))))));
            arr_6 [i_0] = ((/* implicit */_Bool) arr_2 [i_1] [i_1]);
            var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) ^ (arr_2 [i_1] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))));
            var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) 721000668U)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (unsigned short)64536))));
            arr_7 [i_0] [i_0] = ((/* implicit */short) (signed char)0);
        }
        arr_8 [i_0] [i_0] = ((/* implicit */short) (-(arr_2 [i_0 - 1] [(unsigned short)8])));
        arr_9 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_16 *= ((/* implicit */unsigned short) arr_10 [i_2] [14]);
        arr_13 [i_2] = ((/* implicit */int) (+(3573966646U)));
    }
    var_17 = ((/* implicit */long long int) var_6);
    var_18 = ((/* implicit */short) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-6))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_12), (var_12))))))) ? (max((min((((/* implicit */unsigned long long int) var_2)), (var_0))), (((/* implicit */unsigned long long int) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (((((/* implicit */unsigned long long int) var_2)) / (var_0))))))));
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)127))));
}
