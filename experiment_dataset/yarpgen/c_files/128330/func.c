/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128330
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_8))))) >> ((((-(var_10))) + (4660192629529204502LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) max((var_12), (min((((/* implicit */int) (!(((((/* implicit */_Bool) arr_4 [(_Bool)1])) && (((/* implicit */_Bool) arr_1 [i_1]))))))), (((((/* implicit */int) var_2)) >> ((((+(var_10))) - (4660192629529204454LL)))))))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (short)18943))))) <= (min(((+(arr_3 [i_0 - 2] [(short)12]))), (((/* implicit */long long int) max((arr_4 [(_Bool)1]), (((/* implicit */unsigned short) arr_1 [i_0 + 1]))))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) (short)6911)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-6909)) || (((/* implicit */_Bool) (short)-3024))))))))));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0 - 2]);
                }
                /* vectorizable */
                for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((short) arr_3 [i_0 + 1] [(signed char)8])))));
                    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_5 [i_0] [i_1] [i_3])));
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        arr_12 [i_4] [i_4] [i_4] [i_1] = ((/* implicit */short) (((~(2171359755U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_4] [i_4])))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_7))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2171359772U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)6915))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */short) ((arr_16 [i_0 - 3] [i_0 + 1] [i_0] [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 2]) < (arr_16 [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0] [i_0 - 1] [18U] [i_0 - 1])));
                            var_21 -= ((/* implicit */unsigned long long int) arr_16 [1ULL] [(_Bool)1] [i_4] [i_3 - 2] [i_1] [i_1] [i_0]);
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_19 [i_6] [i_1] [i_3 + 2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_8 [i_4] [i_1] [i_1] [i_0]);
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [5] [i_0 - 1] [i_3 + 3] [5] [i_6] [i_3] [i_3]))));
                            arr_20 [i_0] [i_1] [i_1] [i_4] [i_6] [i_3] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (short)25193)))));
                            arr_21 [i_0] [i_1] [i_3] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))));
                            var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [(unsigned char)4] [i_4] [i_3 - 1] [i_6])) ^ (((/* implicit */int) var_2)))) + (((((/* implicit */int) var_8)) / (((/* implicit */int) var_2))))));
                        }
                        var_24 = ((/* implicit */short) arr_6 [i_1] [i_1] [(short)13] [i_1]);
                    }
                    for (signed char i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */short) (((_Bool)1) ? (2171359772U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_0 - 2] [i_3 - 1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_0 - 2] [i_3 - 2]))));
                        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0 - 2]))));
                        var_28 -= ((/* implicit */unsigned int) (((!(arr_17 [i_0] [i_0] [i_3] [i_7] [(short)11] [i_1] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (arr_16 [i_7 + 3] [i_7 + 1] [i_7] [i_7] [i_0 - 3] [i_0 - 2] [i_0])));
                        var_29 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [(unsigned short)4] [(unsigned char)10] [i_3] [i_7])) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_13 [i_0] [i_7 + 1] [(unsigned char)19] [i_7] [i_1] [i_0] [i_1])));
                    }
                    for (int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) var_7);
                        var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0)))) ? (arr_16 [(unsigned short)1] [i_1] [i_1] [20LL] [i_3 + 4] [i_3] [(signed char)11]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [10ULL])) || (((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [i_3] [i_8]))))))));
                        var_32 = var_7;
                        arr_26 [i_1] [i_1] [i_8] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_17 [i_8] [i_0 - 2] [i_3] [i_3 + 1] [i_8] [i_3 + 1] [i_3]))));
                    }
                    for (long long int i_9 = 2; i_9 < 23; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [20U])) + (var_0))))));
                        arr_29 [i_0 + 1] [i_1] [i_0 + 1] [i_1] [(unsigned char)20] = ((/* implicit */unsigned int) (~(arr_3 [i_9 - 1] [i_1])));
                    }
                    var_34 = ((/* implicit */_Bool) var_6);
                }
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)58465)))))));
            }
        } 
    } 
}
