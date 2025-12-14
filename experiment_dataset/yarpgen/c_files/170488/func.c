/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170488
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)6472)) ? (((/* implicit */int) (unsigned short)59569)) : (((/* implicit */int) arr_0 [i_0 - 1])))) + ((+(((/* implicit */int) arr_0 [i_0 - 1])))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_20 &= ((/* implicit */unsigned int) ((unsigned short) arr_1 [6] [(short)18]));
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [(signed char)22])) || (var_5))))));
                    arr_10 [i_0] [4LL] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6478))) : (11525106496056035893ULL)));
                }
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) var_7);
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_13 [i_0 + 2] [i_0 + 2]);
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) min(((unsigned short)16661), ((unsigned short)65535)))))))))));
                }
                for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    arr_18 [i_0] [i_0] [i_4] = (unsigned char)199;
                    arr_19 [i_0] [i_1] = ((/* implicit */unsigned char) (short)27375);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        arr_24 [i_5] [i_0] [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((unsigned char) ((min((6921637577653515723ULL), (((/* implicit */unsigned long long int) (unsigned short)59056)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))));
                        var_23 = ((/* implicit */unsigned int) (unsigned short)48866);
                        arr_25 [i_0] = ((/* implicit */short) (unsigned short)48180);
                    }
                    arr_26 [i_0] = ((/* implicit */long long int) ((int) arr_22 [4U]));
                }
                for (unsigned char i_6 = 1; i_6 < 23; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_0])), (18446744073709551612ULL))))));
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_12))));
                                var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), ((-(((/* implicit */int) (unsigned char)4))))));
                            }
                        } 
                    } 
                    var_27 *= (signed char)0;
                }
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((unsigned short) arr_7 [(signed char)22] [i_0] [(signed char)22])))));
            }
        } 
    } 
    var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))) + (var_6)));
    var_30 *= ((signed char) var_8);
}
