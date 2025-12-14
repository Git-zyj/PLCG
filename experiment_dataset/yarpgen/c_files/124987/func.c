/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124987
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)206)) ^ (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)49)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((1245422640U) << (((((/* implicit */int) (unsigned short)25650)) - (25641))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (266441192U)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] [i_1 - 2] [i_2] [i_3 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)59)) ? (arr_1 [(_Bool)1] [i_1]) : (((/* implicit */int) arr_9 [i_3] [i_1] [i_2] [i_3] [i_3]))));
                            var_15 *= ((/* implicit */unsigned char) arr_1 [9ULL] [i_3]);
                        }
                    } 
                } 
                var_16 = ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [20U] [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1]))) * (arr_6 [i_1])))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (unsigned char)49)))));
            }
        } 
    } 
}
