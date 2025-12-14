/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133356
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
    var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((~(min((var_9), (((/* implicit */unsigned int) var_3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1857647416243504533LL)) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1))))))))));
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) % (((unsigned long long int) (short)32767))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((((/* implicit */long long int) -1)) - (-1857647416243504523LL)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [(unsigned short)13] [i_1] [i_2] [i_1] = ((/* implicit */short) var_9);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [(short)11] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((-(((unsigned long long int) var_12)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1])), ((unsigned short)511)))))));
                        arr_13 [i_0] [i_1] = ((/* implicit */long long int) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (2468946962770516758ULL))), (max((2468946962770516742ULL), (((/* implicit */unsigned long long int) (unsigned short)23207))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((2468946962770516762ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) == ((+((+(((/* implicit */int) var_10))))))));
                        arr_18 [i_0] [6] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) var_3)) : (var_12)))) ? (max(((+(var_6))), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) << (((var_7) - (13023909918882758763ULL))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [i_2 - 1] [i_1] [i_2 - 4]) | (((/* implicit */unsigned long long int) ((int) (-9223372036854775807LL - 1LL))))))) ? (min((15977797110939034888ULL), (2468946962770516758ULL))) : ((~(((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)11] [(short)7])))))))));
                        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)43857), (((/* implicit */unsigned short) (short)-4363))))) ? (max(((~(4ULL))), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [3LL] [i_0]))))))))));
                        var_19 -= ((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_2] [1ULL] [i_1] [i_2 - 4]);
                        arr_23 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) var_8);
                        var_20 = ((/* implicit */unsigned short) ((int) arr_1 [i_0]));
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-8211))) >= (arr_17 [i_0] [i_1] [i_0] [i_6] [i_0] [i_7])));
                                arr_30 [i_6] [i_1 - 1] [i_0] [i_1 - 1] [(short)6] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((~(arr_28 [i_7] [i_0] [4ULL] [i_0] [i_2] [2LL] [i_7]))))))));
                                var_22 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned short)11)) << (((((/* implicit */int) var_4)) - (48609))))) << (((((/* implicit */int) (unsigned short)65025)) - (65014))))) >> (((((/* implicit */int) (short)-4353)) + (4382)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_9 = 3; i_9 < 12; i_9 += 1) 
        {
            var_23 |= ((/* implicit */short) arr_20 [i_8] [i_9] [i_9] [i_9] [i_9 - 2] [(short)7]);
            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
        }
        var_25 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31711))) * (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_8]))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30697))) : (var_6))))) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) (short)8064))) : (((/* implicit */int) max((arr_3 [2U] [i_8] [i_8]), ((short)-17524)))))) - (99)))));
        var_26 = ((/* implicit */_Bool) arr_9 [i_8] [i_8]);
    }
}
