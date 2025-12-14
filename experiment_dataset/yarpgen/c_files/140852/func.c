/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140852
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -327740135)) ? (((/* implicit */unsigned int) ((-327740135) + (((/* implicit */int) (short)29576))))) : (((((/* implicit */_Bool) 113818149581660250LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (-327740135) : (((/* implicit */int) var_7))))) : (220981249U)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] |= ((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) var_12)) ? (arr_3 [i_2] [i_1] [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (unsigned short)65524)))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_0] [i_0] = var_4;
                            var_21 = ((/* implicit */long long int) max((var_21), (arr_14 [i_0 - 1] [i_3] [i_2] [i_0 - 1] [i_4] [i_3] [i_0])));
                        }
                        for (signed char i_5 = 2; i_5 < 17; i_5 += 4) 
                        {
                            arr_19 [i_0] [(unsigned short)1] = ((/* implicit */unsigned long long int) arr_10 [i_3] [9] [i_2] [i_2] [i_0]);
                            var_22 ^= ((/* implicit */unsigned int) max((((var_18) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) var_7))));
                            var_23 = ((/* implicit */unsigned char) arr_16 [i_5] [i_2] [i_5 - 2] [0LL] [i_2]);
                        }
                        var_24 = ((/* implicit */long long int) ((max(((~(((/* implicit */int) (signed char)101)))), (((/* implicit */int) (unsigned char)196)))) % (((/* implicit */int) (signed char)87))));
                        var_25 = ((arr_5 [i_3] [i_2]) % (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_1]))));
                        arr_20 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((_Bool) max((((((/* implicit */int) var_5)) + (var_9))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        arr_23 [i_0] = ((/* implicit */unsigned int) ((short) (unsigned short)61440));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (arr_2 [i_0 - 3])));
                        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max((127ULL), (((/* implicit */unsigned long long int) (unsigned short)16)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19292)) && (((/* implicit */_Bool) (unsigned short)61440)))))))))));
                        arr_24 [i_0 + 2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [(unsigned char)4] [i_6] [(unsigned char)4])) || (((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_2] [i_6]))))), (min((arr_16 [i_0] [i_0] [i_0] [12LL] [i_0 + 1]), (arr_16 [i_0] [i_1] [i_1] [i_2] [17LL])))));
                        var_28 = ((/* implicit */_Bool) (+((+(arr_8 [i_0] [i_0 + 2] [6] [6])))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        arr_27 [i_7] [(_Bool)1] [i_2] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_26 [i_7]))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0 - 2])) ? (((/* implicit */int) arr_9 [i_0 + 2])) : (((/* implicit */int) arr_9 [i_0 - 3]))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)61440)) ? (arr_22 [i_0] [i_0] [i_1] [i_1] [3LL] [i_7]) : (((/* implicit */unsigned int) arr_0 [i_7])))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 1] [i_0] [i_2] [i_0 + 1]))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_31 = ((/* implicit */signed char) var_12);
                        arr_30 [i_8] = max((((/* implicit */long long int) max((arr_25 [i_0 - 2] [(unsigned short)4] [i_2] [(unsigned char)17] [i_1]), (var_10)))), (((var_2) | (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0 - 2] [i_0 - 2] [i_0 - 2] [13] [i_0 - 1]))))));
                    }
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(var_11)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_3)))))))));
    }
    var_33 = var_18;
    /* LoopSeq 2 */
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        arr_33 [i_9] [i_9] = ((/* implicit */signed char) arr_31 [0ULL] [i_9]);
        var_34 += ((/* implicit */unsigned short) (signed char)-126);
    }
    for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        arr_36 [i_10] = ((/* implicit */unsigned short) var_18);
        arr_37 [i_10] = ((/* implicit */unsigned long long int) var_15);
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_10] [i_10]))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) | (1871647340531443619ULL))))))));
        var_36 = ((/* implicit */unsigned short) arr_35 [i_10]);
    }
}
