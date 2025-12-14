/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162342
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (var_18) : (var_18))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) (signed char)-12))))))))) ? (((/* implicit */int) var_15)) : (max((((((/* implicit */int) var_10)) - (((/* implicit */int) var_9)))), (((/* implicit */int) var_10))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((/* implicit */int) min((min((((/* implicit */unsigned char) var_13)), (var_11))), (min((arr_6 [i_2]), (((/* implicit */unsigned char) (signed char)-20)))))))));
                                arr_16 [i_1] [i_0] [i_3] [i_4] = ((/* implicit */short) ((signed char) arr_8 [i_2] [i_1] [i_2] [i_3]));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_1] [i_0]);
                            arr_22 [i_5] [11LL] [i_5] [i_0] = ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) var_16)) ? (var_18) : (((/* implicit */unsigned long long int) 2262717124U)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_0]))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) max((arr_7 [i_1]), (((/* implicit */unsigned char) var_4))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((((/* implicit */int) var_14)) / (((/* implicit */int) var_10))))))) * (var_8)));
    var_23 = ((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_5))))) : (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
}
