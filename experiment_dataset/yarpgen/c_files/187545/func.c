/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187545
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((var_3), (var_10)));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2991381570877358872ULL)) ? (15455362502832192734ULL) : (15455362502832192735ULL))))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) (unsigned short)64958))))) ? (var_0) : (((/* implicit */unsigned long long int) (~(var_1)))))));
                }
            } 
        } 
        var_20 += ((((/* implicit */_Bool) ((min((((/* implicit */int) var_13)), (arr_7 [i_0] [i_0] [i_0] [i_0]))) + (((/* implicit */int) ((unsigned short) var_11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -817763710))))) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) var_9)) : ((~(var_12))))));
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((unsigned char) var_9)), (((/* implicit */unsigned char) arr_2 [7ULL])))))) + (min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18))))), (max((((/* implicit */long long int) arr_2 [i_3])), (var_4)))))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) var_0);
    }
    var_21 = ((/* implicit */_Bool) (~((-((~(2991381570877358872ULL)))))));
}
