/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122167
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
    var_18 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_9)) : (var_3))), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) ((signed char) var_14));
        var_20 = ((/* implicit */long long int) var_9);
        var_21 ^= ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)1]))) < (var_15))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                        arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) var_5));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_4] [i_4 - 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4])) < (arr_12 [i_4] [i_4])))) : (((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1])))) / (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)255)), (var_13)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_13 [9LL] [i_4])), ((unsigned char)22)))))))));
        var_23 = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_4])) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) var_16))))))));
    }
    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)8))));
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    {
                        arr_25 [(_Bool)1] [i_5] [(_Bool)1] [i_7] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        arr_26 [i_5] [i_6] [i_7] [i_8] [i_5] [i_6] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (arr_21 [i_8] [i_7] [i_6] [i_5]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)255)))))) >= (((((/* implicit */_Bool) arr_20 [i_7] [i_6])) ? (18446744073709551615ULL) : (18446744073709551615ULL)))))))));
                        var_25 = ((/* implicit */unsigned int) var_11);
                    }
                } 
            } 
        } 
    }
}
