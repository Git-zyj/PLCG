/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170032
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
    var_10 &= ((/* implicit */short) ((min(((~(var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (var_1)))))) | (max((var_4), (max((var_6), (((/* implicit */unsigned int) var_9))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 += ((/* implicit */short) ((arr_12 [i_1] [i_2] [i_3] [i_1]) ? (((/* implicit */unsigned int) (+(((var_8) ? (((/* implicit */int) var_3)) : (var_1)))))) : (((arr_8 [i_2]) | (arr_8 [i_0 - 1])))));
                                var_12 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_3])) ? (((/* implicit */unsigned long long int) arr_8 [i_4])) : (arr_10 [i_4] [i_3] [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_8))))));
                            }
                        } 
                    } 
                    arr_13 [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) << ((((!(((/* implicit */_Bool) var_5)))) ? (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) (~(((((/* implicit */long long int) (~(var_1)))) | (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
}
