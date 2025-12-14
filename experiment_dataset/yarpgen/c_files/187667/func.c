/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187667
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
    var_20 += ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (unsigned char)253))));
                    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                }
                for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    var_23 -= ((/* implicit */unsigned char) var_15);
                    /* LoopSeq 1 */
                    for (signed char i_4 = 2; i_4 < 20; i_4 += 4) 
                    {
                        var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) var_19)))))) ? (((/* implicit */int) (unsigned short)34951)) : (((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_4 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_4 - 2] [i_1 + 1])))) >= (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_4 + 2] [i_1 + 1])), (arr_1 [i_4 - 1] [i_1 + 1]))))));
                    }
                    arr_12 [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_3]);
                }
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_5] [i_1] [i_0] [i_6] = ((/* implicit */short) ((arr_2 [i_1 - 1]) / (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)60643)))))));
                        arr_18 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 1) 
                        {
                            arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [i_5])))));
                            arr_23 [i_0] [i_5] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92)))))) ? (((/* implicit */int) arr_20 [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7 + 1] [i_7 - 3] [i_7] [i_7 - 2])) : (((/* implicit */int) (unsigned short)64587))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 18; i_8 += 1) 
                        {
                            arr_26 [i_0] [i_0] [i_5] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)63))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (7494539631453328515ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8 + 4] [i_8] [i_8] [i_6 + 1] [i_6 + 2] [i_1 - 1] [i_0])))));
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((var_14) ? (((((/* implicit */_Bool) 256796652U)) ? (((/* implicit */unsigned int) 1823008218)) : (1946243933U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)1))))))))));
                            arr_27 [i_1 + 1] [i_5] [i_6 + 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_6 - 1] [i_8 + 1] [i_6 - 1]))));
                        }
                        arr_28 [i_0] [i_1] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
                    }
                    arr_29 [i_5] [i_5] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((-6192071269820918541LL) >= (((/* implicit */long long int) var_6)))))));
                }
                var_28 = ((/* implicit */unsigned int) max((var_5), ((signed char)127)));
                var_29 = ((/* implicit */unsigned char) ((unsigned int) (((!(((/* implicit */_Bool) 2021251524U)))) ? (-787628616) : (((/* implicit */int) (unsigned char)7)))));
                var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (unsigned short)28393)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1 - 1])))))))));
            }
        } 
    } 
}
