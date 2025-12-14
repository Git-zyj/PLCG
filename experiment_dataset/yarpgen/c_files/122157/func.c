/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122157
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [(signed char)6] = var_9;
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */short) var_0);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            arr_16 [i_4] [i_1] [i_4] [i_1] = ((/* implicit */signed char) ((var_3) % (((/* implicit */long long int) ((/* implicit */int) ((short) var_13))))));
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (unsigned char)1)))) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) var_6)) : (var_10))) : (((/* implicit */unsigned long long int) ((arr_7 [i_0]) ? (((/* implicit */long long int) -783294251)) : (var_3)))))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))) : (((arr_6 [i_0] [i_0] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6)))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_1]))) : (16681348225730494024ULL))))));
                            arr_21 [i_5] [4LL] [4] = ((((((/* implicit */_Bool) var_13)) && (var_8))) ? (((/* implicit */int) (signed char)69)) : (((((/* implicit */int) (unsigned char)246)) % (((/* implicit */int) arr_2 [i_0])))));
                            arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5] [i_6] = (~(((/* implicit */int) (short)31589)));
                            var_18 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) var_10))) == (arr_12 [i_0] [i_1] [i_1] [6ULL])));
                            arr_23 [i_0] [i_1] [i_1] [i_5] [i_6] [i_5] = ((/* implicit */int) (short)-31082);
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */int) arr_4 [i_1] [6U]);
                            arr_27 [i_0] [i_5] [i_2] [(unsigned char)6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1] [i_2] [i_1]))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                        {
                            arr_30 [i_8] [i_5] [i_5] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_20 [i_5] [i_1] [i_1] [i_1] [i_8])) + (2147483647))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-31082)) : (((/* implicit */int) (short)20220)))) + (31097)))));
                            arr_31 [i_5] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((var_3) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_5])))))));
                        }
                        var_20 |= ((/* implicit */unsigned long long int) (short)-31611);
                    }
                    for (int i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)1)) > (((/* implicit */int) arr_7 [i_0]))));
                        arr_35 [i_0] [i_2] [i_2] [i_9] [i_0] [(signed char)4] |= ((/* implicit */unsigned int) ((((/* implicit */int) (short)31080)) << (((((/* implicit */int) (signed char)59)) - (53)))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), ((+((~(2418069680U)))))));
                        arr_36 [i_9] [i_1] [i_2] [i_9] [i_9] = var_3;
                    }
                    arr_37 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0])) >> (((arr_0 [i_1]) - (2440893808788142498ULL)))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (unsigned char)246))));
    }
    var_24 = ((/* implicit */unsigned int) var_12);
}
