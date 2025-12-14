/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167605
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
    var_10 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0))));
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [13LL] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1] [i_0]);
                    arr_8 [i_1] [3U] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)220)), (4021037213U)));
                    arr_9 [i_0] [i_1] [i_2 + 1] [i_2] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) max(((short)-21348), (((/* implicit */short) (_Bool)1))))) ? (((unsigned long long int) arr_2 [9])) : (((/* implicit */unsigned long long int) var_3)))));
                    arr_10 [i_0] [(unsigned char)23] [i_1] = ((/* implicit */unsigned int) ((((long long int) (!(((/* implicit */_Bool) var_7))))) - (((/* implicit */long long int) max((((/* implicit */int) arr_5 [i_2 + 1])), (var_1))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)780))));
}
