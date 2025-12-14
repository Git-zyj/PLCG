/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169481
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
    var_14 = ((/* implicit */signed char) var_6);
    var_15 = ((/* implicit */int) var_0);
    var_16 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) var_12);
                                var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))));
                                var_20 |= ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
