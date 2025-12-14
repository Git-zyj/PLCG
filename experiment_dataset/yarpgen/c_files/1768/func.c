/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1768
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
    var_12 = ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */short) (+(min((9984568877760039779ULL), (((/* implicit */unsigned long long int) (signed char)108))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [1U] = arr_0 [i_0] [(short)6];
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_11 [11U] [(signed char)8] [i_2] [(short)10] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) arr_2 [i_2])) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) <= (((/* implicit */long long int) 496890897U))))))))) ? (min((1095282263U), (3798076398U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [0U])))))));
                        arr_12 [(signed char)3] [i_2] [i_2] [i_0] = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1095282263U)) ? (((/* implicit */int) (short)31656)) : (17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_0] [(signed char)12] [i_2])))) : (var_3)));
                    }
                } 
            } 
        } 
        arr_13 [3U] = ((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) (signed char)-47))));
        arr_14 [13U] = ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((((/* implicit */_Bool) 9984568877760039779ULL)) ? (2300666979U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        arr_19 [i_4] [8LL] = ((/* implicit */short) 2637271962U);
        arr_20 [i_4] = ((/* implicit */unsigned int) (signed char)60);
        arr_21 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (arr_18 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_22 [i_4] [i_4] = ((short) arr_18 [i_4]);
    }
    for (long long int i_5 = 4; i_5 < 13; i_5 += 1) 
    {
        arr_25 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [11LL] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5]))) : (var_8)))) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) ((signed char) (short)10707)))));
        arr_26 [(signed char)14] = ((/* implicit */short) var_10);
    }
    var_14 = ((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned long long int) var_0))));
}
