/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10658
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
    var_15 = ((/* implicit */unsigned char) var_4);
    var_16 = ((/* implicit */signed char) min((((((/* implicit */int) var_3)) != (((/* implicit */int) ((unsigned short) 2147483647))))), ((!(((/* implicit */_Bool) var_1))))));
    var_17 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-6)))) ? (var_6) : (((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) var_4))))))));
    var_18 = (-(((/* implicit */int) var_8)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [(_Bool)1] [(short)4] [i_4] [i_0] = ((/* implicit */int) var_5);
                                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) min((((/* implicit */int) var_13)), ((+(((/* implicit */int) arr_12 [(unsigned char)11] [i_3] [9U] [i_0] [i_1] [i_0])))))))));
                            }
                        } 
                    } 
                    arr_15 [(unsigned char)10] [(signed char)5] [9] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-44)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 1] [i_1] [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (((var_11) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(short)10] [i_1] [(_Bool)1] [i_1])) ? (1825659554) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))))))));
                    arr_16 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1] [i_0]))));
                }
            } 
        } 
    } 
}
