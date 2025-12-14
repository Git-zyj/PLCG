/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159721
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
    var_12 &= ((/* implicit */unsigned char) ((long long int) (-(((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) / (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 3])))))))));
        var_14 ^= ((/* implicit */unsigned char) arr_0 [i_0 + 2] [i_0 + 2]);
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))) != (((/* implicit */int) ((short) arr_4 [i_1])))));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                {
                    var_15 = ((((/* implicit */int) arr_8 [(short)16] [(unsigned short)22] [i_3])) % (((/* implicit */int) min((arr_5 [i_2 + 1]), (((/* implicit */short) var_6))))));
                    var_16 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) 869174261)))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((var_0) < ((-9223372036854775807LL - 1LL)))) ? (((/* implicit */int) (short)21341)) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(-5179010523969370270LL))))))))))));
                }
            } 
        } 
        var_18 -= ((unsigned char) (+(min((((/* implicit */unsigned int) arr_5 [i_1])), (var_5)))));
        arr_15 [i_1] |= ((/* implicit */unsigned int) var_6);
    }
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_17 [i_4] [i_4])))), (((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    arr_25 [i_4] [i_4] = ((/* implicit */long long int) var_7);
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(5112537891095198634ULL))))));
                    var_21 = ((/* implicit */unsigned short) (-(((var_10) ? (((((((/* implicit */int) (short)-32505)) + (2147483647))) >> (((((/* implicit */int) var_9)) - (81))))) : (min((((/* implicit */int) arr_7 [i_4] [(short)8] [i_6])), (arr_12 [i_4] [i_5] [i_4])))))));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_22 += ((/* implicit */unsigned int) ((int) ((_Bool) var_4)));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                {
                    var_23 |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_21 [i_7] [i_9])) : (((/* implicit */int) var_9))))));
                    arr_34 [i_7] [i_7] = ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7]))) != (0U))));
                }
            } 
        } 
    }
    var_24 += var_5;
}
