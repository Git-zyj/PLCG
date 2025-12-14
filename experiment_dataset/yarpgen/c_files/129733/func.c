/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129733
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
    var_19 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((10983629150914000528ULL) - (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1337))))) << ((((((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))))) + (8))) - (7)))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((var_9), (var_9)))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 5492639499806722312LL))));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (short)-1368))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_10))) * (-5492639499806722330LL))) | (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_23 = ((/* implicit */_Bool) arr_0 [i_0 + 1]);
        var_24 &= ((/* implicit */_Bool) (+(arr_0 [i_0 + 2])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */_Bool) ((5492639499806722327LL) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned short)9] [i_2])))))) ? (((arr_2 [i_1] [(unsigned char)11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1337))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-5492639499806722330LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [4U]))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-1326))) % (5492639499806722330LL)))))))))));
                        var_26 = ((/* implicit */long long int) arr_1 [i_0] [i_1 + 1]);
                        var_27 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                    }
                    var_28 = ((/* implicit */signed char) ((arr_10 [i_0 + 2]) / (((((/* implicit */_Bool) arr_10 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_0 - 1])))));
                }
            } 
        } 
    }
}
