/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16693
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
    var_12 |= ((/* implicit */unsigned int) 0);
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)35681)) || (((/* implicit */_Bool) var_8))))), (var_3))) : (var_3)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_14 -= ((/* implicit */unsigned int) min((var_8), (((/* implicit */long long int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (unsigned short)35679))));
            var_15 = ((/* implicit */int) arr_3 [i_0] [i_1]);
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned int) var_0);
            var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(_Bool)1]))) : (var_6))) >> (((/* implicit */int) arr_1 [i_2]))));
            arr_10 [i_2] = ((/* implicit */unsigned char) (((~(var_3))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [(short)8] [i_2])))))));
        }
    }
    var_17 = ((/* implicit */unsigned int) var_6);
}
