/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116205
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
    var_12 ^= ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned short) var_0))))), (((unsigned long long int) 8876584185115632750ULL))))));
    var_13 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) (+(18446744073709551610ULL))))))), (var_7));
    var_14 = min(((((-(9570159888593918888ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (var_7)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)170))))) ? (6ULL) : (((/* implicit */unsigned long long int) var_9)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */int) ((signed char) 9223372036854775801LL));
        var_15 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)98)) * (((/* implicit */int) var_8))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */long long int) ((1373545011) * (((/* implicit */int) arr_5 [i_1]))))) >= (-9223372036854775801LL))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    arr_13 [i_3] [(signed char)24] [i_1] [i_1] = ((/* implicit */unsigned short) ((max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) min((arr_6 [i_3]), (((/* implicit */unsigned char) arr_5 [i_3]))))))) < (((/* implicit */int) var_0))));
                    arr_14 [i_1] [i_1] [i_3] |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_3]))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3]))) : (var_4)))));
                    var_16 = ((/* implicit */unsigned short) arr_8 [i_3] [i_2]);
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) max(((!(((/* implicit */_Bool) var_11)))), (arr_5 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 24; i_5 += 2) 
            {
                {
                    arr_21 [i_1] = var_6;
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 24; i_6 += 1) 
                    {
                        for (long long int i_7 = 2; i_7 < 24; i_7 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(6U))))));
                                arr_26 [i_6] [i_4] [i_5] [i_6] [i_7] [4U] = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_27 [i_1] = ((/* implicit */_Bool) min((((var_9) & (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [(unsigned short)21] [i_1]))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_1])))))));
    }
}
