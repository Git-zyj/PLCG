/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182285
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_1] [i_2] [i_0] [i_4] [i_4] [i_3] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4])) ? (arr_11 [i_0 + 1] [9] [i_0 - 1]) : (arr_11 [i_4] [i_3] [i_2])))));
                                var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_5 [(signed char)6] [i_2] [(unsigned char)4])), (((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_4])) ? (arr_10 [i_0] [1] [(signed char)6] [i_4]) : (var_8))))));
                                var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)2896))) <= (4294967295U));
                                arr_16 [i_0] [i_1] [0U] [i_0] [(short)0] [i_0] [11] = ((/* implicit */unsigned int) ((arr_2 [i_2]) ? (((((/* implicit */_Bool) ((var_8) >> (((((/* implicit */int) var_12)) - (63773)))))) ? ((+(arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_12))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2896)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2895))) : (-8421990827991938461LL)))) ? (max((-3373199686187107612LL), (var_6))) : (((/* implicit */long long int) arr_4 [(unsigned short)7] [(signed char)11] [i_4])))))));
                                var_17 = var_2;
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) max((((arr_1 [i_0 - 2] [i_0]) * (arr_1 [i_0 - 1] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (3058320280657021251LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-2896))))))))) ? (max((min((((/* implicit */long long int) arr_4 [11U] [(signed char)8] [i_0])), (arr_12 [i_2] [11ULL] [11ULL] [(signed char)6]))), (((/* implicit */long long int) -748842313)))) : (((/* implicit */long long int) (+(arr_3 [i_0]))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) arr_2 [(signed char)4]);
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((short) var_10)))));
}
