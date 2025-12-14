/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166159
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
    var_14 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)34675)) / (((/* implicit */int) (unsigned short)65535)))) | ((~(((/* implicit */int) ((13436299134630778193ULL) == (((/* implicit */unsigned long long int) var_3)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((_Bool) var_8));
                                var_17 |= ((/* implicit */signed char) var_11);
                                var_18 = -5021867372420904231LL;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
