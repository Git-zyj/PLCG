/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124202
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) (_Bool)1)), (((long long int) (_Bool)1)))) * (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)193)))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) 528605910))));
                    var_18 = ((/* implicit */_Bool) (-((+(-973014618)))));
                }
            } 
        } 
    }
    var_19 = max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32124))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) (unsigned short)28820)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44199))) : (11069762600977051922ULL))))), (((/* implicit */unsigned long long int) (_Bool)1)));
}
