/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168718
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
    var_15 = ((/* implicit */unsigned short) max((18446744073709551600ULL), (15ULL)));
    var_16 = ((/* implicit */_Bool) var_1);
    var_17 |= ((/* implicit */unsigned char) ((((var_4) == ((-(18446744073709551588ULL))))) ? (((/* implicit */unsigned long long int) var_8)) : (max((((/* implicit */unsigned long long int) (-(var_6)))), (max((((/* implicit */unsigned long long int) var_3)), (var_4)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((max(((-(1449743715324266639LL))), (((/* implicit */long long int) arr_1 [i_0])))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (arr_2 [i_0])))))));
        arr_3 [15ULL] = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) << (((((((/* implicit */int) var_5)) << (((((/* implicit */int) var_5)) - (42651))))) - (21841891)))));
    }
    for (short i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned char i_3 = 4; i_3 < 23; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_19 -= ((/* implicit */unsigned short) arr_12 [i_1 - 2] [i_3 + 1] [i_3]);
                        arr_16 [(signed char)17] [i_1] [0LL] [i_3 - 3] [i_4] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) var_5)), (var_11))) - (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_20 ^= arr_15 [i_1] [i_1] [i_1] [i_1] [i_1];
                    }
                } 
            } 
        } 
        arr_17 [22] [(signed char)21] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) - (9349510651306950992ULL)))) ? (((unsigned long long int) 9223372036854775807LL)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 37ULL)) && ((!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])))))))));
    }
    for (long long int i_5 = 2; i_5 < 7; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */_Bool) ((504364553U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5 - 2] [i_5])) ? (arr_5 [i_5] [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) (unsigned short)52030)) ? (9097233422402600624ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((arr_8 [i_5 + 1]) + (arr_8 [i_5 + 1]))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((int) ((((var_8) / (var_3))) + (((/* implicit */long long int) arr_13 [i_5] [i_5] [i_5 + 2] [i_5]))))))));
        var_23 |= ((/* implicit */long long int) var_11);
    }
    /* LoopSeq 1 */
    for (unsigned char i_6 = 2; i_6 < 22; i_6 += 1) 
    {
        var_24 = ((/* implicit */signed char) arr_7 [i_6] [i_6]);
        var_25 = ((/* implicit */short) var_13);
        var_26 = arr_15 [i_6] [i_6 + 1] [i_6] [i_6] [13ULL];
    }
}
