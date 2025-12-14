/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147782
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
    var_20 = var_14;
    var_21 *= ((/* implicit */unsigned char) var_19);
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_4)), (max((max((var_14), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) max((var_17), (var_1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_5 [i_1] [i_1 - 1]), (arr_5 [i_1] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1] [i_1 - 1])))) : (((/* implicit */int) arr_5 [i_1] [i_1 - 1]))));
                var_23 *= ((/* implicit */unsigned char) ((arr_1 [1ULL]) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_3 [(unsigned char)0] [i_0] [(unsigned char)0]))))), (arr_4 [(unsigned char)2])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (arr_13 [(unsigned short)4] [(unsigned short)4])));
                            arr_14 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) min((arr_8 [i_1 - 1] [i_1 - 1] [i_1]), (((/* implicit */signed char) ((((/* implicit */long long int) arr_13 [i_1] [i_1])) > (arr_7 [i_1] [i_2] [i_3]))))))), (arr_1 [i_0])));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) max((arr_8 [i_1] [i_1 - 1] [i_1]), (arr_8 [i_1 - 1] [i_1 - 1] [i_1])))) : (((((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1])) ^ (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) var_9);
}
