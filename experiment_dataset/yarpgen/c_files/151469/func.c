/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151469
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((short)12175), ((short)-12194)))), (min((((/* implicit */long long int) -556331873)), (1152921504606846975LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16130))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))) | (arr_1 [i_0])))));
                    var_19 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) 1152921504606846972LL)) ? (((/* implicit */int) min((((/* implicit */short) arr_4 [i_0] [i_2])), ((short)12193)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_4 [i_0] [i_0])))))), ((-(((/* implicit */int) (_Bool)1))))));
                    var_20 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    {
                        arr_19 [i_3] [i_3] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((arr_8 [i_5]) << (((6185254385251968446LL) - (6185254385251968442LL))))) >> ((((-(arr_8 [i_6]))) - (3781265468U)))));
                        arr_20 [i_3 - 1] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */short) (unsigned char)140);
                        arr_21 [i_4] [i_3] = ((/* implicit */unsigned char) max((1152921504606846980LL), (((/* implicit */long long int) (_Bool)1))));
                    }
                } 
            } 
        } 
        arr_22 [16LL] &= ((/* implicit */unsigned int) min((max((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)11701)))), (((((/* implicit */_Bool) arr_9 [12LL])) ? (((/* implicit */int) arr_12 [(unsigned char)2])) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_3])))))), ((-(((/* implicit */int) arr_14 [20LL] [i_3] [i_3] [(unsigned char)8]))))));
        var_21 = ((/* implicit */unsigned short) arr_9 [i_3]);
    }
    /* vectorizable */
    for (long long int i_7 = 4; i_7 < 14; i_7 += 1) 
    {
        var_22 = arr_17 [(unsigned short)8] [(unsigned short)8];
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_7 [(signed char)12] [(signed char)12])) : (((/* implicit */int) arr_7 [(unsigned short)18] [(unsigned short)18]))));
    }
}
