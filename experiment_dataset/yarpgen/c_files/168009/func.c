/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168009
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [6ULL] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -4031444714559295407LL)) ? ((-(4031444714559295395LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                                var_15 = ((/* implicit */_Bool) ((long long int) var_7));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 4; i_5 < 12; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_1] = 3124279265652333529LL;
                                var_16 -= ((/* implicit */long long int) max((arr_3 [(_Bool)1]), (var_12)));
                            }
                        } 
                    } 
                } 
                var_17 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) + (2147483647))) >> (((((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_11 [i_0] [i_1] [i_1] [(signed char)2] [i_1]) : (var_11)))) - (556255352151136518ULL)))))) : (((/* implicit */unsigned int) ((((((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) - (2147483647))) + (2147483647))) >> (((((((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_11 [i_0] [i_1] [i_1] [(signed char)2] [i_1]) : (var_11)))) - (556255352151136518ULL))) - (17975484856617691990ULL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (((var_10) & (((/* implicit */unsigned long long int) max((4031444714559295405LL), (((/* implicit */long long int) var_2)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 4; i_8 < 10; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max(((+(6365139383633856316ULL))), (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_2)), (arr_0 [i_9] [i_8]))), (-2319724330073073626LL))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (((((_Bool)1) ? (-3124279265652333512LL) : (2319724330073073655LL))) == (arr_19 [i_9] [i_8 - 4] [i_9]))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-6977664010608540695LL), (-4031444714559295390LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8] [i_9] [12] [i_8]))) * (arr_24 [i_8] [i_8] [i_9] [i_8] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (((((/* implicit */_Bool) (signed char)-1)) ? (229807423854808899ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_32 [i_9] [(short)2] [(short)2] [i_8] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_9] [i_9] [i_8 - 1] [8LL]))) > (var_10)));
                    arr_33 [10LL] [i_8] [i_10] [(signed char)9] = ((((/* implicit */_Bool) arr_4 [i_8 - 1] [i_8] [i_10])) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) arr_4 [i_8 - 3] [i_8] [i_10])));
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_34 [i_9] [3] [9] [i_8 - 2]))));
                    arr_36 [i_8] [i_8] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (_Bool)1))))));
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_40 [i_8] [i_8] [3ULL] = ((((/* implicit */_Bool) arr_39 [i_8] [i_8 - 3] [i_8])) && (var_9));
                    /* LoopNest 2 */
                    for (short i_13 = 2; i_13 < 10; i_13 += 4) 
                    {
                        for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 1) 
                        {
                            {
                                arr_46 [i_14 - 1] [i_8] [(_Bool)1] [i_8] [i_8] = ((/* implicit */unsigned char) ((_Bool) ((short) var_4)));
                                arr_47 [i_14] [i_14] [i_8] [i_13] [i_8] [i_9] [i_8 + 1] = ((/* implicit */_Bool) ((var_5) ? (arr_21 [i_8 - 4] [i_8] [i_12] [i_13 - 1]) : (((/* implicit */unsigned long long int) arr_24 [i_8 - 3] [i_8] [i_8] [i_8] [i_14 - 1]))));
                                var_23 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [i_9] [i_8] [i_9]))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (16762511458331266562ULL))));
                                var_24 = (~(var_11));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) max((var_25), ((-(((((/* implicit */_Bool) 9527101093538634245ULL)) ? (340443007U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
                /* LoopNest 3 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (long long int i_16 = 2; i_16 < 11; i_16 += 4) 
                    {
                        for (long long int i_17 = 2; i_17 < 11; i_17 += 2) 
                        {
                            {
                                arr_56 [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_12 [0LL] [0LL] [i_8] [i_16 - 1] [i_17] [i_17 + 1]))))) & ((~(-5187518010220815120LL)))));
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((18446744073709551599ULL), (((/* implicit */unsigned long long int) 2319724330073073655LL))))) ? (max((arr_7 [i_16 + 1] [i_8]), (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_5 [i_17 - 2] [i_17 - 1] [i_17 - 1] [i_8]))))));
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_54 [i_17] [i_17 - 2] [i_8] [(signed char)9] [i_17 - 1])) > (((/* implicit */int) arr_54 [5LL] [i_17 + 1] [i_8] [i_17] [i_17])))))) : (((((arr_23 [i_17 + 1] [i_8] [i_15] [i_8] [i_8]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_16])))) : (min((((/* implicit */long long int) (_Bool)1)), (arr_2 [i_8])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_28 |= ((/* implicit */long long int) ((_Bool) var_11));
}
