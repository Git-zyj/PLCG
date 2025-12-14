/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128271
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [0ULL] = ((/* implicit */unsigned char) (+(((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)20249)) : (-2107969174))))));
        var_17 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [6LL]))));
        var_18 += (~(var_16));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_19 = (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (var_6)))))) ? (((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1])))))) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_1])))))));
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_20 -= ((/* implicit */long long int) var_8);
                        arr_17 [i_1] [i_2] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_10 [i_2 - 1] [i_3 - 1] [i_3 + 1])) ^ (((/* implicit */int) arr_10 [i_2 + 1] [i_3 - 1] [i_3 - 1]))))));
                        var_21 = ((((/* implicit */int) arr_10 [i_1] [i_2 - 1] [i_3 - 1])) ^ (((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_16 [i_1] [i_2 - 1] [i_3 + 1])) : (((/* implicit */int) arr_11 [i_2 - 1] [i_1])))));
                    }
                } 
            } 
        } 
    }
    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_4) : (var_16)));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            for (signed char i_7 = 4; i_7 < 17; i_7 += 4) 
            {
                {
                    arr_26 [i_5] [i_6] [i_7] |= ((/* implicit */_Bool) ((((arr_19 [i_7]) ? ((-(var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_7])) & (((/* implicit */int) var_7))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-207476056965764511LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_6] [i_7])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_7] [i_7] [i_5])) == (((/* implicit */int) arr_24 [i_5] [i_7] [i_5])))))) : (arr_21 [i_6] [i_7] [i_7 - 1])))));
                    var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_15) : (((/* implicit */unsigned long long int) arr_23 [i_5] [i_6]))))) ? (var_5) : (((((/* implicit */_Bool) arr_21 [i_5] [i_7] [i_5])) ? (16514381779886159650ULL) : (((/* implicit */unsigned long long int) arr_23 [i_5] [i_5]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)14012)), (arr_23 [i_5] [i_5])))) ? (((arr_24 [0LL] [i_7] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_5] [i_5]))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)31098)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_23 [i_5] [i_5])) && (((/* implicit */_Bool) var_2))))))))));
                }
            } 
        } 
    } 
}
