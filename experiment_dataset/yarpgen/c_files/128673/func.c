/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128673
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((arr_3 [i_2] [i_0]) ^ (var_8)))));
                    arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */int) ((unsigned short) 2147483640))), (min((((/* implicit */int) var_1)), (var_3))))));
                    var_11 += ((/* implicit */unsigned long long int) ((signed char) (unsigned short)21109));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_11 [i_2] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_1 [i_3])) / (((/* implicit */int) (short)-1)))) : (((int) (unsigned short)26181)))), (((/* implicit */int) var_7))));
                        var_12 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((long long int) var_3))) ? (min((var_5), (var_9))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (unsigned short)21103))))))), (((((long long int) -2147483640)) ^ (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))))));
                        var_13 = ((/* implicit */short) var_9);
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((unsigned short) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_7)))))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)44432)) <= (((/* implicit */int) var_0))))))))));
                            var_16 *= ((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)16128)), ((unsigned short)21087)));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 2; i_5 < 14; i_5 += 4) 
                        {
                            var_17 += ((unsigned short) var_4);
                            var_18 = ((/* implicit */_Bool) var_9);
                            arr_18 [i_1] [i_1] = ((/* implicit */_Bool) var_2);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_19 = ((short) max((arr_5 [i_0] [i_1] [i_1] [i_6]), (((/* implicit */unsigned long long int) ((unsigned short) var_5)))));
                            var_20 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (var_3)))) : (min((var_8), (((/* implicit */unsigned long long int) arr_0 [i_1])))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) 2147483642)))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9)))))) ? (((((/* implicit */int) var_0)) / (((((/* implicit */_Bool) (unsigned short)28653)) ? (((/* implicit */int) (unsigned short)8188)) : (((/* implicit */int) (short)29031)))))) : (((/* implicit */int) var_2))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((arr_19 [14LL]), (arr_19 [11LL]))))));
                            var_23 = ((/* implicit */short) max((((((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) var_3)))) - (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)36882))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8)))), (((2147483621) == (var_3))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [2LL] [i_1] [i_1] [7] = ((/* implicit */int) ((signed char) (unsigned short)44405));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [(signed char)6] [i_3] [i_0] |= ((/* implicit */unsigned short) ((_Bool) var_7));
                            var_24 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)44458)) : (2147483640))) ^ (((/* implicit */int) var_7))))));
                            var_25 = ((/* implicit */signed char) ((unsigned short) ((((unsigned long long int) (signed char)-33)) | (((((/* implicit */unsigned long long int) var_9)) ^ (var_8))))));
                        }
                        var_26 = ((/* implicit */_Bool) min((((((/* implicit */int) (signed char)32)) | (((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] [i_3])))), (min((-297284210), (((/* implicit */int) var_4))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_13 [i_0] [i_1] [i_2]))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-25938))) | (3118663031420973834LL)));
}
