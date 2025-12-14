/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142417
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
    var_13 = ((/* implicit */unsigned short) var_5);
    var_14 = max(((~(((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))), ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)4094)) : (((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) var_11)))), (((var_12) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) 2296835809958952960ULL)) ? (((/* implicit */int) (_Bool)1)) : (1253517841)))));
                var_16 += ((/* implicit */unsigned int) var_2);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((unsigned int) ((short) (~(arr_10 [i_0] [i_1] [i_2] [i_3]))));
                                var_17 = ((/* implicit */signed char) min((16515072U), (((/* implicit */unsigned int) (-(((var_2) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))))))));
                                var_18 &= ((/* implicit */long long int) max((min((min((arr_14 [i_4] [4U] [i_2] [i_1] [5U] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [2U] [i_0] [i_2]))))), (((/* implicit */unsigned long long int) ((int) max((arr_14 [i_0] [i_0] [i_2] [i_3 - 1] [i_4] [i_1] [(unsigned short)11]), (((/* implicit */unsigned long long int) var_3))))))));
                                arr_16 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) * (arr_9 [i_1 + 2] [i_0])))))));
                                var_19 &= ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_3 - 1])) ? (arr_3 [i_3 - 1] [i_3 + 1]) : (arr_3 [i_3 + 1] [i_3 + 1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) (unsigned short)64239);
}
