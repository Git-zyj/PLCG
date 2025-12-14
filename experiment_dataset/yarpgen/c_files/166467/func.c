/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166467
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
    var_14 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_10)) & (((((/* implicit */int) var_2)) / (((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (arr_0 [i_0]))), (((/* implicit */unsigned int) ((268435455LL) < (((/* implicit */long long int) arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) var_9)) ? (((-268435458LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        var_16 = ((/* implicit */_Bool) max((17300559354052146144ULL), (((/* implicit */unsigned long long int) ((_Bool) min((4228176622U), (arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (signed char)-51);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_14 [(unsigned short)9] [i_4] [i_2] [i_3] [i_4] [i_0] [i_3] = ((/* implicit */short) var_4);
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((var_0) / (((/* implicit */long long int) ((var_4) / (((/* implicit */int) arr_10 [i_0] [i_1] [8ULL] [i_0] [(_Bool)1] [i_4]))))))) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [1LL] [i_1] [i_1] [1LL] [i_4] [i_4]))))))));
                                var_19 = ((/* implicit */short) (+(arr_9 [i_1] [i_1] [i_1] [i_1] [i_1])));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_4])) ? (((((/* implicit */_Bool) var_3)) ? (11890451845669138072ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37))))) : (((/* implicit */unsigned long long int) -6608469977143897391LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
