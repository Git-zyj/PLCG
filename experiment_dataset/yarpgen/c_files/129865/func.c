/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129865
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
    var_20 = ((/* implicit */signed char) ((var_0) + (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-24670)))))));
    var_21 = min((((/* implicit */unsigned long long int) var_19)), (((((((/* implicit */_Bool) var_18)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25752))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63)))))))));
    var_22 = ((/* implicit */unsigned long long int) (+((+(((((((/* implicit */int) var_4)) + (2147483647))) << (((var_1) - (28388180U)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_23 = (-(((((/* implicit */int) (unsigned char)116)) << (((18446744073709551615ULL) - (18446744073709551596ULL))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 7; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            var_24 = ((/* implicit */short) arr_3 [i_0] [i_3 + 4]);
                            var_25 = ((/* implicit */signed char) var_14);
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_26 = ((/* implicit */_Bool) (signed char)-44);
                            arr_14 [(unsigned char)7] [i_1] [i_1] [i_2] [i_3 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) != (var_12)));
                            var_27 ^= ((/* implicit */signed char) ((arr_10 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 2] [1U] [i_2] [i_2 + 2] [i_2] [i_2 + 2])))));
                            var_28 += ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2 + 1] [i_2] [i_2] [i_3 + 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 2] [4] [i_2 - 1] [i_3] [i_3 - 2])))));
                        }
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1282925117)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32755)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-32755)) != (((/* implicit */int) var_4)))))) >= (((((/* implicit */_Bool) var_3)) ? (-3725835773743600933LL) : (((/* implicit */long long int) var_0)))))))));
                        var_31 = ((/* implicit */unsigned short) (+(arr_12 [i_0] [i_0] [i_2 + 2] [i_6 + 1] [i_0])));
                    }
                    for (short i_7 = 2; i_7 < 7; i_7 += 3) 
                    {
                        var_32 += ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_1] [i_2 + 1] [9LL] [i_7 + 2]);
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (unsigned char)141)))))));
                        var_34 = ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) -2570834404233870524LL)) ? (2570834404233870521LL) : (((/* implicit */long long int) var_18)))) <= (max((var_14), (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1] [(unsigned char)5] [i_0])))))));
                    }
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 1])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2 + 1])) > (((/* implicit */int) arr_4 [i_2 + 1]))))) : (((/* implicit */int) arr_4 [i_2 + 1]))));
                    arr_20 [i_0] = ((/* implicit */short) (~(2570834404233870536LL)));
                }
            } 
        } 
    } 
    var_36 *= ((/* implicit */unsigned int) var_10);
}
