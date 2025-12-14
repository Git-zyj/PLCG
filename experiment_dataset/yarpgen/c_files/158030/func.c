/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158030
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
    var_19 = ((/* implicit */unsigned long long int) ((long long int) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)5), (((/* implicit */unsigned short) var_18)))))))));
    var_20 = ((/* implicit */unsigned short) (unsigned char)0);
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((_Bool) (short)-24616)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0))))), (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (0ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_22 |= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)233)), (0U)))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) var_2);
                        var_24 = ((/* implicit */_Bool) (-(var_4)));
                        arr_15 [i_0] [(unsigned short)8] [(unsigned short)8] [i_0] &= ((/* implicit */unsigned short) (-(3577587341582304235ULL)));
                    }
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_20 [i_0] [3LL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) * (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_4])))))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) >> (((min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) : (var_2))), (((((var_15) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_8 [i_2] [i_2])) + (172))) - (57))))))) + (9091105484435729792LL))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
                        {
                            arr_23 [i_5 + 1] [i_4] [i_0] [i_4] [i_0] [i_1] [i_0] = ((/* implicit */long long int) max(((-(((int) (short)24605)))), (((((/* implicit */int) arr_0 [i_4])) ^ (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)36))))))));
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36514)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_14 [i_5])))) : (var_2)))) | (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)24603)))))))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            arr_27 [4LL] [4LL] [i_1] [4LL] [12] [4LL] [i_0] = (-(((/* implicit */int) (unsigned char)66)));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)43)))))));
                            var_28 *= ((/* implicit */unsigned int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (0ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0U)))))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [(_Bool)1] [i_6 - 2]))));
                            var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) (short)-24604)) ? (((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_9)))))) : (((/* implicit */int) (unsigned short)36279))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)6));
                            arr_30 [i_0] [9] [i_0] [i_0] = ((/* implicit */int) (unsigned short)23095);
                        }
                    }
                }
            } 
        } 
    } 
}
