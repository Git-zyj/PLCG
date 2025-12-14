/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105090
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [2LL])) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775785LL))) + (34LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)8)), ((unsigned char)89))))) : (max((((/* implicit */unsigned int) arr_1 [8ULL] [8ULL])), (var_7))))))))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_1 [6ULL] [8]))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            arr_6 [(unsigned char)6] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(short)4]))) : (-1180401457666133802LL))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
            var_15 -= ((/* implicit */int) 9223372036854775807LL);
        }
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((((((/* implicit */_Bool) (short)-63)) ? (var_2) : (arr_2 [i_0] [i_0]))) * (((/* implicit */long long int) min((1213492151), (((/* implicit */int) var_10))))))))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_17 -= ((/* implicit */unsigned int) max((arr_9 [i_2 - 1] [i_2 - 1]), (min((arr_9 [i_2 - 1] [i_2 - 1]), (arr_9 [i_2 - 1] [i_2 - 1])))));
        var_18 = (+(((/* implicit */int) min((arr_8 [i_2]), (arr_8 [i_2])))));
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : ((~(var_1)))))) ? (max((((/* implicit */long long int) var_5)), (var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))) : (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) -1073741824)))))))));
}
