/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107111
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (((+(max((((/* implicit */unsigned long long int) 4294967265U)), (var_8))))) > (var_5))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned int) (unsigned char)255)), (8191U))))) & (var_3)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) ((unsigned int) ((unsigned long long int) (short)102)));
                    var_13 = ((/* implicit */unsigned int) -2998997978294249951LL);
                    var_14 = ((/* implicit */unsigned int) max((arr_7 [i_0]), (max((arr_7 [i_0]), (arr_7 [i_0])))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min(((((+(arr_5 [0U] [2LL]))) | (((/* implicit */long long int) arr_0 [2LL])))), (((((((/* implicit */_Bool) arr_3 [(unsigned char)0])) ? (((/* implicit */long long int) 3480331137U)) : (arr_5 [i_0] [12U]))) % (((/* implicit */long long int) ((unsigned int) 3399710649164624435ULL))))))))));
    }
    var_16 = ((/* implicit */long long int) ((((unsigned long long int) (+(var_3)))) >= (((((/* implicit */unsigned long long int) min((2440593891U), (((/* implicit */unsigned int) var_9))))) - (var_0)))));
    var_17 |= ((/* implicit */unsigned int) var_9);
}
