/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100877
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
    var_12 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) (_Bool)1)));
    var_13 = ((/* implicit */int) ((signed char) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (6698465378136507639ULL))), (((/* implicit */unsigned long long int) ((_Bool) var_6))))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((unsigned char) max(((_Bool)1), ((_Bool)0))))))))));
    var_15 = ((/* implicit */unsigned short) ((unsigned long long int) min(((signed char)-123), ((signed char)122))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) max((((unsigned long long int) ((int) arr_2 [(short)4] [i_0]))), (((unsigned long long int) 18446744073709551615ULL))));
        var_16 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) max((((/* implicit */int) (_Bool)1)), (564259626)))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((((/* implicit */long long int) max((max((((/* implicit */int) (_Bool)0)), (arr_0 [i_2]))), (((/* implicit */int) max((var_4), (((/* implicit */short) (_Bool)0)))))))), (max((((long long int) (signed char)122)), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)60)), (273353696U)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0 - 1] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) ((long long int) max((((unsigned long long int) (signed char)122)), (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))))));
                                var_18 = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) (signed char)115)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
