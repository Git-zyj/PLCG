/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108738
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
    var_14 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((((((/* implicit */int) (unsigned short)49517)) & (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-73))))))));
    var_15 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_2] [i_0] [i_2] = min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) (_Bool)1)), (arr_4 [i_0])))))));
                            var_16 = ((/* implicit */int) arr_0 [i_3 - 1] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */short) arr_14 [i_0 - 3] [i_1] [i_0 - 3] [i_5] [i_6] [i_0 - 4])), ((short)-31508))), (((/* implicit */short) max((((/* implicit */unsigned char) (signed char)-2)), ((unsigned char)255))))));
                                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)1)), (min((((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)132)))), (((/* implicit */int) (signed char)127))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
