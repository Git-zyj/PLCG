/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110377
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
    var_16 &= ((/* implicit */short) var_12);
    var_17 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_9))));
                    arr_7 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [(unsigned char)8] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_3])) : (((/* implicit */int) var_11))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_15))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_1 + 1])) >= (((/* implicit */int) ((var_6) <= (((/* implicit */long long int) -1))))))))));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 2) 
                        {
                            arr_17 [i_0] [(short)5] [i_2] [i_3] [(short)5] = ((/* implicit */signed char) arr_15 [i_1] [i_1] [i_2] [i_1 + 2] [i_5] [i_3] [i_3]);
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */unsigned short) ((var_5) < (((/* implicit */int) var_11))));
                            arr_19 [i_0] [i_1] [i_0] [i_3] [i_5] = var_2;
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_2)))))))));
                            arr_20 [i_3] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0] [3LL] [i_2] [i_3] [i_3] [i_5]) : (((/* implicit */long long int) var_5)))) / (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                        }
                    }
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) var_11)))))));
                        arr_23 [i_1] [(short)2] [i_2] [i_1] [i_0] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))) / (((unsigned long long int) var_10))));
                    }
                    for (signed char i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        var_23 += ((/* implicit */short) ((((/* implicit */unsigned long long int) var_2)) == (arr_24 [i_7 + 1] [(unsigned char)14] [i_2] [i_1] [i_2] [i_7])));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [(short)2] [i_7 + 1] [i_7]))) & (arr_4 [i_0] [i_1 + 1] [i_2]))))));
                    }
                }
                for (long long int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned char) var_14);
                    arr_28 [i_8] [i_8] [i_1] [i_1] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) ((short) var_0)))))));
                }
                var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [8ULL] [8ULL] [i_1])) ? (((/* implicit */int) arr_21 [17ULL])) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (min((((/* implicit */long long int) var_10)), (var_13))))), (min((arr_6 [i_1 - 2] [i_1 + 1] [i_1 - 2]), (((/* implicit */long long int) ((unsigned short) (unsigned short)29242)))))));
            }
        } 
    } 
}
