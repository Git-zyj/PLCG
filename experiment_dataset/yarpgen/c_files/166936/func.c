/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166936
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [(unsigned char)8] [i_1] [i_3] [i_1]))) < (6819421924349715290LL))) ? (((/* implicit */long long int) arr_9 [i_1] [i_3] [i_2] [i_2 + 1] [i_2 - 1] [i_3])) : (var_3)));
                        var_10 |= ((/* implicit */int) ((unsigned int) (unsigned char)255));
                    }
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (short i_5 = 1; i_5 < 9; i_5 += 3) /* same iter space */
                        {
                            var_11 = ((/* implicit */int) (+(-6819421924349715291LL)));
                            arr_18 [i_0] [i_4] [i_2] [i_4] [i_0] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_4] [i_0]) : (arr_4 [i_0] [i_5 + 2]))) << ((((+(arr_4 [i_0] [i_4]))) - (6693399881762832812ULL)))));
                            var_12 ^= ((/* implicit */unsigned long long int) arr_5 [i_0]);
                        }
                        for (short i_6 = 1; i_6 < 9; i_6 += 3) /* same iter space */
                        {
                            arr_21 [(short)4] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) var_8);
                            var_13 = (~(((-6819421924349715290LL) ^ (((/* implicit */long long int) arr_9 [i_0] [i_4] [(short)6] [i_0] [i_2 + 1] [7ULL])))));
                            var_14 = ((/* implicit */unsigned int) min((-373995134651605761LL), (((/* implicit */long long int) (signed char)44))));
                        }
                        for (short i_7 = 1; i_7 < 9; i_7 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */int) (short)-30689);
                            arr_24 [i_0] [(_Bool)1] [i_2] [i_4] [i_4] [10] = ((/* implicit */unsigned int) arr_2 [i_0]);
                            arr_25 [i_0] [i_1] [i_2 + 1] [i_2 - 1] [i_7] [i_4] = ((/* implicit */signed char) arr_2 [i_1]);
                            arr_26 [i_0] [i_1] [i_1] [(_Bool)1] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -6819421924349715314LL)) ? (6819421924349715299LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_7] [i_1] [i_4] [i_2] [i_1] [4])) > (-373995134651605761LL)))))))));
                        }
                        /* vectorizable */
                        for (short i_8 = 1; i_8 < 9; i_8 += 3) /* same iter space */
                        {
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (_Bool)1);
                            arr_30 [i_4] [i_4] [i_0] [(short)11] [(short)11] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34090))) : (arr_12 [i_0] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) == (((/* implicit */long long int) var_1))))))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_9 = 2; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) max((((unsigned int) 60695518)), (((/* implicit */unsigned int) (unsigned short)65535))));
                            arr_34 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) 6819421924349715314LL);
                            arr_35 [(unsigned short)2] [i_1] [i_1] [i_2 - 1] [i_1] [i_9 - 2] &= ((/* implicit */_Bool) var_0);
                        }
                        /* vectorizable */
                        for (signed char i_10 = 2; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            var_17 *= ((/* implicit */int) ((_Bool) (unsigned char)69));
                            var_18 ^= ((/* implicit */unsigned int) (~(var_0)));
                        }
                        for (signed char i_11 = 2; i_11 < 11; i_11 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) (unsigned short)7514);
                            arr_42 [(short)3] [i_0] [(short)3] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((((arr_23 [i_2 - 1] [i_1] [i_2 - 1] [i_4] [i_4]) && (arr_23 [i_2 + 1] [i_1] [i_2] [i_1] [i_4]))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)62)) <= (((/* implicit */int) arr_17 [i_0] [i_2 + 1] [i_0] [6] [i_11] [i_1]))))) : (((/* implicit */int) arr_32 [i_0] [i_1] [i_2 - 1] [i_4] [i_11 + 1]))));
                            arr_43 [i_0] [i_1] [i_2 + 1] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 17977451944468256176ULL))));
                        }
                        arr_44 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((arr_37 [i_4] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_4]), (((/* implicit */int) (signed char)-124))))), (469292129241295439ULL)));
                        var_20 *= ((/* implicit */unsigned long long int) var_1);
                        arr_45 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) -5172271796217387927LL)) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))) ^ ((+(var_0)))));
                    }
                    arr_46 [i_1] [i_1] = -1LL;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_5);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)69)) - (((/* implicit */int) (unsigned char)76))));
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_2))));
}
