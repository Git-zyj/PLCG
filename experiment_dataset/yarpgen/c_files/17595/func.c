/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17595
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
    var_20 = ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) var_7)) ? (var_12) : (var_12))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_17)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_1 [0U])) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) ((unsigned short) arr_1 [10])))))))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_2 [i_0] [i_0]))))) + (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (((long long int) ((unsigned char) var_18)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3]), (arr_5 [8ULL] [i_1] [i_1] [i_3]))))) : ((~(var_7))))));
                            arr_11 [(unsigned char)2] [7] [7] [i_0] = ((/* implicit */int) min((401717094U), (((/* implicit */unsigned int) (unsigned char)35))));
                            var_23 = ((/* implicit */unsigned int) ((signed char) max((max((var_6), (arr_1 [i_0]))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0]))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (signed char)74)) ? (3893250202U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_19))));
}
