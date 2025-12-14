/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126126
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
    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) var_9)) % (((/* implicit */int) var_8)))) != (((/* implicit */int) var_7))))) > ((-(((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_1))))))));
    var_14 = (_Bool)1;
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) < (((/* implicit */int) arr_2 [i_2] [i_0 + 1]))))), (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0]))))) % (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0] [i_0] [i_0 - 1])) ? (955303028U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]);
                }
            } 
        } 
    } 
}
