/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137768
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
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((((arr_0 [i_0 - 1]) / (arr_0 [i_0 + 1]))), (((/* implicit */unsigned long long int) ((short) -895273190)))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [(short)10] [i_2] [i_1] [i_3] [i_3] [i_4] |= ((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_1]);
                                var_20 |= ((/* implicit */unsigned int) ((max((arr_3 [i_4] [i_0 - 1]), (((/* implicit */unsigned long long int) (unsigned char)61)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3630017028U))))));
                            }
                        } 
                    } 
                    var_21 = ((_Bool) -895273190);
                    var_22 = ((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)61)) - (895273190))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)109)), (var_13))))));
                    arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)61)), (max((((/* implicit */short) (unsigned char)195)), ((short)-23720)))))) < (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] [i_2])));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        var_23 += ((/* implicit */short) (unsigned short)35409);
                        var_24 = ((/* implicit */short) max((var_24), ((short)-21381)));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            arr_17 [i_0] [i_0] [(short)2] [i_1] [i_1] [i_0 + 1] [i_0] |= ((/* implicit */short) (signed char)1);
                            var_25 = ((/* implicit */unsigned long long int) max((min((-1634854168272841515LL), (((/* implicit */long long int) (short)-23735)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(1255995974637091076ULL)))) ? (-895273190) : (((/* implicit */int) (short)21378)))))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_5] [i_7] [i_7] = var_6;
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_7] [i_2 + 1] [i_2] [i_0 + 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) -3LL)) ? (var_0) : (((/* implicit */int) (_Bool)1))))));
                            var_27 = ((/* implicit */_Bool) arr_14 [i_2]);
                            var_28 *= ((/* implicit */long long int) ((short) (short)-23733));
                            var_29 = ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])) ? (arr_3 [i_0 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 1] [i_2 + 1] [i_2] [i_2 + 1]))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_5] [(unsigned char)5])))), (((/* implicit */int) (unsigned char)55))))) <= (max((arr_22 [i_2] [i_2] [i_2] [i_5] [i_8]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -895273190)) ? (((/* implicit */int) (_Bool)0)) : ((-2147483647 - 1)))))))));
                            var_31 = ((/* implicit */signed char) ((var_16) != (((/* implicit */int) max((((/* implicit */short) arr_13 [i_0] [i_1] [i_0] [i_0])), ((short)0))))));
                        }
                    }
                }
                var_32 = ((/* implicit */unsigned long long int) (+((-(3534780881U)))));
                arr_24 [i_0] [i_0] [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_1])))) : (var_2)));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (signed char)-30)) ? (((unsigned long long int) (unsigned char)213)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32590)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0)))))))));
}
