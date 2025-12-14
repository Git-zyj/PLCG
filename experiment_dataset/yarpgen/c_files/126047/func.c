/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126047
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)186))));
                var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)98)), ((unsigned short)65535))), (((/* implicit */unsigned short) (short)32753)))))));
            }
            arr_8 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))), (max((((/* implicit */long long int) (unsigned short)48)), (var_0))))))));
        }
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                var_12 = var_4;
                arr_16 [i_4 + 3] [(unsigned char)0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (short)-15540))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                var_13 = ((/* implicit */unsigned long long int) var_4);
                var_14 = ((/* implicit */signed char) arr_7 [(unsigned short)6] [13LL] [i_5] [i_0]);
            }
            arr_19 [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (_Bool)1)))));
        }
        arr_20 [i_0] = ((/* implicit */unsigned long long int) var_9);
        var_15 -= ((/* implicit */signed char) var_3);
        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_4)) - (4938))))) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) 4988026358692727513LL)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_1)))), (var_6)))) : ((+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_18 [i_0]))))))));
        arr_21 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)127)), (var_9))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (-8230499602417024027LL) : (((/* implicit */long long int) 4294967295U))))), (((((/* implicit */_Bool) var_5)) ? (var_7) : (arr_3 [i_0])))))));
    }
    var_17 = (!(((((/* implicit */int) (short)5667)) < (var_6))));
    var_18 = ((/* implicit */long long int) min((var_18), (max((((/* implicit */long long int) ((unsigned short) 2147483647))), ((-(min((((/* implicit */long long int) (short)32748)), (var_0)))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (min((((/* implicit */unsigned long long int) var_3)), (var_7)))))) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)23893)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((349069939U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((-4918599382629163483LL) & (var_0)))))))));
}
