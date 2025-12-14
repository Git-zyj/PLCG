/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15665
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) var_0)), (var_5)))) >= (((/* implicit */int) var_3))));
    var_14 |= ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
    var_15 ^= ((/* implicit */unsigned int) ((int) ((min((((/* implicit */int) (short)27353)), (var_7))) >= ((~(((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                var_16 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-27354))))), (((3921888295418739791ULL) / (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_3]))))))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_3] [i_4])) >> (((var_9) + (994824337))))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_1] [i_0] [i_0] = max((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) % ((~(var_4))))), (((/* implicit */int) arr_5 [i_1] [i_1])));
                            }
                            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                            {
                                var_17 = ((/* implicit */short) (~((~((~(arr_2 [i_0])))))));
                                arr_16 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_4 [i_2] [i_3] [i_3 + 1] [i_5]);
                                arr_17 [i_0] [i_5] [i_2] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) 8058992365334019280LL)), (1640658039491687401ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_5]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)251)))) : ((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_2])))))))));
                                arr_18 [i_0] [i_0] [i_2] [i_3] [i_5] = max((((((/* implicit */_Bool) (short)-6061)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-1126441973)))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 2147483642)) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))))));
                            }
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (!((_Bool)1))))))) & (arr_3 [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (1640658039491687401ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_1])) : (1525667450)))))))));
                var_20 -= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 + 1])) ? ((~(arr_9 [i_0] [i_0] [i_0] [i_0]))) : ((~(var_4)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1613360990)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (unsigned char)202))));
}
