/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166205
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] &= ((/* implicit */short) min((((/* implicit */long long int) (~((~(((/* implicit */int) arr_5 [(signed char)13] [13] [(unsigned char)13] [i_3]))))))), (((((/* implicit */_Bool) arr_6 [i_0] [(signed char)2] [i_2] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(short)9] [i_2] [i_3])))))) : (min((((/* implicit */long long int) var_6)), (7957959853969429623LL)))))));
                            var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [(short)1] [i_2]))))), (max((((/* implicit */unsigned int) var_4)), (max((arr_2 [2]), (((/* implicit */unsigned int) var_8))))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((min((arr_9 [i_0] [(_Bool)1] [8U] [i_0] [i_0]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_3] [i_1] [i_3])) : (((/* implicit */int) ((var_1) <= (((/* implicit */int) var_4)))))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)44729)) || (((((((/* implicit */_Bool) var_12)) ? (var_11) : (var_13))) > (max((1351895702U), (((/* implicit */unsigned int) (unsigned short)44716))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (((_Bool)1) ? (min((var_11), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44729)))));
}
