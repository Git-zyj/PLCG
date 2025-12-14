/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186253
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
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) (-((-(4369769383367471438LL)))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [(unsigned short)8]) : (arr_1 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_3 [i_2])) ? ((+(((/* implicit */int) var_9)))) : (122709987))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 1]))))));
                                var_16 &= (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_4 - 1]))))));
                                arr_10 [i_3] [10LL] [(signed char)7] [(signed char)2] = ((((/* implicit */_Bool) ((short) arr_9 [i_4 - 1] [i_3] [i_2] [i_1] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4]))) : (arr_6 [i_1] [i_2] [(unsigned short)1]));
                                arr_11 [i_4 - 2] [i_3] [i_2] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_2] [(unsigned short)5])) : (((/* implicit */int) arr_2 [i_1] [i_3] [i_4]))))) & (arr_9 [i_4] [i_3] [i_2] [i_1] [11]))), (max((arr_9 [i_4 + 2] [i_4 - 2] [i_4] [i_4 + 2] [i_4 + 2]), (arr_9 [i_4 + 2] [i_4 - 1] [i_4] [i_4] [i_4 - 3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) >= (max((2147483647), (122709987))))) ? (((((/* implicit */int) var_8)) + (min((((/* implicit */int) var_8)), (-2147483626))))) : ((-(((((/* implicit */_Bool) var_10)) ? (-767855369) : (((/* implicit */int) var_9)))))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_9)), (var_11))), (((/* implicit */unsigned long long int) ((signed char) var_11)))))) ? (((/* implicit */int) var_12)) : ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))));
}
