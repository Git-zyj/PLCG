/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18314
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_11 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) ((max((var_0), (((/* implicit */unsigned int) (unsigned short)65504)))) + (((/* implicit */unsigned int) min((((/* implicit */int) arr_9 [20ULL] [i_1] [i_1] [i_1])), (arr_2 [i_0]))))))) ? (((((/* implicit */_Bool) -268667201)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (18446744073709551585ULL))) : (min((((unsigned long long int) (short)-23600)), (min((var_10), (((/* implicit */unsigned long long int) var_5)))))));
                    var_12 |= ((/* implicit */unsigned long long int) ((((min((18446744073709551597ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)6655)) || (((/* implicit */_Bool) arr_10 [(short)15] [i_1] [i_2])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8176)) ? (((/* implicit */int) (unsigned short)50461)) : (-708452071))))));
                    arr_12 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)28058);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) var_0)))) & (((/* implicit */long long int) (~(3067850769U)))))), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_4)) : (var_8))), (((/* implicit */long long int) (-(((/* implicit */int) (short)32009)))))))));
    var_14 = ((/* implicit */_Bool) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52467)))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_6))));
    var_16 = ((/* implicit */unsigned short) max((min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */int) var_5)) & (((/* implicit */int) var_3)))))), (((((/* implicit */int) var_5)) >> (((((/* implicit */int) ((short) (unsigned short)32817))) + (32743)))))));
}
