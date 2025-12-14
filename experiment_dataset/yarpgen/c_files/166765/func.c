/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166765
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
    var_20 = ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)96)) : (var_15)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_5)), (arr_2 [i_0] [i_0])))) : (((/* implicit */int) max((var_1), (var_3)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) (unsigned char)132)))) : ((-(((/* implicit */int) var_16))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_22 = ((/* implicit */signed char) min((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), ((unsigned char)132)));
                                var_23 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_4] [i_1]))))), (var_6))), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_24 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [i_3] [i_3]);
                                var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_4] [i_0] [i_4] [i_2] [i_0])))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] = max(((+(((/* implicit */int) arr_3 [i_2 + 1] [i_0 + 4])))), ((-(arr_4 [i_2 - 2]))));
                    var_26 = ((/* implicit */signed char) (~((((+(-2147483643))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)52359))))))));
                }
            } 
        } 
    } 
}
