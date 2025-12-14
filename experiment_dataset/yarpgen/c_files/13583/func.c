/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13583
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
    var_20 *= ((/* implicit */unsigned int) var_14);
    var_21 |= ((/* implicit */signed char) var_14);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_4 [(short)21] [(short)21] |= var_17;
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((int) ((unsigned long long int) arr_0 [(unsigned short)22]))))));
        var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) (unsigned short)14674)))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            var_24 = ((/* implicit */int) var_0);
            arr_9 [8ULL] [i_2] [i_1] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_2]) : (((/* implicit */int) arr_3 [i_1] [6U]))))) != (var_5)));
            var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_7 [3ULL] [(_Bool)1]) * (0U)))) != (arr_2 [i_2 - 1] [i_1 + 2])));
        }
        arr_10 [i_1] |= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14674))))));
    }
    var_26 = ((/* implicit */short) var_15);
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (-128367445) : (((/* implicit */int) var_15)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58582)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9))))) ? (var_12) : (((/* implicit */int) ((short) (short)22300))))))))));
}
