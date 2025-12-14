/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106909
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
    var_14 |= var_4;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [7ULL] [(unsigned short)7] = ((/* implicit */int) ((-1108034079) < (((/* implicit */int) (unsigned char)177))));
        arr_3 [i_0] = ((/* implicit */signed char) var_9);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = 9223372036854775807LL;
        var_16 = var_4;
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))));
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_11 [(short)4] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (-1108034079) : (((/* implicit */int) (short)-8807))))) ? (var_4) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (unsigned short)6695)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (-75614626) : (-1108034079)))) : (-8386536382715410242LL)))));
        arr_12 [i_2] [(signed char)9] = ((1467945018U) - (((/* implicit */unsigned int) var_0)));
    }
    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    arr_21 [i_5] [12LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */int) (signed char)-11)))) : (((/* implicit */int) var_10))));
                    arr_22 [i_3] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-102)))))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (75614626) : (((/* implicit */int) var_5))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_13))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 1) 
                    {
                        arr_33 [(_Bool)1] [i_6] [i_8] [i_3] [i_7] = ((/* implicit */unsigned char) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12)));
                        var_19 = ((/* implicit */unsigned char) var_3);
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */int) (unsigned char)90)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (((((/* implicit */_Bool) 8423485455380884323LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (8423485455380884323LL)))))))))));
                        var_21 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-12)))) | (var_11))) >= (((/* implicit */int) var_13))));
                        arr_34 [i_3] = ((/* implicit */unsigned char) 191585017);
                    }
                }
            } 
        } 
    }
}
