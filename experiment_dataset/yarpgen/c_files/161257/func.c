/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161257
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                var_11 = ((/* implicit */long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) && ((_Bool)1)))) != (((int) arr_5 [i_1]))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 4172386148U);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) 2130303778816ULL))));
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 + 3] [11LL] [1LL] [1LL])) ? (arr_15 [i_3 + 3] [i_3] [i_3 + 3] [i_3 + 3] [i_2] [i_2] [i_0]) : (var_6)));
                                arr_16 [i_4] [(_Bool)1] [i_2] [i_1] [9LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) 130944U)) ? (arr_9 [i_3] [i_3 + 2] [i_3] [i_3 + 1]) : (arr_9 [i_3] [i_3 + 1] [i_3 + 2] [i_3 + 2])));
                                arr_17 [i_0] [i_0] [i_2] [i_3 + 3] [i_4] = ((/* implicit */_Bool) arr_2 [i_1] [i_3]);
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) / (((/* implicit */int) var_2))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [10] [i_3] [i_2] [i_1]))))))));
                            }
                            for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                            {
                                arr_20 [0LL] [i_2] [i_3 + 2] [i_5] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                                arr_21 [(unsigned short)3] [i_1] [i_1] [i_1] [i_1] [(signed char)9] [i_1] = ((/* implicit */signed char) 1948637349789517013ULL);
                                var_15 = ((((/* implicit */_Bool) ((arr_12 [i_3 + 3] [i_3] [i_3 + 1] [i_3 - 1]) >> (((arr_12 [i_3 - 1] [i_3 + 3] [i_3 + 2] [i_3 - 1]) - (18129838375316873189ULL)))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(var_1)))))) : ((+(((/* implicit */int) min((((/* implicit */short) (unsigned char)36)), ((short)-1)))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_15 [(signed char)16] [(signed char)16] [i_1] [(signed char)16] [0LL] [i_3 + 2] [(signed char)16]) - (((/* implicit */long long int) 4122308769U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) 3410846222U)) : (arr_15 [i_0] [i_1] [i_3] [i_3] [i_5] [i_3 + 2] [5ULL])))) : ((+(((unsigned long long int) -2147483640))))));
                                arr_22 [(unsigned short)11] [i_2] [i_0] = ((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned int) arr_13 [i_5] [i_1]))));
                            }
                            arr_23 [8] [(unsigned short)0] = ((/* implicit */_Bool) ((((int) var_7)) / (((/* implicit */int) ((signed char) 2054002335)))));
                            arr_24 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-7)) && (((/* implicit */_Bool) -5112083225934177178LL)))))) != (((((arr_11 [i_0] [i_2] [i_1] [i_0]) != (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2] [2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 1]))) : ((-(arr_15 [(_Bool)1] [i_1] [1] [i_3] [i_1] [i_1] [i_3 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_4);
}
