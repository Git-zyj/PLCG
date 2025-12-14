/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120840
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
    var_13 = ((/* implicit */unsigned int) (unsigned char)243);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_9 [i_0 + 1] [(_Bool)1] = ((/* implicit */short) ((unsigned char) 390129534407022904ULL));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            arr_13 [i_4] [15LL] [i_2] = 2089433182513854814ULL;
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((long long int) 3440998528U)) : (((/* implicit */long long int) 853968768U))));
                            arr_14 [i_0] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) 853968768U);
                        }
                        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [(short)13] [i_3] [i_5 - 2] = ((/* implicit */short) var_11);
                            var_15 = ((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_1 + 1]);
                            var_16 ^= ((/* implicit */unsigned char) ((short) (unsigned char)60));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            arr_22 [i_6] [i_6] [(_Bool)1] [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_1 + 3]));
                            var_17 = ((/* implicit */short) arr_18 [(short)17]);
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 1; i_7 < 21; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_0 + 1] [i_0] [i_2] [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)60)) >= (((/* implicit */int) (unsigned char)180))));
                            var_18 ^= ((/* implicit */unsigned int) (unsigned char)180);
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1 + 3] [i_1 - 1] [i_3] [i_7 + 2])) ? (72022409665839104ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_1 - 3] [i_1] [i_3] [i_7 - 1]))))))));
                            var_20 = ((/* implicit */unsigned int) arr_6 [i_1 - 3] [i_1] [i_1 - 2] [(short)3]);
                            var_21 += ((/* implicit */short) (-(((/* implicit */int) arr_23 [i_7] [22ULL] [i_7 + 1] [i_7] [i_7] [(short)4]))));
                        }
                    }
                } 
            } 
        } 
        arr_26 [1U] [0U] = ((/* implicit */_Bool) var_4);
    }
    for (unsigned short i_8 = 3; i_8 < 18; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_0))))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((short) ((_Bool) var_12))))));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
        arr_30 [i_8] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) 32767U)) / (arr_17 [i_8 - 3] [(short)13] [i_8] [9LL] [i_8] [(short)15] [i_8]))))));
    }
    var_24 = ((/* implicit */short) max((((/* implicit */unsigned int) var_5)), (0U)));
}
