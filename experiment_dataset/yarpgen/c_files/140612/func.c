/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140612
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
    var_15 -= ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) var_3);
                            arr_8 [i_0] [i_3] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_2] [i_0] [5ULL]))));
                            arr_9 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((1444943712U) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_4 [i_0] [i_1] [i_2] [i_3]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_15 [i_5] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */_Bool) var_12);
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) arr_12 [i_0] [i_4] [(short)6] [i_0])) : (((/* implicit */int) (short)21142))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_4))))))))));
                            arr_16 [i_5] = ((/* implicit */unsigned char) var_0);
                            var_18 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (short)-3431)) / ((((_Bool)1) ? (((/* implicit */int) (short)11476)) : (((/* implicit */int) (short)-3431)))))));
                            arr_17 [i_5] [i_5] [i_1] [i_5] = ((/* implicit */signed char) ((short) (unsigned char)255));
                        }
                    } 
                } 
            }
        } 
    } 
}
