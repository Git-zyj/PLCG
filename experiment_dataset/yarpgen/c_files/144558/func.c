/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144558
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) (unsigned char)0);
        arr_2 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)35411)))), ((+(((/* implicit */int) (signed char)24))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_3))))));
        var_21 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) (+(arr_3 [i_2])));
                        var_23 = ((/* implicit */unsigned short) var_18);
                        var_24 = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_2 - 3]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_25 ^= ((/* implicit */long long int) ((arr_11 [i_4]) / (((/* implicit */int) var_18))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 0)) ? (arr_10 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
    }
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned char)0))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)7)), ((~(((/* implicit */int) (unsigned char)0))))))) : (-5816979610461775522LL)));
        var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (-185342621)))) ? (((/* implicit */int) ((((/* implicit */int) var_17)) <= (((/* implicit */int) (unsigned char)255))))) : (((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) (unsigned short)0)))))));
        var_29 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5] [(unsigned short)0] [i_5]))));
    }
    var_30 = ((/* implicit */unsigned char) var_15);
}
