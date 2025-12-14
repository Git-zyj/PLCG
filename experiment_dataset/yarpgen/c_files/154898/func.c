/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154898
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
    var_14 = ((/* implicit */int) var_7);
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_3))));
    var_16 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [5U] [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_4 [i_1] [(unsigned short)6]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0 - 2])) != (((/* implicit */int) arr_0 [i_0 + 1] [(_Bool)1])))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0 - 2])))))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 8; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_17 = var_13;
                            var_18 = ((/* implicit */_Bool) ((unsigned char) arr_10 [4] [i_0 + 1] [i_2] [i_0 - 2]));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_9))));
                        }
                    } 
                } 
                arr_11 [i_0 - 2] [i_1] = ((/* implicit */_Bool) max((max((arr_6 [(_Bool)1] [i_0] [(unsigned char)2]), (((/* implicit */long long int) arr_2 [i_0])))), ((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_10 [i_1] [i_0] [i_0] [i_0 - 1])) : (-8054690944667972646LL)))))));
            }
        } 
    } 
}
