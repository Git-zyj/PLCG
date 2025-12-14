/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119677
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (+(((((/* implicit */int) max((var_9), (var_7)))) * (((/* implicit */int) (signed char)(-127 - 1))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4 - 1] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) arr_7 [i_4 + 1] [i_1] [i_1] [i_0]);
                                arr_16 [i_0] [i_0] [i_3] [i_2] [i_2] [(_Bool)1] [i_4 - 1] = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_10 [i_0] [i_1] [i_1] [8U] [i_2]))))))));
                }
            } 
        } 
    } 
}
