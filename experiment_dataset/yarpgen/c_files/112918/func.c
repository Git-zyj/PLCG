/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112918
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
    var_10 = ((/* implicit */int) min((var_10), ((~(((/* implicit */int) var_8))))));
    var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) var_2)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) + (3239401270516739997LL)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))));
                    arr_7 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((unsigned int) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */int) var_8);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((((-3239401270516739997LL) - (-3239401270516739993LL))) | (3239401270516739991LL)));
                                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (max((var_0), (var_0))) : ((+(((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((_Bool) var_3)) ? (max((12ULL), (((/* implicit */unsigned long long int) (unsigned short)41561)))) : (((/* implicit */unsigned long long int) min((var_0), (var_0))))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */int) min((var_6), (var_7)))) % (((/* implicit */int) max((var_1), (var_2))))));
                                arr_18 [i_0 + 3] [i_1 - 1] [i_1 - 1] [i_5] [i_2] = ((/* implicit */unsigned int) (~((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9)))))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 16044698934885576741ULL))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) : (var_9))) : (max((min((var_9), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
