/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152963
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_3] [i_2])) : (((/* implicit */int) arr_10 [i_0] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2])))))))));
                                arr_11 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_7), (var_15))))))) ? (((arr_4 [i_0] [i_0] [i_2 - 2] [i_2 + 1]) % (arr_4 [i_0] [i_0] [i_2] [i_2 - 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2 - 1] [i_3])) | (((/* implicit */int) var_0)))))));
                                var_20 = ((/* implicit */_Bool) ((((arr_3 [i_2 + 1] [i_1]) - (((/* implicit */int) var_3)))) % (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_2 - 2] [(short)2]) : (arr_3 [i_2 + 2] [i_1])))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 - 1] [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_4)))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_1))) & (((((/* implicit */_Bool) arr_2 [i_6 - 2])) ? (((/* implicit */int) arr_14 [i_2 - 3] [i_1] [i_6 - 1] [i_2] [i_1])) : (((/* implicit */int) arr_2 [i_6 + 1]))))));
                                var_23 &= ((/* implicit */signed char) (!((!(var_9)))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */short) (+(((/* implicit */int) (((~(((/* implicit */int) var_4)))) <= (((/* implicit */int) (signed char)-20)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((4294967295U) >> (((((/* implicit */int) (short)12161)) - (12150)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2)));
    var_25 = (~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (1226643106U))));
}
