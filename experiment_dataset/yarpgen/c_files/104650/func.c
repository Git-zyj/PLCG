/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104650
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
    var_20 = ((/* implicit */_Bool) var_7);
    var_21 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_2]);
                    var_23 |= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_2])) != (((/* implicit */int) (unsigned char)0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((var_15) + (arr_3 [i_1] [i_2])))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) > (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)23))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13))) - (692312460U)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_24 += ((/* implicit */unsigned char) ((unsigned long long int) arr_10 [i_3]));
        var_25 = ((/* implicit */_Bool) (+(arr_10 [i_3])));
    }
}
