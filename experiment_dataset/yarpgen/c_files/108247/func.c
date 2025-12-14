/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108247
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_19 *= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1108230431463457867ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (((var_16) << (((((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) - (4963351187869570007ULL)))))));
            arr_7 [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((var_16), (((/* implicit */unsigned long long int) var_0)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) & (arr_1 [i_1])))))) ? (max((var_8), (((/* implicit */long long int) max((arr_5 [i_1]), (((/* implicit */unsigned int) arr_4 [i_1]))))))) : (((/* implicit */long long int) var_5))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 *= ((/* implicit */_Bool) arr_8 [i_2] [i_0]);
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 = ((((/* implicit */unsigned long long int) (-(arr_2 [i_0] [i_0])))) != (arr_8 [i_0] [i_2]));
                            arr_18 [(unsigned short)1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2996499803U)) ? (1766076684U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47951)))));
                            var_22 |= ((/* implicit */signed char) arr_5 [i_0]);
                        }
                    } 
                } 
            } 
        }
        arr_19 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [11])) ? (arr_8 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_5)))) - (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)47951)))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) arr_10 [i_0])) + (arr_8 [i_0] [i_0]))) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
    }
    var_23 &= ((/* implicit */long long int) var_1);
    var_24 += ((/* implicit */unsigned int) var_6);
}
