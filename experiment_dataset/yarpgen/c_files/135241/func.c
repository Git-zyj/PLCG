/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135241
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
    for (long long int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((arr_0 [i_0] [i_0]) - (arr_0 [i_0 - 4] [i_1 + 1]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (arr_5 [i_0] [i_1] [i_1 + 1])))))));
                var_17 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                var_18 = ((/* implicit */unsigned char) (+(var_3)));
                arr_7 [i_1 - 2] [i_1] [i_0] = var_7;
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (~(((min((var_11), (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_2])))) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_2] [i_2] [i_2])))))))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_10))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = var_14;
    var_22 = ((/* implicit */unsigned long long int) var_5);
}
