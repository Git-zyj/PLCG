/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113574
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) 5)))));
                    var_17 &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_2] [i_1] [i_2 - 1]))));
                    var_18 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])))))) | (((arr_5 [i_1] [i_1] [i_1]) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(signed char)6] [i_1] [i_2])))))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = (+(((/* implicit */int) ((unsigned short) var_12))));
        arr_10 [(signed char)6] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) 3899157877U))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [(short)11] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
        arr_11 [2ULL] [i_0] &= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (signed char)-44)) || (((/* implicit */_Bool) (signed char)-42)))));
    }
    var_20 = var_7;
    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    var_22 = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), ((unsigned char)68))))) : (min((((/* implicit */unsigned long long int) (unsigned char)150)), (var_5)))))));
    var_23 &= ((/* implicit */signed char) max((var_15), (min((((((/* implicit */_Bool) var_14)) ? (-3378607570749509392LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_4))))));
}
