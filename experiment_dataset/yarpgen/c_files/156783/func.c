/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156783
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_1 [i_0 - 1] [i_0 - 1]) >> (((arr_1 [i_0 - 1] [i_0 - 1]) - (5962378486453582576LL)))))), (6379464500246349697ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_21 = ((unsigned int) arr_0 [(unsigned short)11]);
                                var_22 = ((/* implicit */long long int) min((var_22), (arr_5 [i_0] [4] [i_0] [i_0])));
                                var_23 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) min((-794500762), (((/* implicit */int) (signed char)95))))), (var_18)));
                                var_24 = ((/* implicit */unsigned long long int) ((int) min(((signed char)-95), (((/* implicit */signed char) (_Bool)0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */unsigned short) var_13);
}
