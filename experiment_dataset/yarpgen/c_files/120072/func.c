/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120072
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) max((3929471150U), (((/* implicit */unsigned int) arr_1 [i_0])))))), (((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((((/* implicit */_Bool) (short)1173)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        var_16 += ((/* implicit */unsigned int) var_6);
    }
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_17 &= ((/* implicit */signed char) max(((+(((var_11) & (((/* implicit */unsigned long long int) arr_3 [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) (unsigned char)31)))))));
        var_18 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (((arr_0 [i_1 + 1]) * (arr_3 [i_1 - 1])))));
        var_19 = ((/* implicit */unsigned int) 285561375);
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((var_5) == (arr_2 [i_2 + 2])));
        var_20 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */unsigned long long int) 268435455)) : (36028797018963936ULL))));
    }
    /* LoopNest 3 */
    for (long long int i_3 = 2; i_3 < 17; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    arr_19 [i_3] |= ((/* implicit */short) (!(((/* implicit */_Bool) min((min((750384001U), (arr_4 [23ULL] [23ULL]))), (3186871821U))))));
                    arr_20 [(unsigned short)8] [i_4] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 268304384)) ? (max((14513107588715008649ULL), (((/* implicit */unsigned long long int) 819114889U)))) : (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) arr_15 [i_5] [i_3] [i_3] [i_3])))))), (((/* implicit */unsigned long long int) var_12))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (3166973573U) : (max((((/* implicit */unsigned int) var_9)), (4U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)17)) <= (((/* implicit */int) (unsigned char)17)))) && (((/* implicit */_Bool) max((arr_18 [i_3 + 1] [8U]), (3166973573U)))))))) : (((((/* implicit */_Bool) (-(var_0)))) ? (max((((/* implicit */long long int) 3186871836U)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
}
