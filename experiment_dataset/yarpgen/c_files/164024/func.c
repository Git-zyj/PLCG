/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164024
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
    var_19 = ((/* implicit */long long int) ((max((min((var_14), (var_14))), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_15))))) & (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */signed char) ((var_4) <= (var_4))))))))));
    var_20 += ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) (+(var_0)))) % (9223372036854775807LL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4 + 2] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_10 [i_4 - 1] [i_3] [i_2] [i_1] [i_0]));
                                var_21 = ((/* implicit */unsigned char) 16344000959256623731ULL);
                                arr_15 [i_0] [(unsigned short)7] [(short)7] [i_0] [(short)7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-109)) <= (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]);
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) (short)-28539);
                    arr_17 [i_1] [i_2] = var_4;
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) >= (var_12))))) >= (((unsigned long long int) var_2))));
                        var_24 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_5]);
                        var_25 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_5]))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-115)) < (((/* implicit */int) ((unsigned char) arr_2 [i_2] [i_1])))));
                    }
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_27 |= ((/* implicit */signed char) (_Bool)1);
                        var_28 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]);
                        arr_24 [i_0] [i_1] [12LL] [i_1] [i_6] = ((/* implicit */signed char) ((short) arr_19 [i_0]));
                    }
                }
            }
        } 
    } 
}
