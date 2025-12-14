/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18710
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_4) | (((((/* implicit */int) (unsigned short)49388)) | (((/* implicit */int) (unsigned char)47)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_13 -= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (unsigned char)51)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2]))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(unsigned short)0] [i_0 + 2])) ? (((/* implicit */int) arr_0 [6U] [i_0 + 2])) : (((/* implicit */int) arr_0 [2] [i_0 + 2])))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) arr_2 [i_0]))));
        var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        arr_16 [i_1] [i_1] [i_3] [i_1] |= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)32)) - (((/* implicit */int) (unsigned char)64))))), (max((max((arr_10 [i_4 + 3] [i_3] [i_2] [i_1]), (((/* implicit */long long int) (unsigned char)227)))), (((/* implicit */long long int) var_11))))));
                        var_17 *= ((unsigned char) max((((/* implicit */int) min(((unsigned char)218), ((unsigned char)38)))), ((~(((/* implicit */int) (unsigned char)220))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_2;
                        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)204)))))))) == (((/* implicit */int) ((arr_19 [i_5 + 2] [i_3] [i_5] [i_5 - 1] [i_5 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5 - 1]))))))));
                        var_19 = ((/* implicit */signed char) min(((+(arr_17 [i_1] [i_1] [i_2] [i_1] [i_5 - 1] [i_5 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_3] [i_3] [i_1] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (unsigned char)198)))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                        {
                            arr_24 [i_1] [i_2] [i_1] [i_3] [i_5 + 1] [i_6] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned char)23)))), (((((((/* implicit */int) (unsigned char)40)) & (((/* implicit */int) (unsigned char)236)))) & (((/* implicit */int) min(((unsigned char)204), ((unsigned char)214))))))));
                            var_20 *= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)224)) / (((/* implicit */int) (unsigned char)218)))) * (((/* implicit */int) max(((unsigned char)228), ((unsigned char)215))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) var_11);
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_1]))));
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)217))));
                        }
                        for (short i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)35))));
                            var_25 = ((/* implicit */long long int) (~(max((arr_23 [i_8] [i_8] [i_8]), (((/* implicit */int) max(((unsigned char)204), ((unsigned char)34))))))));
                        }
                        for (short i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
                        {
                            var_26 += ((((/* implicit */int) arr_26 [i_9])) / (max((((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)48)))))));
                            var_27 += ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) ((((/* implicit */_Bool) arr_29 [i_9] [i_5] [i_1] [i_2] [i_1])) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_32 [i_2] [i_2] [i_2] [i_2]))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)28)) * (((/* implicit */int) (unsigned char)239))));
                        }
                    }
                    var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)54))));
                    arr_33 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) max(((unsigned char)51), ((unsigned char)217)))) > (((/* implicit */int) var_3)))));
                    var_30 = ((/* implicit */signed char) (~(var_7)));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) var_4);
    var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))) < (var_5)));
}
