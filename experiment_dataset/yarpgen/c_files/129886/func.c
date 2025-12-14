/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129886
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 2] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) min(((unsigned short)21487), (((/* implicit */unsigned short) (unsigned char)104))))), (max((var_12), (((/* implicit */long long int) var_9))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */short) var_6);
                                var_15 ^= ((/* implicit */long long int) max((((unsigned int) max((((/* implicit */unsigned short) (unsigned char)64)), (var_2)))), (((/* implicit */unsigned int) (unsigned short)240))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(unsigned char)2] [i_1] [i_2] [i_3] [i_3])) && (((/* implicit */_Bool) var_0))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)240)) >= (((/* implicit */int) (unsigned char)200))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_0);
    var_19 |= ((/* implicit */unsigned int) var_6);
    var_20 = ((/* implicit */unsigned char) min((-2373125103998238652LL), (((/* implicit */long long int) max(((unsigned short)62049), (((/* implicit */unsigned short) (unsigned char)33)))))));
}
