/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117797
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
    var_14 = ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 713152479U))))))))));
        arr_2 [(unsigned char)8] = ((((/* implicit */_Bool) ((var_10) - (((/* implicit */int) arr_1 [2]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_4)) - (var_10))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_16 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)558)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1073741808U))));
            arr_6 [(signed char)14] [(unsigned short)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) arr_0 [2])))));
            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)-21097)))));
            arr_7 [(_Bool)1] = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
            arr_8 [5U] [7LL] [(unsigned char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3581814817U)));
        }
    }
}
