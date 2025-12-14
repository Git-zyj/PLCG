/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130246
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 6; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) (((-(arr_12 [i_0] [(unsigned char)3] [i_4] [i_0] [(unsigned short)0]))) + (((((/* implicit */_Bool) (unsigned short)18534)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_12 [i_0] [i_1] [i_4] [i_3 - 1] [i_4])))));
                                var_11 = ((/* implicit */int) (-((-(arr_3 [i_2 + 3] [i_2 + 1] [i_3 + 1])))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [6ULL] &= ((/* implicit */unsigned short) (~(min((9277670766001176589ULL), (((/* implicit */unsigned long long int) var_1))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_9))))))), ((+(((9277670766001176586ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
