/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179907
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [10U] [i_1] [6] [i_2] = ((/* implicit */unsigned short) min((max((4927391950600149852LL), (((/* implicit */long long int) (signed char)-77)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)5)))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) 4927391950600149852LL))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_13 [i_0] [1ULL] [3U] [1ULL] [i_3] = max((max((((/* implicit */unsigned long long int) (_Bool)1)), (7ULL))), (min((7ULL), (((/* implicit */unsigned long long int) min(((unsigned short)46039), (((/* implicit */unsigned short) (unsigned char)61))))))));
                        arr_14 [i_0] [i_1] [i_1] [i_3] [i_2] [i_1] = (+(((/* implicit */int) (signed char)-51)));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) 16710450190188378213ULL);
    var_19 = ((/* implicit */signed char) min((((/* implicit */int) min((var_14), (((/* implicit */signed char) (!((_Bool)1))))))), (max(((-(((/* implicit */int) (unsigned short)45867)))), (((/* implicit */int) (unsigned short)37250))))));
}
