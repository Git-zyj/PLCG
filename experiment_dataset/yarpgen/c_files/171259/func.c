/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171259
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
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        arr_2 [(unsigned char)11] [i_0] = ((/* implicit */long long int) var_14);
        var_18 = (-((-(max((2279694148500983491LL), (((/* implicit */long long int) (_Bool)1)))))));
        var_19 = ((/* implicit */int) ((unsigned int) arr_0 [(unsigned short)0] [i_0 - 1]));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */short) (~((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), (8707151187714264992ULL)))))));
            arr_9 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)64096))));
            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_2))))));
            arr_10 [i_1] = ((/* implicit */unsigned int) var_17);
        }
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64096)) * (((/* implicit */int) (_Bool)0))));
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */int) ((unsigned char) (((!(((/* implicit */_Bool) arr_1 [20U])))) ? (arr_11 [2ULL] [i_3]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [4U]))))))));
        var_23 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (short)-11737))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((~(var_2))))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -948503364)) ? (((/* implicit */int) (short)-17218)) : (((/* implicit */int) (_Bool)1))));
        var_25 = ((/* implicit */unsigned char) arr_11 [i_3] [(short)18]);
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
    {
        var_26 &= ((/* implicit */unsigned int) (-(arr_11 [14U] [i_4])));
        arr_18 [i_4] = ((/* implicit */unsigned int) var_16);
    }
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        var_27 *= ((/* implicit */unsigned int) ((var_7) ? ((+(((/* implicit */int) ((unsigned char) arr_16 [i_5]))))) : (((/* implicit */int) var_16))));
        var_28 *= var_7;
    }
}
