/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161723
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
    var_10 = ((/* implicit */unsigned short) -484657928);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_2 [i_0])))))));
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) ((((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (max((var_0), (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_1])))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2133917297U)) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_1 [18LL] [i_2])))))));
                    var_13 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)20981)))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_4 [i_1] [i_1 - 1]));
                    arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1 - 1])) >= (((/* implicit */int) arr_7 [i_0] [i_1 - 1]))))) - (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_0] [i_1 - 1])), (var_1))))));
                    var_14 = ((((/* implicit */int) arr_7 [i_0] [4U])) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1 - 1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                }
            } 
        } 
    }
}
