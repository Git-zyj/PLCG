/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104893
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2 + 2] [i_2 + 2] = ((/* implicit */unsigned char) ((((((4503597479886848ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) % (max((((/* implicit */unsigned long long int) ((5140172262481597754LL) >= (((/* implicit */long long int) 2792474719U))))), (((9889238493694610827ULL) % (((/* implicit */unsigned long long int) 293924684))))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 1]))))) <= (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_12);
    var_17 = ((/* implicit */short) max((((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))) & (var_6))), (((/* implicit */long long int) ((var_5) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-72)))))))));
}
