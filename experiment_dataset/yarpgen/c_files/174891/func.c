/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174891
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
    var_10 = ((/* implicit */_Bool) (short)32767);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) | ((~(arr_1 [i_0])))));
        var_12 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_3)))) || (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (short)32767))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((arr_0 [(_Bool)1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)28))));
    }
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((var_4) - (2972883415U)))))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6)))));
        var_14 ^= ((/* implicit */unsigned int) (short)32765);
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */short) var_0)), (min((((/* implicit */short) (signed char)37)), ((short)32759)))));
        var_15 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (var_5) : (var_4)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_8)))))) >= ((+(((/* implicit */int) var_3))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((max((var_4), (((/* implicit */unsigned int) var_7)))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) ? (min((min((((/* implicit */unsigned long long int) var_7)), (arr_0 [i_2]))), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */int) (short)-32766)) <= (((/* implicit */int) (short)32759)))))))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        var_17 += ((/* implicit */_Bool) ((((unsigned int) var_0)) << (((var_6) % (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 3; i_6 < 16; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_27 [i_4] [i_3] [i_4] [i_5] [i_5] [i_3] = ((unsigned char) (short)-32746);
                                arr_28 [i_7] [i_4 - 1] [i_4] [i_5] [(unsigned char)12] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_25 [9ULL] [i_4] [9ULL] [i_5] [i_4] [i_6 + 1] [i_7]))))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        arr_32 [i_4] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_1))))));
                        var_18 -= ((/* implicit */unsigned char) var_7);
                        arr_33 [i_3] [i_3] [i_4] [i_4 - 1] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        arr_34 [i_4] [i_4] [i_5] [i_8] [i_4] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                        arr_35 [i_3] [i_3] [i_4] [i_4] [i_5] [i_8] = ((/* implicit */unsigned long long int) (short)-32746);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_18 [i_3] [i_9]))))));
                                arr_41 [i_5] [i_4] = ((/* implicit */signed char) (+(((int) arr_31 [i_3] [i_4] [i_4]))));
                                arr_42 [i_9] [i_9] [i_4] [(signed char)8] [i_4] = ((/* implicit */int) (!(arr_13 [i_4 - 1] [i_4 - 1])));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_3] [i_4 - 1] [i_4 - 1] [i_4 - 1]))) >= ((+(var_4)))))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */unsigned int) (unsigned short)6679);
                }
            } 
        } 
        var_22 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32725)) ? (var_5) : (arr_17 [i_3] [i_3])))) ? (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (short)32746))))) : (((((/* implicit */long long int) var_5)) | (var_6))));
        arr_43 [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        arr_44 [i_3] = ((/* implicit */unsigned char) ((4013853012383397573ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_3])))));
    }
    var_23 *= ((/* implicit */signed char) var_4);
}
