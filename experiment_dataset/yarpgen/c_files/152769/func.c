/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152769
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ ((+(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (short)30693))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [(signed char)2]))))) : (var_10)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (419190363U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) : ((~(arr_0 [i_0] [i_1])))))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((unsigned int) (+(arr_3 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)115)) >= (((/* implicit */int) (short)30676))))) : ((+(((/* implicit */int) var_13)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((min((((/* implicit */int) ((signed char) arr_5 [i_2] [i_3]))), ((~(((/* implicit */int) var_12)))))) != (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                            var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) var_8))) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_2])) + (130)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) | (var_11)))) ? ((~(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_6)))))));
    var_19 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_7))))), (var_9)))));
    var_20 = ((/* implicit */short) var_10);
}
