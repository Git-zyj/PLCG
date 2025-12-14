/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154059
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_8)) < (max((var_6), ((~((-9223372036854775807LL - 1LL))))))));
    var_20 = ((/* implicit */unsigned long long int) var_9);
    var_21 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_18)))))))));
    var_22 = var_8;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((int) var_3))), (max((((/* implicit */unsigned long long int) 0LL)), (arr_1 [i_0 - 2])))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) var_2)))) | (((/* implicit */int) (!(var_2))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_3] [(unsigned char)0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) var_9))))))))), ((~((~(((/* implicit */int) var_7))))))));
                        arr_13 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((arr_9 [i_0 + 1] [i_2]) + (arr_9 [i_0 - 3] [i_2]))) - ((+(((((/* implicit */_Bool) -13LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (2321629145U)))))));
                        var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((unsigned char) var_15))))), (max((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_18))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        arr_16 [1U] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_4]))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((int) var_2)) : (((/* implicit */int) arr_15 [i_4]))));
        arr_17 [i_4] [i_4] = ((/* implicit */signed char) arr_15 [i_4]);
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) (signed char)-29))));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        {
                            arr_27 [i_4] [i_4] [17U] [i_4] [19LL] [i_4] = ((long long int) arr_24 [i_4] [21ULL] [i_6 + 1] [i_7] [i_8] [21ULL]);
                            var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_6 + 1] [i_6 + 1] [i_6 - 1]))));
                            arr_28 [(_Bool)1] [i_5] [(short)2] [i_7] [i_8] [i_8] = ((long long int) (+(-5547154034408748332LL)));
                        }
                    } 
                } 
            } 
            arr_29 [i_5] [(unsigned short)20] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) ((unsigned char) var_5))));
        }
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        arr_34 [i_9] = (~(1581372245));
        var_28 -= ((int) arr_11 [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
}
