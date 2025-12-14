/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146967
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((signed char) var_8)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_5))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [8U]))) + (var_4))) : (((/* implicit */long long int) ((/* implicit */int) min((var_7), (arr_7 [(unsigned char)8]))))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned char)5]))) : (var_3))))))))));
                        arr_12 [i_2] [9LL] [i_2 + 1] = ((/* implicit */long long int) ((_Bool) (((-(var_4))) > (((/* implicit */long long int) ((arr_7 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((/* implicit */unsigned int) ((int) -1LL))), (var_3))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)42))))) < (1125899906842616ULL))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)232)))), (((/* implicit */int) min((var_7), (var_7))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (var_2))))) > (var_3)))) : (((/* implicit */int) ((unsigned char) var_5)))));
}
