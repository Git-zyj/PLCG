/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176023
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) 7);
        var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (short)24)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((arr_3 [i_0] [i_0]) + (9223372036854775807LL))) >> (((arr_3 [i_0] [i_0]) + (168197135223828390LL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned long long int) ((signed char) 240892932445185089LL));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_3] [i_4 + 2] = ((/* implicit */unsigned char) var_12);
                            arr_18 [i_0] [i_1] [18U] [i_2] [i_1] [18U] = ((/* implicit */short) ((arr_13 [i_4 - 1] [i_4] [i_4] [i_4] [i_1]) >> (((((/* implicit */int) (unsigned char)187)) - (163)))));
                        }
                    }
                } 
            } 
            arr_19 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_0] [i_0]);
        }
        arr_20 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-5277472359926628822LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_0), (var_0)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_11))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (22) : (max((((/* implicit */int) (short)-16941)), (13))))))));
                                arr_34 [i_5] [i_5] [i_5] [i_5] [1] [i_5] = ((/* implicit */short) (+((-(3357999317397881889LL)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)3398))))))) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */long long int) var_2);
}
