/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112413
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
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)3968), ((short)-3961)))) ? (((/* implicit */int) arr_3 [i_0 - 3] [i_0 + 1] [i_0])) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((((((/* implicit */int) (_Bool)1)) ^ (0))) << (((min((-2), (((/* implicit */int) var_15)))) + (24))))) : (1)));
                arr_6 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483627)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775805LL)) ? (((/* implicit */int) arr_1 [i_0])) : (2147483647)))) : (min((arr_4 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) var_10)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_15 [i_3] [i_1] [i_1] [i_3] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)194)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [12LL])) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (signed char)121))))) ? (min((arr_4 [15LL] [15LL] [i_1]), (((/* implicit */unsigned int) (signed char)-7)))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-20)), (arr_9 [i_2 - 1] [i_2 - 1] [i_1]))))))));
                                arr_16 [i_0] [i_3] = ((/* implicit */long long int) (+(((((((/* implicit */int) var_8)) - (((/* implicit */int) arr_2 [i_0])))) - (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) arr_0 [i_4 + 1])) : (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_0] = ((/* implicit */unsigned char) min((max(((+(arr_9 [i_0] [i_1] [i_2]))), (((/* implicit */int) arr_2 [i_0])))), (max(((-2147483647 - 1)), ((-(730692120)))))));
                }
                for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_18 += ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) (short)-3947)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) : (arr_22 [i_1] [i_6]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0 - 3] [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)7))) >= (var_6)))) : (((/* implicit */int) (short)-32763)))))));
                        arr_24 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-102)) == ((((+(((/* implicit */int) arr_2 [i_0])))) & (((/* implicit */int) arr_23 [i_5] [i_5] [i_5 + 2] [i_5 + 4]))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        arr_28 [(unsigned short)7] [i_1] [i_1] [i_5] [i_0] [i_7] = ((/* implicit */unsigned char) arr_20 [i_0 + 2] [i_5 - 2] [i_0 + 2]);
                        arr_29 [i_0] [i_0] [1U] = ((/* implicit */signed char) (-(((/* implicit */int) arr_27 [i_7]))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)8)))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 4; i_8 < 13; i_8 += 2) 
                    {
                        var_20 ^= ((/* implicit */signed char) var_2);
                        arr_34 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                    }
                }
                arr_35 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (arr_31 [i_0] [i_0] [i_0 + 1])))) == (arr_33 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_17);
}
