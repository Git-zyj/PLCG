/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168340
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-9223372036854775792LL) / (-9223372036854775787LL)))) ? (((((/* implicit */_Bool) ((arr_2 [i_0]) ^ (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_2 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 1])))));
                arr_5 [i_0 - 3] [i_0] [i_1] = ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? (max((var_12), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((((var_16) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))) ^ (((/* implicit */long long int) var_7))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_17 &= ((/* implicit */_Bool) var_5);
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((!(arr_7 [i_0 + 1]))) ? (((/* implicit */int) ((short) ((int) var_8)))) : ((-((~(((/* implicit */int) arr_7 [(unsigned char)1])))))))))));
                            var_19 = min((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_0 - 2] [i_1] [i_2] [i_2] [2U] [i_3]), (arr_0 [i_1 + 1] [i_3])))) && (((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1]))))), (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_2 [4LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_15))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 4] [(short)4])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1 + 4])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 9223372036854775801LL)) ? (9223372036854775771LL) : (9223372036854775771LL))));
                            /* LoopSeq 2 */
                            for (int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_6] [i_0] [7U] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
                                var_21 = ((((/* implicit */int) (short)-336)) ^ (((/* implicit */int) arr_3 [i_0 - 3] [i_1 + 2])));
                            }
                            for (int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                            {
                                var_22 ^= ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_7] [i_5])) ? (var_5) : ((~(min((((/* implicit */long long int) arr_7 [i_0 + 1])), (var_5))))));
                                var_23 = ((unsigned char) arr_2 [i_5]);
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_6 [i_0] [(short)9] [i_0 - 1])))) * (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_1 + 1] [i_4] [(_Bool)1] [i_7])), (arr_3 [(unsigned char)6] [i_4]))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_1 + 4] [i_1 + 4] [i_1 + 4]))))))) : (max((((/* implicit */unsigned long long int) arr_6 [i_0 - 3] [i_1 - 1] [(short)3])), (((var_11) >> (((/* implicit */int) var_8))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) var_0))) / (min((var_9), (((/* implicit */long long int) var_4))))))));
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (var_12) : (var_12)));
}
