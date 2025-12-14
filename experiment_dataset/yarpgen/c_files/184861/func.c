/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184861
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
    var_17 |= var_0;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_1])))) : ((+((-(arr_4 [i_0] [(unsigned short)13] [i_1])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] = ((/* implicit */long long int) var_0);
                                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_9)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) ((long long int) arr_6 [i_2] [i_1] [(unsigned char)0]));
                    arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) != (((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_15 [i_0] [(unsigned char)5] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [(short)8] [(short)8] [i_2]))));
                    arr_16 [i_0] [i_1] [6U] = ((/* implicit */unsigned int) (+(arr_11 [i_0] [i_1] [i_0] [10ULL])));
                }
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                {
                    arr_19 [7ULL] [5U] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) var_10)))) < (var_3)))) <= (((/* implicit */int) (unsigned char)246))));
                    var_21 += ((/* implicit */unsigned short) ((unsigned long long int) arr_5 [i_0] [i_1] [(unsigned short)2]));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    for (signed char i_7 = 4; i_7 < 10; i_7 += 3) 
                    {
                        {
                            arr_26 [i_0] [i_7] [(signed char)0] [i_7] = ((/* implicit */unsigned int) max((max(((-(var_12))), (((/* implicit */int) ((_Bool) (short)-1))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_21 [i_7 + 3] [i_7 + 2] [i_7 + 3] [i_7])) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_15)))))))));
                            var_22 = ((/* implicit */long long int) (((((-(var_14))) <= (((/* implicit */unsigned long long int) ((var_12) / (var_3)))))) ? ((((~(((/* implicit */int) var_10)))) | (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) (-(1ULL)))) ? (((var_9) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_0] [1ULL] [i_6] [i_6])))) : (((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_1] [i_7 - 4]))))))));
                            var_23 &= ((/* implicit */unsigned short) max((((arr_22 [i_1] [i_7 + 4] [i_7 + 4] [i_7 + 3]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_22 [i_1] [i_7 + 4] [i_7 + 4] [i_7 + 3])))), ((-(((/* implicit */int) var_1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_11);
    var_25 += ((/* implicit */_Bool) var_5);
}
