/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185133
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_13) : (((/* implicit */long long int) -1113237150))))))));
        var_17 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)24370)) : (((/* implicit */int) (unsigned char)255)))))))));
        var_18 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 532492640)) ? (var_11) : (((/* implicit */int) (unsigned char)249)))) / (((/* implicit */int) ((signed char) arr_1 [i_0]))))) + (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */int) (unsigned char)254)) << (((arr_1 [i_0]) + (217265600507269109LL)))))))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        var_19 = ((/* implicit */long long int) arr_2 [i_1 + 2]);
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) / (arr_4 [i_1 - 1] [i_1 + 2])))) / (var_2)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((var_2) >= (((/* implicit */long long int) 987809039U)))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(short)9] [i_1])) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (unsigned char)7))))), (arr_4 [i_1 + 1] [i_1])))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(max((var_0), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1 + 2] [(signed char)18])))))))))));
    }
    var_22 ^= max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -524976197)) ? (((/* implicit */int) var_8)) : (524976215))))), (11848299));
    var_23 = var_8;
}
