/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184587
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
    var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((unsigned long long int) var_11))))) ? (var_5) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((288230376151711743ULL) == (((/* implicit */unsigned long long int) var_2)))))) ^ (((unsigned long long int) 288230376151711766ULL))))));
    var_20 = ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) var_3);
                    arr_9 [i_0] [7LL] [6ULL] [i_2] = ((/* implicit */int) var_4);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_1])) & (18158513697557839850ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18158513697557839876ULL)) || (((/* implicit */_Bool) (unsigned short)1))))) : (((/* implicit */int) (unsigned short)1))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_3))));
                            arr_15 [i_0] [(signed char)2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) var_3);
                            arr_16 [(_Bool)1] [9ULL] [i_2] [(signed char)5] [9ULL] [i_1] [(short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) : (var_17)));
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)69))));
                            var_24 -= ((/* implicit */long long int) ((unsigned long long int) (unsigned short)65524));
                        }
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) + (var_13))))));
                            arr_20 [4LL] [i_1] [4LL] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)1] [i_0])) : (((/* implicit */int) var_11))));
                        }
                        var_26 = ((/* implicit */unsigned short) var_17);
                        arr_21 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((var_18) ? ((-(2592192473U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44350)))));
                    }
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 946177384U)) ? (18446744073709551615ULL) : (288230376151711766ULL)))) ? (((unsigned long long int) arr_10 [i_2] [(_Bool)1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))))));
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) (short)-4784))))) <= (((/* implicit */int) ((unsigned char) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((short) arr_2 [i_0] [i_2])), (((/* implicit */short) ((signed char) (unsigned short)12))))))) : (0ULL))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) var_7);
}
