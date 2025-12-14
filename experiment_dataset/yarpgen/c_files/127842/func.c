/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127842
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
    var_11 = ((/* implicit */short) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] |= ((/* implicit */short) min((((/* implicit */unsigned int) var_6)), (((min((var_5), (((/* implicit */unsigned int) (unsigned char)35)))) % (((/* implicit */unsigned int) min((1165298240), (var_7))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) var_9);
                                var_13 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((long long int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */long long int) (+(arr_3 [i_0] [i_1]))))));
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */int) (unsigned char)220)) << (((8851259770018250500LL) - (8851259770018250481LL))));
                                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])), ((unsigned char)77))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_0))));
}
