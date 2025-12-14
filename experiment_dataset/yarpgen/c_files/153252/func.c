/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153252
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
    var_19 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65512)) ? (((/* implicit */unsigned long long int) 35143531)) : (14016019383927549112ULL)))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) var_1)), (var_17))))) : (((((/* implicit */int) arr_1 [i_0] [i_1])) | (((/* implicit */int) var_7))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3 - 1] [i_1] = var_2;
                                arr_14 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(arr_12 [i_3 - 2] [i_1] [i_3 - 1] [i_4] [i_4 - 1])));
                                var_21 += ((/* implicit */unsigned short) arr_12 [i_2] [i_0] [i_3 - 2] [i_4 - 1] [i_4]);
                                var_22 &= ((/* implicit */int) (((((+(var_17))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
