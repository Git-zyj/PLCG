/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165186
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
    var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((10110516010387973044ULL), (8336228063321578572ULL)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_14 |= ((/* implicit */unsigned int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) - (var_6))))) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) var_0))), (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40800))))))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)23839)) : (((((/* implicit */int) var_3)) >> (((var_6) - (13411654944520744045ULL)))))))) - (max((((/* implicit */unsigned long long int) min(((signed char)-12), (var_9)))), (max((var_6), (((/* implicit */unsigned long long int) var_5))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = var_3;
}
