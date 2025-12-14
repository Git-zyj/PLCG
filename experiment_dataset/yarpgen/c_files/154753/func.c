/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154753
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
    var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) ((int) var_9))) ? (var_11) : (((((/* implicit */_Bool) -925921240)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11))))) == (((/* implicit */unsigned int) ((int) 4076842656U)))));
    var_14 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) 147193061U)))) ? (min((2097120U), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) >= ((~(((/* implicit */int) (signed char)113))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [(signed char)1] [7] = ((/* implicit */int) ((((/* implicit */_Bool) 4292870150U)) ? (((arr_0 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [12] [12]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        var_15 += ((/* implicit */signed char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    var_16 = var_5;
                    var_17 ^= ((/* implicit */signed char) (+(var_11)));
                }
            } 
        } 
        arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)106))))) <= (((((/* implicit */_Bool) 402496513U)) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40)))))));
    }
    var_18 = var_10;
    var_19 = ((((/* implicit */_Bool) ((var_4) % (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)49))))));
}
