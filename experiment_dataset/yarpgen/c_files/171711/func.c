/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171711
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
    var_17 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (~(var_15)));
        var_19 ^= ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_2 [i_0 + 1])))) / (((/* implicit */int) arr_2 [i_0 + 1]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0 + 1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_13)) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
            var_20 *= ((/* implicit */long long int) ((_Bool) var_4));
        }
    }
    for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */_Bool) ((short) (+(var_6))));
        var_21 *= ((((/* implicit */_Bool) (-(arr_9 [i_2] [i_2])))) ? ((-(7597627375583372797ULL))) : ((-(arr_8 [i_2]))));
    }
    for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
    {
        var_22 += ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) arr_0 [i_3 - 1])) ^ ((-(arr_6 [i_3] [i_3] [i_3 + 1])))))));
        var_23 = ((/* implicit */signed char) var_5);
        arr_15 [i_3] [i_3] = (((+((~(var_6))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3 - 1])) && (((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 1])))))));
    }
    var_24 *= ((/* implicit */unsigned char) (-(var_11)));
    var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) var_9)) * (min((((/* implicit */long long int) var_10)), (var_1)))));
    var_26 *= ((/* implicit */short) var_16);
}
