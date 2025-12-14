/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150943
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */int) arr_0 [i_0] [(signed char)18])) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_18) : (((/* implicit */unsigned int) var_3)))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [12ULL] [i_0])) >> (((/* implicit */int) arr_1 [i_0]))))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_1 [i_3]))));
                        var_22 += ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) max((arr_9 [i_0] [i_2] [i_3]), (((/* implicit */int) arr_2 [(unsigned char)18]))))) ? (var_19) : (((/* implicit */unsigned long long int) max((arr_9 [i_1] [i_1] [i_3]), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))))));
                        var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)26740)) && (((/* implicit */_Bool) 511))))), (((((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_11))))) : (max((((/* implicit */long long int) (unsigned short)26731)), (5LL)))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) (unsigned short)38796);
    }
    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_15)) + (((/* implicit */int) var_7)))) + (((/* implicit */int) var_14))));
    var_26 = ((/* implicit */signed char) var_19);
}
