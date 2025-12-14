/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133248
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
    var_17 += ((/* implicit */unsigned long long int) min((var_4), (min((((/* implicit */unsigned char) var_16)), (((unsigned char) var_5))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_18 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) var_0))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 -= arr_1 [12] [12];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_20 -= ((/* implicit */unsigned char) ((arr_2 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 3] [i_3] [(unsigned char)0])))));
                        var_21 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1] [i_2] [i_0 - 1]))))) > (arr_2 [i_1]))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2] [i_0]))))))))));
                    var_23 = ((/* implicit */short) arr_8 [(unsigned char)3]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_24 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4]))));
                        var_25 ^= ((/* implicit */unsigned int) ((((long long int) var_12)) - (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                    {
                        var_26 -= ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_1 [i_0 - 1] [i_1])) | (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
                        var_27 = ((/* implicit */short) var_16);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [(short)10] [i_2] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) -6913091874185722533LL)))));
                        var_28 = ((/* implicit */int) ((-1804392625) < (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] [i_0])));
                        var_29 = ((/* implicit */short) ((unsigned int) var_1));
                        arr_19 [i_0] [i_0] [12ULL] [i_2] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0 + 1]);
                        /* LoopSeq 2 */
                        for (long long int i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            var_30 += ((/* implicit */long long int) ((int) arr_1 [7LL] [i_0 + 2]));
                            var_31 = ((/* implicit */unsigned char) ((4294967295U) | (((/* implicit */unsigned int) var_12))));
                        }
                        for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            var_32 = ((((/* implicit */_Bool) var_8)) ? (arr_17 [i_0] [i_0 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 + 4] [i_0 + 3] [i_0] [i_0 + 1])) ? (((long long int) arr_3 [i_6])) : (((long long int) (unsigned short)48330))));
                            arr_24 [i_0] [i_2] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (signed char)103)))));
                            arr_25 [i_8] [i_2] [0U] [i_2] [i_2] [i_2] [0U] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0 + 3]))));
                        }
                    }
                }
            } 
        } 
    }
    for (short i_9 = 1; i_9 < 10; i_9 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */int) arr_9 [i_9] [i_9] [6]);
        var_35 = ((/* implicit */unsigned long long int) var_10);
        var_36 += ((/* implicit */short) (+(9606688288532145288ULL)));
    }
}
