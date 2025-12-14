/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110473
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
    var_19 = max(((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 2147483640)) : (var_14))))), (var_14));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [16U] |= max((((/* implicit */unsigned long long int) min((2147483647), (2147483640)))), (min((((/* implicit */unsigned long long int) (~(var_8)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_16)) : (var_18))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_15))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        var_20 = ((/* implicit */unsigned int) (unsigned char)46);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_21 = ((/* implicit */long long int) (+((-(((/* implicit */int) var_15))))));
            /* LoopNest 3 */
            for (signed char i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_2 + 1] [i_3 - 2])) ? (arr_10 [i_0] [i_2 - 4] [i_3 - 1]) : (((/* implicit */unsigned long long int) 2724548634U))))));
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2 - 4] [i_2] [i_3 - 2] [i_3 - 2] [i_0]))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_5 [i_1])) + (max((((/* implicit */unsigned long long int) max(((unsigned char)31), (((/* implicit */unsigned char) var_4))))), (min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_0] [i_1] [i_1])), (14835479689308664037ULL)))))));
            var_25 = ((((/* implicit */_Bool) var_11)) ? (max((((((/* implicit */_Bool) (unsigned char)62)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))), (((/* implicit */unsigned int) (+(arr_6 [i_0] [i_1])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [(unsigned char)2])) && (((/* implicit */_Bool) arr_11 [i_0] [i_1])))))) | (min((976011634U), (((/* implicit */unsigned int) var_17)))))));
        }
    }
}
