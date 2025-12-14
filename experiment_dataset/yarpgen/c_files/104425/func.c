/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104425
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)119)) % (((/* implicit */int) (unsigned char)231))));
        var_18 = (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)25)))));
        arr_3 [i_0] = ((/* implicit */_Bool) (+(arr_2 [i_0])));
    }
    var_19 = ((/* implicit */_Bool) min((var_19), (var_0)));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_13))));
    var_21 = ((/* implicit */long long int) ((int) -98487935));
    /* LoopNest 3 */
    for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */int) arr_5 [(unsigned char)4] [i_2])) + (((/* implicit */int) var_1)))), ((-(((/* implicit */int) (unsigned char)18))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))), (((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((unsigned char)127), (((/* implicit */unsigned char) var_12)))))))))))));
                }
            } 
        } 
    } 
}
