/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164491
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
    var_19 = var_12;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))) & (arr_1 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (~(var_4))))));
                            arr_8 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) var_3);
                            var_22 *= ((/* implicit */unsigned long long int) (((-(4065872875821783856ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_2] [i_1] [i_0])) << (((((max((((/* implicit */int) var_14)), (var_4))) + (8259))) - (22))))))));
                            var_23 *= (+(((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) * ((-(arr_7 [i_1] [i_1] [i_1]))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0] [i_0] [i_0])) ? (arr_6 [i_0] [i_1] [(unsigned char)3] [i_1] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (short)-20367)) ? (arr_6 [i_0] [i_0] [i_0] [i_0] [(short)18]) : (14356046256298449413ULL))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_6 [i_0] [i_0] [i_0] [i_0] [i_1])))));
                arr_9 [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1] [i_0])), (3810092794363300596ULL))) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0])), (var_7))))));
                var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)11))))) ? (max((arr_6 [i_0] [i_0] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(short)5] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) var_9)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) var_2);
    var_27 |= ((/* implicit */unsigned char) var_3);
}
