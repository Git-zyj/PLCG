/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133185
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
    var_11 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))), (((/* implicit */int) min((var_8), (((/* implicit */signed char) var_10)))))))) : (((long long int) var_4))));
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned long long int) (unsigned char)0)), (var_3)))));
    var_13 = ((unsigned char) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((short) (unsigned char)232))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [(_Bool)1] [(short)11] [i_0] [i_2] = var_6;
                            arr_13 [i_0] [i_1] [(unsigned char)15] = ((/* implicit */unsigned char) min((6598924321974212729ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                    } 
                } 
                arr_14 [i_0] [(unsigned char)12] = ((/* implicit */unsigned short) max((min((11847819751735338872ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((_Bool) var_6)))));
                arr_15 [i_0] = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) arr_10 [i_0] [i_1] [i_0])));
            }
        } 
    } 
}
